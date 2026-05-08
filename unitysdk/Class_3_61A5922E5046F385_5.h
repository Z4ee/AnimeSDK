#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_DB663931210BBC27_25.h"
#include "unitysdk/MoleMole/Config/BuddyBehaviourType.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"

class Class_1_8289F2785D9AA990;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_61A5922E5046F385_5_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x105114B0)
#define CLASS_3_61A5922E5046F385_5_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x10511BE0)
#define CLASS_3_61A5922E5046F385_5_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x105117F0)
#define CLASS_3_61A5922E5046F385_5_METHOD_3_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x10511870)
#define CLASS_3_61A5922E5046F385_5_METHOD_3_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x10511C70)
#define CLASS_3_61A5922E5046F385_5_METHOD_3_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x10511B40)
#define CLASS_3_61A5922E5046F385_5_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x10510F10)
#define CLASS_3_61A5922E5046F385_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x10511500)
#define CLASS_3_61A5922E5046F385_5__CTOR_OFFSET UNITYSDK_OFFSET(0x10511580)

inline static constexpr unsigned int Class_3_61A5922E5046F385_5_TypeDefinitionIndex = 65883;

class Class_3_61A5922E5046F385_5 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_27 = 0x86; // 0x0
	::System::Collections::Generic::Dictionary_2<::Enum_3_DB663931210BBC27_25, ::System::Collections::Generic::List_1<::MoleMole::Config::BuddyBehaviourType>*>* Field_3_3; // 0x48
	::System::Action_2<::Enum_3_DB663931210BBC27_25, ::MoleMole::Config::BuddyBehaviourType>* Field_3_4; // 0x50
	::System::Collections::Generic::Dictionary_2<::Enum_3_DB663931210BBC27_25, ::MoleMole::Config::BuddyBehaviourType>* Field_3_2; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_19; // 0x60
	::System::Collections::Generic::Dictionary_2<::Enum_3_DB663931210BBC27_25, ::System::Boolean>* Field_3_0; // 0x68
	::MoleMole::Config::ConfigPosRot* Field_3_22; // 0x70
	::Class_1_8289F2785D9AA990* Field_3_8; // 0x78
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_25; // 0x80
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_5; // 0x88
	::MoleMole::Battle::AnimatorParamControl* Field_3_16; // 0x90
	::MoleMole::Battle::AnimatorParamControl* Field_3_15; // 0x98
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_3_26; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_20; // 0xA8
	::System::Collections::Generic::Dictionary_2<::Enum_3_DB663931210BBC27_25, ::System::Boolean>* Field_3_1; // 0xB0
	::System::Action_2<::Enum_3_DB663931210BBC27_25, ::System::Boolean>* Field_3_23; // 0xB8
	::System::Single Field_3_14; // 0xC0
	::System::Int32 Field_3_18; // 0xC4
	::System::Boolean Field_3_13; // 0xC8
	::System::Boolean Field_3_24; // 0xC9
	::System::Boolean Field_3_10; // 0xCA
	::System::Boolean Field_3_11; // 0xCB
	::System::Int32 Field_3_17; // 0xCC
	::System::Boolean Field_3_21; // 0xD0
	::System::Boolean Field_3_7; // 0xD1
	::System::Boolean Field_3_6; // 0xD2
	::System::Boolean Field_3_9; // 0xD3
	::System::Single Field_3_12; // 0xD4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_5__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_5__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_5_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_5_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_61A5922E5046F385_5* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_61A5922E5046F385_5*(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_5_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_5_METHOD_3_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_5_METHOD_3_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_5_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_5_METHOD_3_FF7B2911BBACA4A9_1_OFFSET))(this);
	}
};
