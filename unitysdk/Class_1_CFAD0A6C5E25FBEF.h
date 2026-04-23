#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
class Class_0_16E4307DCC419505_498;
class Class_0_16E4307DCC419505_533;
class Class_1_CFAD0A6C5E25FBEF_Class_1_F0ECDC042DB9B86B;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class InfiniteBattleData; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_054F0E5119345492_OFFSET UNITYSDK_OFFSET(0x12880740)
#define CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_15DD4655203DF8CF_OFFSET UNITYSDK_OFFSET(0x12881E00)
#define CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_3854FA17686E9028_OFFSET UNITYSDK_OFFSET(0x12880BD0)
#define CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_482585695B0D7680_OFFSET UNITYSDK_OFFSET(0x12881F30)
#define CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x12880060)
#define CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x12881A40)
#define CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x12880420)
#define CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_A5FB11C82FC95330_OFFSET UNITYSDK_OFFSET(0x12880F80)
#define CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x128803A0)
#define CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_B4919B17B855CC79_OFFSET UNITYSDK_OFFSET(0x12881680)
#define CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_C5AC94C5CD7364B0_OFFSET UNITYSDK_OFFSET(0x128810C0)
#define CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x12880DC0)
#define CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_C9410670454663FB_OFFSET UNITYSDK_OFFSET(0x128820D0)
#define CLASS_1_CFAD0A6C5E25FBEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1287FE50)

inline static constexpr unsigned int Class_1_CFAD0A6C5E25FBEF_TypeDefinitionIndex = 53116;

class Class_1_CFAD0A6C5E25FBEF : public ::System::Object
{
public:
	::RPG::GameCore::InfiniteBattleData* Field_1_3; // 0x10
	::RPG::GameCore::EntityManager* Field_1_2; // 0x18
	::RPG::GameCore::EventManager* Field_1_1; // 0x20
	::Class_1_CFAD0A6C5E25FBEF_Class_1_F0ECDC042DB9B86B* Field_1_4; // 0x28
	::System::Action_1<::Class_0_16E4307DCC419505_498*>* Field_1_5; // 0x30
	::System::Boolean Field_1_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::BattleInstance* a1, ::Class_0_16E4307DCC419505_533* a2, ::System::Action_1<::Class_0_16E4307DCC419505_498*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::Class_0_16E4307DCC419505_533*, ::System::Action_1<::Class_0_16E4307DCC419505_498*>*))((::PBYTE)hIl2Cpp + CLASS_1_CFAD0A6C5E25FBEF__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_1_054F0E5119345492(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_054F0E5119345492_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_3854FA17686E9028(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint& a2, ::RPG::GameCore::FixPoint& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_3854FA17686E9028_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_1_A5FB11C82FC95330(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_A5FB11C82FC95330_OFFSET))(this, a1);
	}

	::System::Void Method_1_B4919B17B855CC79(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_B4919B17B855CC79_OFFSET))(this, a1);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_C5AC94C5CD7364B0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_C5AC94C5CD7364B0_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_15DD4655203DF8CF()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_15DD4655203DF8CF_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_482585695B0D7680()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_482585695B0D7680_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_C9410670454663FB()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFAD0A6C5E25FBEF_METHOD_1_C9410670454663FB_OFFSET))(this);
	}
};
