#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"
#include "unitysdk/Struct_2_2B6684D3E43696AE.h"
#include "unitysdk/System/Object.h"

class Class_2_BF927CBEA754F6BE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TeamFormationComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR_GETLEFTADJOINENTITY_OFFSET UNITYSDK_OFFSET(0x11CB7560)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR_GETRIGHTADJOINENTITY_OFFSET UNITYSDK_OFFSET(0x11CB75C0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR_PREPARE_OFFSET UNITYSDK_OFFSET(0x11CB6EE0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR_RELEASE_OFFSET UNITYSDK_OFFSET(0x11CB77D0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB78B0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR__INTERNALGETLEFTADJOINENTITY_OFFSET UNITYSDK_OFFSET(0x11CB7620)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR__INTERNALGETRIGHTADJOINENTITY_OFFSET UNITYSDK_OFFSET(0x11CB76F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationComponent_MultiRowTargetSelector_TypeDefinitionIndex = 57857;

	class TeamFormationComponent_MultiRowTargetSelector : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_BF927CBEA754F6BE*>* _row0FormationList; // 0x10
		::System::Collections::Generic::List_1<::Class_2_BF927CBEA754F6BE*>* _finalFormationList; // 0x18
		::System::Collections::Generic::List_1<::Class_2_BF927CBEA754F6BE*>* _row1FormationList; // 0x20
		::System::Int32 _leftIteration; // 0x28
		::System::Boolean _InverseFlag; // 0x2C
		::System::Boolean _InProcess; // 0x2D
		::System::Int32 _RghtIteration; // 0x30
		::Struct_2_2B6684D3E43696AE _MainTargetRowFormationPos; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Prepare(::RPG::GameCore::TeamFormationComponent* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TeamMemberCountingOption a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamFormationComponent*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamMemberCountingOption, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR_PREPARE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::GameEntity* GetLeftAdjoinEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR_GETLEFTADJOINENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetRightAdjoinEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR_GETRIGHTADJOINENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* _InternalGetLeftAdjoinEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR__INTERNALGETLEFTADJOINENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* _InternalGetRightAdjoinEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR__INTERNALGETRIGHTADJOINENTITY_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR_RELEASE_OFFSET))(this);
		}
	};
}
