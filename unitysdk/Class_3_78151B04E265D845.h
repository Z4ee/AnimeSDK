#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/BuddyFightModeType.h"

class Class_1_8289F2785D9AA990;
namespace System { class Action; }

#define CLASS_3_78151B04E265D845_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15075570)
#define CLASS_3_78151B04E265D845_METHOD_3_0531C880F2BCBA4A_OFFSET UNITYSDK_OFFSET(0x150756D0)
#define CLASS_3_78151B04E265D845_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15075720)
#define CLASS_3_78151B04E265D845_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x15075650)
#define CLASS_3_78151B04E265D845_METHOD_3_ED72E29907E8D552_OFFSET UNITYSDK_OFFSET(0x150757B0)
#define CLASS_3_78151B04E265D845_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x150754C0)
#define CLASS_3_78151B04E265D845__CCTOR_OFFSET UNITYSDK_OFFSET(0x150755C0)
#define CLASS_3_78151B04E265D845__CTOR_OFFSET UNITYSDK_OFFSET(0x15075640)

inline static constexpr unsigned int Class_3_78151B04E265D845_TypeDefinitionIndex = 74285;

class Class_3_78151B04E265D845 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0xCF; // 0x0
	::Class_1_8289F2785D9AA990* Field_3_2; // 0x48
	::Class_1_8289F2785D9AA990* Field_3_1; // 0x50
	::System::Action* Field_3_4; // 0x58
	::System::Action* Field_3_3; // 0x60
	::MoleMole::Config::BuddyFightModeType Field_3_0; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_78151B04E265D845__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78151B04E265D845__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78151B04E265D845_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78151B04E265D845_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_78151B04E265D845* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_78151B04E265D845*(*)())((::PBYTE)hIl2Cpp + CLASS_3_78151B04E265D845_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_0531C880F2BCBA4A(::MoleMole::Config::BuddyFightModeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BuddyFightModeType))((::PBYTE)hIl2Cpp + CLASS_3_78151B04E265D845_METHOD_3_0531C880F2BCBA4A_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78151B04E265D845_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::MoleMole::Config::BuddyFightModeType Method_3_ED72E29907E8D552()
	{
		return ((::MoleMole::Config::BuddyFightModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78151B04E265D845_METHOD_3_ED72E29907E8D552_OFFSET))(this);
	}
};
