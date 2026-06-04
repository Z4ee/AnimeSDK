#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0580D4156EBFF943.h"

namespace RPG::Client { class GridFightTraitBonusConfig; }
namespace RPG::Client { class GridFightTraitSpaceEffect; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_9BD4DC5861D61B1D_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13C3B320)
#define CLASS_3_9BD4DC5861D61B1D_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13C3B410)
#define CLASS_3_9BD4DC5861D61B1D_METHOD_3_06C693BDD85AB9E2_OFFSET UNITYSDK_OFFSET(0x13C3B5F0)
#define CLASS_3_9BD4DC5861D61B1D_METHOD_3_2CD6D17D088D5DB9_OFFSET UNITYSDK_OFFSET(0x13BFDBC0)
#define CLASS_3_9BD4DC5861D61B1D_METHOD_3_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x13BFDE40)
#define CLASS_3_9BD4DC5861D61B1D_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13C3B590)
#define CLASS_3_9BD4DC5861D61B1D_METHOD_3_A4BAC8F69A1CF480_OFFSET UNITYSDK_OFFSET(0x13BFDEC0)
#define CLASS_3_9BD4DC5861D61B1D_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x13BFDC50)
#define CLASS_3_9BD4DC5861D61B1D_METHOD_3_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x13C3B260)
#define CLASS_3_9BD4DC5861D61B1D_METHOD_3_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x13BFDF90)
#define CLASS_3_9BD4DC5861D61B1D_METHOD_3_F8B18E2D1A827FD9_OFFSET UNITYSDK_OFFSET(0x13BFE030)
#define CLASS_3_9BD4DC5861D61B1D__CTOR_OFFSET UNITYSDK_OFFSET(0x13C3B4E0)
#define CLASS_3_9BD4DC5861D61B1D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13C3B650)
#define CLASS_3_9BD4DC5861D61B1D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13C3B6B0)
#define CLASS_3_9BD4DC5861D61B1D___UPDATEEFFECTDATA_B__2_0_OFFSET UNITYSDK_OFFSET(0x13C3B550)

inline static constexpr unsigned int Class_3_9BD4DC5861D61B1D_TypeDefinitionIndex = 67542;

class Class_3_9BD4DC5861D61B1D : public ::Class_2_0580D4156EBFF943
{
public:
	::RPG::Client::GridFightTraitBonusConfig* Field_3_0; // 0x120
	::RPG::Client::GridFightTraitSpaceEffect* Field_3_1; // 0x128
	::System::UInt32 Field_3_2; // 0x130

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9BD4DC5861D61B1D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_2CD6D17D088D5DB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9BD4DC5861D61B1D_METHOD_3_2CD6D17D088D5DB9_OFFSET))(this);
	}

	::System::Void Method_3_A4BAC8F69A1CF480(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_3_9BD4DC5861D61B1D_METHOD_3_A4BAC8F69A1CF480_OFFSET))(this, a1);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9BD4DC5861D61B1D_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9BD4DC5861D61B1D_METHOD_3_3AC94EEB348AAF2D_OFFSET))(this);
	}

	::System::Void Method_3_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_9BD4DC5861D61B1D_METHOD_3_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::String* Method_3_F8B18E2D1A827FD9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9BD4DC5861D61B1D_METHOD_3_F8B18E2D1A827FD9_OFFSET))(this);
	}

	::System::Void Method_3_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_9BD4DC5861D61B1D_METHOD_3_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9BD4DC5861D61B1D_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9BD4DC5861D61B1D_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Boolean __UpdateEffectData_b__2_0(::RPG::Client::GridFightTraitBonusConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + CLASS_3_9BD4DC5861D61B1D___UPDATEEFFECTDATA_B__2_0_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9BD4DC5861D61B1D_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_06C693BDD85AB9E2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_9BD4DC5861D61B1D_METHOD_3_06C693BDD85AB9E2_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9BD4DC5861D61B1D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9BD4DC5861D61B1D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
