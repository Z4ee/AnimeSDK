#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterSpecialIdleConfig; }
namespace MoleMole { class MonsterSpecialIdleEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_90771BD983DA4E3F_METHOD_1_6E46030B497D1749_OFFSET UNITYSDK_OFFSET(0x1172F710)
#define CLASS_1_90771BD983DA4E3F_METHOD_1_871F87982A3A1A15_OFFSET UNITYSDK_OFFSET(0x1172FA20)
#define CLASS_1_90771BD983DA4E3F_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x1172F930)

inline static constexpr unsigned int Class_1_90771BD983DA4E3F_TypeDefinitionIndex = 50077;

class Class_1_90771BD983DA4E3F : public ::System::Object
{
public:
	static ::MoleMole::MonsterSpecialIdleConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::MonsterSpecialIdleConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90771BD983DA4E3F_TypeDefinitionIndex)->GetStaticField(0x45CD0);
	}

	static ::System::Void Method_1_6E46030B497D1749(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_90771BD983DA4E3F_METHOD_1_6E46030B497D1749_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_90771BD983DA4E3F_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_871F87982A3A1A15(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::MonsterSpecialIdleEntry*& a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::MoleMole::MonsterSpecialIdleEntry*&))((::PBYTE)hIl2Cpp + CLASS_1_90771BD983DA4E3F_METHOD_1_871F87982A3A1A15_OFFSET))(a1, a2, a3);
	}
};
