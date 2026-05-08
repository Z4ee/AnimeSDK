#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowPlayer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_77F942E675411A5C_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x1080E520)
#define CLASS_1_77F942E675411A5C_METHOD_1_4C9717BAC49A1DCF_OFFSET UNITYSDK_OFFSET(0x1080E180)
#define CLASS_1_77F942E675411A5C_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x1080DFE0)
#define CLASS_1_77F942E675411A5C_METHOD_1_8103AAC59BE0854D_OFFSET UNITYSDK_OFFSET(0x1080E650)
#define CLASS_1_77F942E675411A5C_METHOD_1_96C7FAA41B688781_OFFSET UNITYSDK_OFFSET(0x1080E1D0)

inline static constexpr unsigned int Class_1_77F942E675411A5C_TypeDefinitionIndex = 55572;

class Class_1_77F942E675411A5C : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowPlayer** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigHollowPlayer**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77F942E675411A5C_TypeDefinitionIndex)->GetStaticField(0x3BFE0);
	}

	static ::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77F942E675411A5C_METHOD_1_79830F666EE579C0_OFFSET))();
	}

	static ::System::Void Method_1_96C7FAA41B688781(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_77F942E675411A5C_METHOD_1_96C7FAA41B688781_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77F942E675411A5C_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4C9717BAC49A1DCF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_77F942E675411A5C_METHOD_1_4C9717BAC49A1DCF_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigHollowPlayer* Method_1_8103AAC59BE0854D()
	{
		return ((::MoleMole::Config::ConfigHollowPlayer*(*)())((::PBYTE)hIl2Cpp + CLASS_1_77F942E675411A5C_METHOD_1_8103AAC59BE0854D_OFFSET))();
	}
};
