#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterMappingConfig; }
namespace MoleMole { class MonsterMappingEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_C8AA3B38C566F726_METHOD_1_114F1BA20878AC9A_OFFSET UNITYSDK_OFFSET(0x1067B560)
#define CLASS_1_C8AA3B38C566F726_METHOD_1_6E46030B497D1749_OFFSET UNITYSDK_OFFSET(0x1067B860)
#define CLASS_1_C8AA3B38C566F726_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x1067B770)

inline static constexpr unsigned int Class_1_C8AA3B38C566F726_TypeDefinitionIndex = 58781;

class Class_1_C8AA3B38C566F726 : public ::System::Object
{
public:
	static ::MoleMole::MonsterMappingConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::MonsterMappingConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8AA3B38C566F726_TypeDefinitionIndex)->GetStaticField(0x2A430);
	}

	static ::System::Boolean Method_1_114F1BA20878AC9A(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::MonsterMappingEntry*& a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::MoleMole::MonsterMappingEntry*&))((::PBYTE)hIl2Cpp + CLASS_1_C8AA3B38C566F726_METHOD_1_114F1BA20878AC9A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C8AA3B38C566F726_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_6E46030B497D1749(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C8AA3B38C566F726_METHOD_1_6E46030B497D1749_OFFSET))(a1, a2);
	}
};
