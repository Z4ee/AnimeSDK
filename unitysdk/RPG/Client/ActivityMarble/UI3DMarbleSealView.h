#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MarbleSealRow; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW_CREATE_OFFSET UNITYSDK_OFFSET(0x9C180E0)
#define RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C18D00)
#define RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9C18160)
#define RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW_LOADMODEL_OFFSET UNITYSDK_OFFSET(0x9C181D0)
#define RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW_RELEASEMODEL_OFFSET UNITYSDK_OFFSET(0x9C182F0)
#define RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C18D50)
#define RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9C180D0)
#define RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW__DISPOSEMARBLESEALENTITY_OFFSET UNITYSDK_OFFSET(0x9C18A90)
#define RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW__GETMARBLESEALENTITY_OFFSET UNITYSDK_OFFSET(0x9C18350)
#define RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW__ONMODELLOADED_OFFSET UNITYSDK_OFFSET(0x9C18460)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int UI3DMarbleSealView_TypeDefinitionIndex = 68937;

	class UI3DMarbleSealView : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__Standby_State_Name_Hash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI3DMarbleSealView_TypeDefinitionIndex)->GetStaticField(0xCF60);
		}
		// static const ::System::UInt32 _SpecialMarbleSealID = 0x4; // 0x0
		// static const ::System::UInt32 _SpecialMarbleMainsubSealID = 0x130; // 0x0
		::UnityEngine::Transform* _Root; // 0x10
		::RPG::GameCore::GameEntity* _MarbleSealEntity; // 0x18
		::RPG::GameCore::CharacterModelComponent* _ModelCmpt; // 0x20
		::System::UInt32 _CurMarbleSealID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW__CCTOR_OFFSET))();
		}

		static ::RPG::Client::ActivityMarble::UI3DMarbleSealView* Create(::UnityEngine::Transform* root)
		{
			return ((::RPG::Client::ActivityMarble::UI3DMarbleSealView*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW_CREATE_OFFSET))(root);
		}

		::UnityEngine::Transform* GetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW_GETTRANSFORM_OFFSET))(this);
		}

		::System::Void LoadModel(::RPG::GameCore::MarbleSealRow* marbleSealConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSealRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW_LOADMODEL_OFFSET))(this, marbleSealConfig);
		}

		::System::Void ReleaseModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW_RELEASEMODEL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW_DISPOSE_OFFSET))(this);
		}

		::System::Void _DisposeMarbleSealEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW__DISPOSEMARBLESEALENTITY_OFFSET))(this);
		}

		::System::Void _OnModelLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW__ONMODELLOADED_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* _GetMarbleSealEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_UI3DMARBLESEALVIEW__GETMARBLESEALENTITY_OFFSET))(this);
		}
	};
}
