#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUITriDiceOracle; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F1101F767125A6BE_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x17A44C40)
#define CLASS_1_F1101F767125A6BE_METHOD_1_4C9717BAC49A1DCF_OFFSET UNITYSDK_OFFSET(0x17A44D70)
#define CLASS_1_F1101F767125A6BE_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x17A45170)
#define CLASS_1_F1101F767125A6BE_METHOD_1_96C7FAA41B688781_OFFSET UNITYSDK_OFFSET(0x17A44DC0)
#define CLASS_1_F1101F767125A6BE_METHOD_1_EBF470E3F8B8D98D_OFFSET UNITYSDK_OFFSET(0x17A45120)

inline static constexpr unsigned int Class_1_F1101F767125A6BE_TypeDefinitionIndex = 51779;

class Class_1_F1101F767125A6BE : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUITriDiceOracle** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigUITriDiceOracle**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1101F767125A6BE_TypeDefinitionIndex)->GetStaticField(0x41680);
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F1101F767125A6BE_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4C9717BAC49A1DCF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F1101F767125A6BE_METHOD_1_4C9717BAC49A1DCF_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigUITriDiceOracle* Method_1_EBF470E3F8B8D98D()
	{
		return ((::MoleMole::Config::ConfigUITriDiceOracle*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F1101F767125A6BE_METHOD_1_EBF470E3F8B8D98D_OFFSET))();
	}

	static ::System::Void Method_1_96C7FAA41B688781(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F1101F767125A6BE_METHOD_1_96C7FAA41B688781_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F1101F767125A6BE_METHOD_1_79830F666EE579C0_OFFSET))();
	}
};
