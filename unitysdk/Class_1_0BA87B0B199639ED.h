#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_460;
class Class_0_16E4307DCC419505_575;
class Class_0_16E4307DCC419505_625;
class Class_1_0BA87B0B199639ED_Class_1_EDFDA26530E00703;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class InfiniteBattleData; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0BA87B0B199639ED_METHOD_1_07A364B1B15298B9_OFFSET UNITYSDK_OFFSET(0x1A79F8F0)
#define CLASS_1_0BA87B0B199639ED_METHOD_1_1346C98533E6EF73_OFFSET UNITYSDK_OFFSET(0x1A79DD80)
#define CLASS_1_0BA87B0B199639ED_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x1A79D580)
#define CLASS_1_0BA87B0B199639ED_METHOD_1_50EF5814EA514BCB_OFFSET UNITYSDK_OFFSET(0x1A79F710)
#define CLASS_1_0BA87B0B199639ED_METHOD_1_5323D9F2678D4A50_OFFSET UNITYSDK_OFFSET(0x1A79F7E0)
#define CLASS_1_0BA87B0B199639ED_METHOD_1_559D3B3C5500F6CF_OFFSET UNITYSDK_OFFSET(0x1A79E520)
#define CLASS_1_0BA87B0B199639ED_METHOD_1_9E1CCD48B408A583_OFFSET UNITYSDK_OFFSET(0x1A79EA20)
#define CLASS_1_0BA87B0B199639ED_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1A79D910)
#define CLASS_1_0BA87B0B199639ED_METHOD_1_B71ED647792518B0_OFFSET UNITYSDK_OFFSET(0x1A79EED0)
#define CLASS_1_0BA87B0B199639ED_METHOD_1_BAE0620A41DCE536_OFFSET UNITYSDK_OFFSET(0x1A79E8E0)
#define CLASS_1_0BA87B0B199639ED_METHOD_1_CC15D6CD4D3CC816_OFFSET UNITYSDK_OFFSET(0x1A79E6E0)
#define CLASS_1_0BA87B0B199639ED_METHOD_1_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x1A79D990)
#define CLASS_1_0BA87B0B199639ED_METHOD_1_EC5AF9232853FA6E_OFFSET UNITYSDK_OFFSET(0x1A79F370)
#define CLASS_1_0BA87B0B199639ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A79D380)

inline static constexpr unsigned int Class_1_0BA87B0B199639ED_TypeDefinitionIndex = 57771;

class Class_1_0BA87B0B199639ED : public ::System::Object
{
public:
	::RPG::GameCore::InfiniteBattleData* KAENBFPDKLJ; // 0x10
	::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0x18
	::RPG::GameCore::EventManager* DOBLIBIFBBK; // 0x20
	::System::Action_1<::Class_0_16E4307DCC419505_575*>* OBIECPEOECK; // 0x28
	::Class_1_0BA87B0B199639ED_Class_1_EDFDA26530E00703* HGNALMILOFA; // 0x30
	::System::Boolean DLGFMPNEHGO; // 0x38

	::System::Void _ctor(::RPG::GameCore::BattleInstance* a1, ::Class_0_16E4307DCC419505_625* a2, ::System::Action_1<::Class_0_16E4307DCC419505_575*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::Class_0_16E4307DCC419505_625*, ::System::Action_1<::Class_0_16E4307DCC419505_575*>*))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED_METHOD_1_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_1_1346C98533E6EF73(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED_METHOD_1_1346C98533E6EF73_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_559D3B3C5500F6CF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint& a2, ::RPG::GameCore::FixPoint& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED_METHOD_1_559D3B3C5500F6CF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CC15D6CD4D3CC816()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED_METHOD_1_CC15D6CD4D3CC816_OFFSET))(this);
	}

	::System::Void Method_1_BAE0620A41DCE536(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED_METHOD_1_BAE0620A41DCE536_OFFSET))(this, a1);
	}

	::System::Void Method_1_B71ED647792518B0(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED_METHOD_1_B71ED647792518B0_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC5AF9232853FA6E(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED_METHOD_1_EC5AF9232853FA6E_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_9E1CCD48B408A583(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED_METHOD_1_9E1CCD48B408A583_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_50EF5814EA514BCB()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED_METHOD_1_50EF5814EA514BCB_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_5323D9F2678D4A50()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED_METHOD_1_5323D9F2678D4A50_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_07A364B1B15298B9()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED_METHOD_1_07A364B1B15298B9_OFFSET))(this);
	}
};
