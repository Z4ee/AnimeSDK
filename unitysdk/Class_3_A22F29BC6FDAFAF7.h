#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0580D4156EBFF943.h"

namespace RPG::Client { class GridFightTraitBonusConfig; }
namespace RPG::Client { class GridFightTraitSpaceEffect; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_A22F29BC6FDAFAF7_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15AA3120)
#define CLASS_3_A22F29BC6FDAFAF7_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15AA3210)
#define CLASS_3_A22F29BC6FDAFAF7_METHOD_3_09CAACC50ADBF8F6_OFFSET UNITYSDK_OFFSET(0x15AA2670)
#define CLASS_3_A22F29BC6FDAFAF7_METHOD_3_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0x15AA2F70)
#define CLASS_3_A22F29BC6FDAFAF7_METHOD_3_165178681EB5F017_OFFSET UNITYSDK_OFFSET(0x15AA2930)
#define CLASS_3_A22F29BC6FDAFAF7_METHOD_3_A4BAC8F69A1CF480_OFFSET UNITYSDK_OFFSET(0x15AA29A0)
#define CLASS_3_A22F29BC6FDAFAF7_METHOD_3_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x15AA2700)
#define CLASS_3_A22F29BC6FDAFAF7_METHOD_3_BB8A6DF65A58477D_OFFSET UNITYSDK_OFFSET(0x15AA2B70)
#define CLASS_3_A22F29BC6FDAFAF7_METHOD_3_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x15AA2A70)
#define CLASS_3_A22F29BC6FDAFAF7__CTOR_OFFSET UNITYSDK_OFFSET(0x15AA32E0)
#define CLASS_3_A22F29BC6FDAFAF7___UPDATEEFFECTDATA_B__2_0_OFFSET UNITYSDK_OFFSET(0x15AA3350)

inline static constexpr unsigned int Class_3_A22F29BC6FDAFAF7_TypeDefinitionIndex = 72224;

class Class_3_A22F29BC6FDAFAF7 : public ::Class_2_0580D4156EBFF943
{
public:
	::RPG::Client::GridFightTraitBonusConfig* ODCBJGENKDF; // 0x128
	::RPG::Client::GridFightTraitSpaceEffect* CCKHOKFBBEE; // 0x130
	::System::UInt32 MEOFDHOMCKP; // 0x138

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A22F29BC6FDAFAF7__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_09CAACC50ADBF8F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A22F29BC6FDAFAF7_METHOD_3_09CAACC50ADBF8F6_OFFSET))(this);
	}

	::System::Void Method_3_A4BAC8F69A1CF480(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_3_A22F29BC6FDAFAF7_METHOD_3_A4BAC8F69A1CF480_OFFSET))(this, a1);
	}

	::System::Void Method_3_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A22F29BC6FDAFAF7_METHOD_3_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_3_165178681EB5F017()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A22F29BC6FDAFAF7_METHOD_3_165178681EB5F017_OFFSET))(this);
	}

	::System::Void Method_3_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_A22F29BC6FDAFAF7_METHOD_3_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::String* Method_3_BB8A6DF65A58477D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A22F29BC6FDAFAF7_METHOD_3_BB8A6DF65A58477D_OFFSET))(this);
	}

	::System::Void Method_3_0D64F99BAAA7B5C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_A22F29BC6FDAFAF7_METHOD_3_0D64F99BAAA7B5C4_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A22F29BC6FDAFAF7_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A22F29BC6FDAFAF7_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Boolean __UpdateEffectData_b__2_0(::RPG::Client::GridFightTraitBonusConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + CLASS_3_A22F29BC6FDAFAF7___UPDATEEFFECTDATA_B__2_0_OFFSET))(this, a1);
	}
};
