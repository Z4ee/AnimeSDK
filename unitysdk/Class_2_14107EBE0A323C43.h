#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/BattleTargetConfigType.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleRaidTargetChangeParams; }
namespace RPG::GameCore { class BattleTargetChangeParams; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }

#define CLASS_2_14107EBE0A323C43_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB8F0600)
#define CLASS_2_14107EBE0A323C43_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB8F07A0)
#define CLASS_2_14107EBE0A323C43_METHOD_2_37A54FD52C523289_OFFSET UNITYSDK_OFFSET(0xB8EFD90)
#define CLASS_2_14107EBE0A323C43_METHOD_2_39A9FE040505BFA5_OFFSET UNITYSDK_OFFSET(0xB8EFC50)
#define CLASS_2_14107EBE0A323C43_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xB8EF0A0)
#define CLASS_2_14107EBE0A323C43_METHOD_2_49864B3B164A1961_OFFSET UNITYSDK_OFFSET(0xB8EF400)
#define CLASS_2_14107EBE0A323C43_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xB8EFA60)
#define CLASS_2_14107EBE0A323C43_METHOD_2_77A1C88EE6B459EB_OFFSET UNITYSDK_OFFSET(0xB8EF270)
#define CLASS_2_14107EBE0A323C43_METHOD_2_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0xB8EFAC0)
#define CLASS_2_14107EBE0A323C43_METHOD_2_8CA1933EC1F9B137_OFFSET UNITYSDK_OFFSET(0xB8EF220)
#define CLASS_2_14107EBE0A323C43_METHOD_2_A37EF40E0E62AE02_OFFSET UNITYSDK_OFFSET(0xB8EFBD0)
#define CLASS_2_14107EBE0A323C43_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xB8F01E0)
#define CLASS_2_14107EBE0A323C43_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xB8F03E0)
#define CLASS_2_14107EBE0A323C43_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xB8F02F0)
#define CLASS_2_14107EBE0A323C43_METHOD_2_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0xB8F04B0)
#define CLASS_2_14107EBE0A323C43_METHOD_2_FD1726F5C8763865_OFFSET UNITYSDK_OFFSET(0xB8EF460)
#define CLASS_2_14107EBE0A323C43__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F0910)

inline static constexpr unsigned int Class_2_14107EBE0A323C43_TypeDefinitionIndex = 72028;

class Class_2_14107EBE0A323C43 : public ::Class_1_34917908B7833130
{
public:
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
	::RPG::GameCore::LevelDataComponent* OOIDBIDKNOD; // 0x68
	::Il2CppArray<::RPG::GameCore::BattleTargetConfigType>* FFCNFDKPDEI; // 0x70
	::System::Boolean OECIIEEFKOC; // 0x78

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

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCEF005F844F513C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_METHOD_2_FCEF005F844F513C_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14107EBE0A323C43_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
