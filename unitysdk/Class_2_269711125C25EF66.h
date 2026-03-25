#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityCursorInfo.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_778FF519F0E154E3;
class Class_2_EA46C5F9F8D34AB4;
namespace RPG::GameCore { class ChessCharacterConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_269711125C25EF66_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119694C0)
#define CLASS_2_269711125C25EF66_GET_CURRENTSKILLSUBTARGETLIST_OFFSET UNITYSDK_OFFSET(0x11969B00)
#define CLASS_2_269711125C25EF66_GET_CURRENTSKILLTARGETLIST_OFFSET UNITYSDK_OFFSET(0x11969AF0)
#define CLASS_2_269711125C25EF66_GET_SKILLACTUALATTACKER_OFFSET UNITYSDK_OFFSET(0x11969B30)
#define CLASS_2_269711125C25EF66_GET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x11969B10)
#define CLASS_2_269711125C25EF66_METHOD_2_073EE5AA44CF85E2_OFFSET UNITYSDK_OFFSET(0x11968EA0)
#define CLASS_2_269711125C25EF66_METHOD_2_27FE160831643A26_OFFSET UNITYSDK_OFFSET(0x11969B60)
#define CLASS_2_269711125C25EF66_METHOD_2_5012DEB7320C101A_OFFSET UNITYSDK_OFFSET(0x11969540)
#define CLASS_2_269711125C25EF66_METHOD_2_5D0E5E1D16E3CA12_OFFSET UNITYSDK_OFFSET(0x11969980)
#define CLASS_2_269711125C25EF66_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11969AB0)
#define CLASS_2_269711125C25EF66_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x119698F0)
#define CLASS_2_269711125C25EF66_METHOD_2_A3B36CD562D22DD5_OFFSET UNITYSDK_OFFSET(0x11968F40)
#define CLASS_2_269711125C25EF66_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x11969B50)
#define CLASS_2_269711125C25EF66_METHOD_2_DA690F4E562414B2_OFFSET UNITYSDK_OFFSET(0x119695E0)
#define CLASS_2_269711125C25EF66_SET_SKILLACTUALATTACKER_OFFSET UNITYSDK_OFFSET(0x11969B40)
#define CLASS_2_269711125C25EF66_SET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x11969B20)
#define CLASS_2_269711125C25EF66__CTOR_OFFSET UNITYSDK_OFFSET(0x11969B70)

inline static constexpr unsigned int Class_2_269711125C25EF66_TypeDefinitionIndex = 45245;

class Class_2_269711125C25EF66 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::GameEntity* Field_2_5; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::Class_2_EA46C5F9F8D34AB4* Field_2_6; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CurrentSkillSubTargetList_k__BackingField; // 0x30
	::RPG::GameCore::GameEntity* _SkillActualAttacker_k__BackingField; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_9; // 0x40
	::RPG::GameCore::ChessCharacterConfig* Field_2_7; // 0x48
	::System::Collections::Generic::List_1<::Class_1_778FF519F0E154E3*>* Field_2_8; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CurrentSkillTargetList_k__BackingField; // 0x58
	::RPG::GameCore::GameEntity* _SkillPointEntity_k__BackingField; // 0x60
	::System::Int32 Field_2_10; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_073EE5AA44CF85E2(::RPG::GameCore::ChessCharacterConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessCharacterConfig*))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_METHOD_2_073EE5AA44CF85E2_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_DISPOSE_OFFSET))(this);
	}

	::Class_1_778FF519F0E154E3* Method_2_5012DEB7320C101A(::System::Int32 a1)
	{
		return ((::Class_1_778FF519F0E154E3*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_METHOD_2_5012DEB7320C101A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DA690F4E562414B2(::System::Int32 a1, ::RPG::GameCore::AbilityCursorInfo a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::AbilityCursorInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_METHOD_2_DA690F4E562414B2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Boolean Method_2_5D0E5E1D16E3CA12(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_METHOD_2_5D0E5E1D16E3CA12_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_2_A3B36CD562D22DD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_METHOD_2_A3B36CD562D22DD5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CurrentSkillTargetList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_GET_CURRENTSKILLTARGETLIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CurrentSkillSubTargetList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_GET_CURRENTSKILLSUBTARGETLIST_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_SkillPointEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_GET_SKILLPOINTENTITY_OFFSET))(this);
	}

	::System::Void set_SkillPointEntity(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_SET_SKILLPOINTENTITY_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_SkillActualAttacker()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_GET_SKILLACTUALATTACKER_OFFSET))(this);
	}

	::System::Void set_SkillActualAttacker(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_SET_SKILLACTUALATTACKER_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void Method_2_27FE160831643A26(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_269711125C25EF66_METHOD_2_27FE160831643A26_OFFSET))(this, a1);
	}
};
