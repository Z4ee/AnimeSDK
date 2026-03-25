#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimSkillInfoData; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM_CREATE_OFFSET UNITYSDK_OFFSET(0x9A104E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM_LOADMODEL_OFFSET UNITYSDK_OFFSET(0x9A10830)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM_PREPAREMODEL_OFFSET UNITYSDK_OFFSET(0x9A10C90)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM_RELEASEMODEL_OFFSET UNITYSDK_OFFSET(0x9A10560)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM_SHOWPREPAREDMODEL_OFFSET UNITYSDK_OFFSET(0x9A10E40)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9A104D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM__DISPOSEENTITY_OFFSET UNITYSDK_OFFSET(0x9A105D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM__GETENTITY_OFFSET UNITYSDK_OFFSET(0x9A10950)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUI3DSKILLDETAILPAM__ONMODELLOADED_OFFSET UNITYSDK_OFFSET(0x9A10A70)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimUI3DSkillDetailPam_TypeDefinitionIndex = 62905;

	class FiveDimUI3DSkillDetailPam : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _Root; // 0x10
		::RPG::Client::LittleGame::FiveDim::FiveDimSkillInfoData* _CurrentData; // 0x18
		::RPG::GameCore::CharacterModelComponent* _ModelCmpt; // 0x20
		::RPG::Client::LittleGame::FiveDim::FiveDimSkillInfoData* _PrepareData; // 0x28
		::RPG::GameCore::GameEntity* _PrepareEntity; // 0x30
		::RPG::GameCore::GameEntity* _Entity; // 0x38
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
