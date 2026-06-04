#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BattleTargetConfigType.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleRaidTargetChangeParams; }
namespace RPG::GameCore { class BattleTargetChangeParams; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }

#define CLASS_2_14107EBE0A323C43_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA7342C0)
#define CLASS_2_14107EBE0A323C43_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA734460)
#define CLASS_2_14107EBE0A323C43_METHOD_2_37A54FD52C523289_OFFSET UNITYSDK_OFFSET(0xA733BB0)
#define CLASS_2_14107EBE0A323C43_METHOD_2_39A9FE040505BFA5_OFFSET UNITYSDK_OFFSET(0xA733A70)
#define CLASS_2_14107EBE0A323C43_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA732F40)
#define CLASS_2_14107EBE0A323C43_METHOD_2_49864B3B164A1961_OFFSET UNITYSDK_OFFSET(0xA733290)
#define CLASS_2_14107EBE0A323C43_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA734640)
#define CLASS_2_14107EBE0A323C43_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xA733890)
#define CLASS_2_14107EBE0A323C43_METHOD_2_77A1C88EE6B459EB_OFFSET UNITYSDK_OFFSET(0xA733100)
#define CLASS_2_14107EBE0A323C43_METHOD_2_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0xA7338F0)
#define CLASS_2_14107EBE0A323C43_METHOD_2_8CA1933EC1F9B137_OFFSET UNITYSDK_OFFSET(0xA7330B0)
#define CLASS_2_14107EBE0A323C43_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xA734110)
#define CLASS_2_14107EBE0A323C43_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA734050)
#define CLASS_2_14107EBE0A323C43_METHOD_2_A37EF40E0E62AE02_OFFSET UNITYSDK_OFFSET(0xA7339F0)
#define CLASS_2_14107EBE0A323C43_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0xA7341B0)
#define CLASS_2_14107EBE0A323C43_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xA733F70)
#define CLASS_2_14107EBE0A323C43_METHOD_2_FD1726F5C8763865_OFFSET UNITYSDK_OFFSET(0xA7332F0)
#define CLASS_2_14107EBE0A323C43__CTOR_OFFSET UNITYSDK_OFFSET(0xA7345D0)
#define CLASS_2_14107EBE0A323C43___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA7346A0)
#define CLASS_2_14107EBE0A323C43___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA734700)

inline static constexpr unsigned int Class_2_14107EBE0A323C43_TypeDefinitionIndex = 67297;

class Class_2_14107EBE0A323C43 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::BattleInstance* Field_2_0; // 0x60
	::RPG::GameCore::LevelDataComponent* Field_2_1; // 0x68
	::Il2CppArray<::RPG::GameCore::BattleTargetConfigType>* Field_2_2; // 0x70
	::System::Boolean Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_8CA1933EC1F9B137(::RPG::GameCore::BattleRaidTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleRaidTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_8CA1933EC1F9B137_OFFSET))(this, a1);
	}

	::System::Void Method_2_49864B3B164A1961(::RPG::GameCore::BattleTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_49864B3B164A1961_OFFSET))(this, a1);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_2_A37EF40E0E62AE02(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_A37EF40E0E62AE02_OFFSET))(this, a1);
	}

	::System::Void Method_2_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_7E1BADD1D133FA1C_OFFSET))(this);
	}

	::System::Boolean Method_2_39A9FE040505BFA5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_39A9FE040505BFA5_OFFSET))(this);
	}

	::System::Void Method_2_77A1C88EE6B459EB(::RPG::GameCore::BattleRaidTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleRaidTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_77A1C88EE6B459EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD1726F5C8763865(::RPG::GameCore::BattleTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_FD1726F5C8763865_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_37A54FD52C523289(::RPG::GameCore::BattleTargetConfigType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleTargetConfigType))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_37A54FD52C523289_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
