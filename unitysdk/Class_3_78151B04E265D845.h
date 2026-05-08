#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/BuddyFightModeType.h"

class Class_1_8289F2785D9AA990;
namespace System { class Action; }

#define CLASS_3_78151B04E265D845_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x131A67A0)
#define CLASS_3_78151B04E265D845_METHOD_3_0531C880F2BCBA4A_OFFSET UNITYSDK_OFFSET(0x131A6890)
#define CLASS_3_78151B04E265D845_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x131A6960)
#define CLASS_3_78151B04E265D845_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x131A68E0)
#define CLASS_3_78151B04E265D845_METHOD_3_ED72E29907E8D552_OFFSET UNITYSDK_OFFSET(0x131A6880)
#define CLASS_3_78151B04E265D845_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x131A66E0)
#define CLASS_3_78151B04E265D845__CCTOR_OFFSET UNITYSDK_OFFSET(0x131A67F0)
#define CLASS_3_78151B04E265D845__CTOR_OFFSET UNITYSDK_OFFSET(0x131A6870)

inline static constexpr unsigned int Class_3_78151B04E265D845_TypeDefinitionIndex = 80281;

class Class_3_78151B04E265D845 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0xC4; // 0x0
	::Class_1_8289F2785D9AA990* Field_3_2; // 0x48
	::System::Action* Field_3_4; // 0x50
	::Class_1_8289F2785D9AA990* Field_3_1; // 0x58
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

	::MoleMole::Config::BuddyFightModeType Method_3_ED72E29907E8D552()
	{
		return ((::MoleMole::Config::BuddyFightModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78151B04E265D845_METHOD_3_ED72E29907E8D552_OFFSET))(this);
	}

	::System::Void Method_3_0531C880F2BCBA4A(::MoleMole::Config::BuddyFightModeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BuddyFightModeType))((::PBYTE)hIl2Cpp + CLASS_3_78151B04E265D845_METHOD_3_0531C880F2BCBA4A_OFFSET))(this, a1);
	}

	static ::Class_3_78151B04E265D845* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_78151B04E265D845*(*)())((::PBYTE)hIl2Cpp + CLASS_3_78151B04E265D845_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78151B04E265D845_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
