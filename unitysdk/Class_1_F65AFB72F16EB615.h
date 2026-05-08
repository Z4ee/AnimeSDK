#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowTimeRewind; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F65AFB72F16EB615_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x13969000)
#define CLASS_1_F65AFB72F16EB615_METHOD_1_4C9717BAC49A1DCF_OFFSET UNITYSDK_OFFSET(0x13969130)
#define CLASS_1_F65AFB72F16EB615_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x13969520)
#define CLASS_1_F65AFB72F16EB615_METHOD_1_96C7FAA41B688781_OFFSET UNITYSDK_OFFSET(0x13969180)
#define CLASS_1_F65AFB72F16EB615_METHOD_1_AD68373BFA69B180_OFFSET UNITYSDK_OFFSET(0x139694D0)

inline static constexpr unsigned int Class_1_F65AFB72F16EB615_TypeDefinitionIndex = 69445;

class Class_1_F65AFB72F16EB615 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowTimeRewind** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigHollowTimeRewind**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F65AFB72F16EB615_TypeDefinitionIndex)->GetStaticField(0x31BD0);
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F65AFB72F16EB615_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4C9717BAC49A1DCF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F65AFB72F16EB615_METHOD_1_4C9717BAC49A1DCF_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigHollowTimeRewind* Method_1_AD68373BFA69B180()
	{
		return ((::MoleMole::Config::ConfigHollowTimeRewind*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F65AFB72F16EB615_METHOD_1_AD68373BFA69B180_OFFSET))();
	}

	static ::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F65AFB72F16EB615_METHOD_1_79830F666EE579C0_OFFSET))();
	}

	static ::System::Void Method_1_96C7FAA41B688781(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F65AFB72F16EB615_METHOD_1_96C7FAA41B688781_OFFSET))(a1, a2);
	}
};
