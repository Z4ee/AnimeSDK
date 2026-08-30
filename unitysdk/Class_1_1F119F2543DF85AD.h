#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicTypeExtra.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_2_2461A19B320A03F9;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HitMotionParams; }
namespace System { class String; }

#define CLASS_1_1F119F2543DF85AD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE15A80)
#define CLASS_1_1F119F2543DF85AD_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xBE15E10)
#define CLASS_1_1F119F2543DF85AD_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0xBE15D00)
#define CLASS_1_1F119F2543DF85AD_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xBE15AE0)
#define CLASS_1_1F119F2543DF85AD_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBE15E90)
#define CLASS_1_1F119F2543DF85AD_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xBE15EA0)
#define CLASS_1_1F119F2543DF85AD__CTOR_OFFSET UNITYSDK_OFFSET(0xBE15EF0)

inline static constexpr unsigned int Class_1_1F119F2543DF85AD_TypeDefinitionIndex = 57074;

class Class_1_1F119F2543DF85AD : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x10
	::Class_2_2461A19B320A03F9* CGEHIKEMOFP; // 0x18
	::System::String* POCLNOBKHFH; // 0x20
	::RPG::GameCore::HitMotionParams* EGKEPFCFPKB; // 0x28
	::RPG::MVector3 ACGINICEHML; // 0x30
	::System::Single HKGPLKJOCDH; // 0x3C
	::System::Single MIAPBKLMCLO; // 0x40
	::System::Single IJAJOGNGEIK; // 0x44
	::RPG::GameCore::AnimStateLogicTypeExtra HBOPCMCGHAA; // 0x48
	::RPG::MVector3 PNMLLANDNKM; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F119F2543DF85AD__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F119F2543DF85AD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F119F2543DF85AD_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1F119F2543DF85AD_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::Class_1_1F119F2543DF85AD* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_1F119F2543DF85AD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F119F2543DF85AD_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F119F2543DF85AD_METHOD_1_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F119F2543DF85AD_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
