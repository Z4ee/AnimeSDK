#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimSkillInfoData; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM_CREATE_OFFSET UNITYSDK_OFFSET(0xA6BB130)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM_LOADMODEL_OFFSET UNITYSDK_OFFSET(0xA6BB470)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM_PREPAREMODEL_OFFSET UNITYSDK_OFFSET(0xA6BB8B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM_RELEASEMODEL_OFFSET UNITYSDK_OFFSET(0xA6BB1B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM_SHOWPREPAREDMODEL_OFFSET UNITYSDK_OFFSET(0xA6BBA60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA6BB120)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM__DISPOSEENTITY_OFFSET UNITYSDK_OFFSET(0xA6BB220)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM__GETENTITY_OFFSET UNITYSDK_OFFSET(0xA6BB590)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM__ONMODELLOADED_OFFSET UNITYSDK_OFFSET(0xA6BB690)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimUI3DSkillDetailPam_TypeDefinitionIndex = 70945;

	class FiveDimUI3DSkillDetailPam : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterModelComponent* _ModelCmpt; // 0x10
		::RPG::GameCore::GameEntity* _Entity; // 0x18
		::RPG::GameCore::GameEntity* _PrepareEntity; // 0x20
		::UnityEngine::Transform* _Root; // 0x28
		::RPG::Client::LittleGame::FiveDim::FiveDimSkillInfoData* _CurrentData; // 0x30
		::RPG::Client::LittleGame::FiveDim::FiveDimSkillInfoData* _PrepareData; // 0x38
		::System::Boolean _IsFirstLoaded; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LittleGame::FiveDim::FiveDimUI3DSkillDetailPam* Create(::UnityEngine::Transform* root)
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimUI3DSkillDetailPam*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM_CREATE_OFFSET))(root);
		}

		::System::Void ReleaseModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM_RELEASEMODEL_OFFSET))(this);
		}

		::System::Void LoadModel(::RPG::Client::LittleGame::FiveDim::FiveDimSkillInfoData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimSkillInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM_LOADMODEL_OFFSET))(this, data);
		}

		::System::Void PrepareModel(::RPG::Client::LittleGame::FiveDim::FiveDimSkillInfoData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimSkillInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM_PREPAREMODEL_OFFSET))(this, data);
		}

		::System::Void ShowPreparedModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM_SHOWPREPAREDMODEL_OFFSET))(this);
		}

		::System::Void _OnModelLoaded(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::CharacterModelComponent* modelCmpt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterModelComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM__ONMODELLOADED_OFFSET))(this, entity, modelCmpt);
		}

		::RPG::GameCore::GameEntity* _GetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM__GETENTITY_OFFSET))(this);
		}

		::System::Void _DisposeEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM__DISPOSEENTITY_OFFSET))(this, entity);
		}
	};
}
