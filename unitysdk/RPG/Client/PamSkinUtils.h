#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_PAMSKINUTILS_CHANGEVIRTUALCAMERATARGETENTITY_OFFSET UNITYSDK_OFFSET(0xAC22100)
#define RPG_CLIENT_PAMSKINUTILS_GETDEFAULTPAMSKINID_OFFSET UNITYSDK_OFFSET(0xAC20DB0)
#define RPG_CLIENT_PAMSKINUTILS_GETPAMSKINCHANGEEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xAC22040)
#define RPG_CLIENT_PAMSKINUTILS_GETPAMSKINLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0xAC21F80)
#define RPG_CLIENT_PAMSKINUTILS_ISSKINNEDPAM_1_OFFSET UNITYSDK_OFFSET(0xAC21E20)
#define RPG_CLIENT_PAMSKINUTILS_ISSKINNEDPAM_OFFSET UNITYSDK_OFFSET(0xAC21CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PamSkinUtils_TypeDefinitionIndex = 61188;

	class PamSkinUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsSkinnedPam(::System::UInt32 npcID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINUTILS_ISSKINNEDPAM_OFFSET))(npcID);
		}

		static ::System::Boolean IsSkinnedPam_1(::System::String* storyCharacterID)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINUTILS_ISSKINNEDPAM_1_OFFSET))(storyCharacterID);
		}

		static ::System::String* GetPamSkinLevelGraphPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINUTILS_GETPAMSKINLEVELGRAPHPATH_OFFSET))();
		}

		static ::System::String* GetPamSkinChangeEffectPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINUTILS_GETPAMSKINCHANGEEFFECTPATH_OFFSET))();
		}

		static ::System::UInt32 GetDefaultPamSkinID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINUTILS_GETDEFAULTPAMSKINID_OFFSET))();
		}

		static ::System::Void ChangeVirtualCameraTargetEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINUTILS_CHANGEVIRTUALCAMERATARGETENTITY_OFFSET))(entity);
		}
	};
}
