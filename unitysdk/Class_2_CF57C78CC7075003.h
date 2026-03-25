#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BattleTargetConfigType.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleRaidTargetChangeParams; }
namespace RPG::GameCore { class BattleTargetChangeParams; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }

#define CLASS_2_CF57C78CC7075003_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x116B30A0)
#define CLASS_2_CF57C78CC7075003_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x116B31F0)
#define CLASS_2_CF57C78CC7075003_METHOD_2_048FA601E6EC5C91_OFFSET UNITYSDK_OFFSET(0x116B2A10)
#define CLASS_2_CF57C78CC7075003_METHOD_2_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x116B2860)
#define CLASS_2_CF57C78CC7075003_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x116B26E0)
#define CLASS_2_CF57C78CC7075003_METHOD_2_39A9FE040505BFA5_OFFSET UNITYSDK_OFFSET(0x116B28D0)
#define CLASS_2_CF57C78CC7075003_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x116B1DF0)
#define CLASS_2_CF57C78CC7075003_METHOD_2_49864B3B164A1961_OFFSET UNITYSDK_OFFSET(0x116B2140)
#define CLASS_2_CF57C78CC7075003_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x116B33A0)
#define CLASS_2_CF57C78CC7075003_METHOD_2_77A1C88EE6B459EB_OFFSET UNITYSDK_OFFSET(0x116B1FB0)
#define CLASS_2_CF57C78CC7075003_METHOD_2_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x116B2740)
#define CLASS_2_CF57C78CC7075003_METHOD_2_8CA1933EC1F9B137_OFFSET UNITYSDK_OFFSET(0x116B1F60)
#define CLASS_2_CF57C78CC7075003_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x116B2EF0)
#define CLASS_2_CF57C78CC7075003_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x116B2E40)
#define CLASS_2_CF57C78CC7075003_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x116B2F90)
#define CLASS_2_CF57C78CC7075003_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x116B2D70)
#define CLASS_2_CF57C78CC7075003_METHOD_2_FD1726F5C8763865_OFFSET UNITYSDK_OFFSET(0x116B21A0)
#define CLASS_2_CF57C78CC7075003__CTOR_OFFSET UNITYSDK_OFFSET(0x116B3310)
#define CLASS_2_CF57C78CC7075003___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x116B3400)
#define CLASS_2_CF57C78CC7075003___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x116B3460)

inline static constexpr unsigned int Class_2_CF57C78CC7075003_TypeDefinitionIndex = 58987;

class Class_2_CF57C78CC7075003 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::LevelDataComponent* Field_2_1; // 0x60
	::RPG::GameCore::BattleInstance* Field_2_0; // 0x68
	::Il2CppArray<::RPG::GameCore::BattleTargetConfigType>* Field_2_2; // 0x70
	::System::Boolean Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_8CA1933EC1F9B137(::RPG::GameCore::BattleRaidTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleRaidTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_METHOD_2_8CA1933EC1F9B137_OFFSET))(this, a1);
	}

	::System::Void Method_2_49864B3B164A1961(::RPG::GameCore::BattleTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_METHOD_2_49864B3B164A1961_OFFSET))(this, a1);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_2_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_METHOD_2_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::Void Method_2_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_METHOD_2_7E1BADD1D133FA1C_OFFSET))(this);
	}

	::System::Boolean Method_2_39A9FE040505BFA5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_METHOD_2_39A9FE040505BFA5_OFFSET))(this);
	}

	::System::Void Method_2_77A1C88EE6B459EB(::RPG::GameCore::BattleRaidTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleRaidTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_METHOD_2_77A1C88EE6B459EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD1726F5C8763865(::RPG::GameCore::BattleTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_METHOD_2_FD1726F5C8763865_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_048FA601E6EC5C91(::RPG::GameCore::BattleTargetConfigType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleTargetConfigType))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_METHOD_2_048FA601E6EC5C91_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF57C78CC7075003___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
