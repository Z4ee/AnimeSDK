#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_PAMSKINUTILS_CHANGEVIRTUALCAMERATARGETENTITY_OFFSET UNITYSDK_OFFSET(0xC331F20)
#define RPG_CLIENT_PAMSKINUTILS_GETDEFAULTPAMSKINID_OFFSET UNITYSDK_OFFSET(0xC3309F0)
#define RPG_CLIENT_PAMSKINUTILS_GETPAMSKINCHANGEEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xC331E60)
#define RPG_CLIENT_PAMSKINUTILS_GETPAMSKINLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0xC331DA0)
#define RPG_CLIENT_PAMSKINUTILS_ISSKINNEDPAM_1_OFFSET UNITYSDK_OFFSET(0xC331C40)
#define RPG_CLIENT_PAMSKINUTILS_ISSKINNEDPAM_OFFSET UNITYSDK_OFFSET(0xC331AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PamSkinUtils_TypeDefinitionIndex = 62112;

	class PamSkinUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsSkinnedPam(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINUTILS_ISSKINNEDPAM_OFFSET))(a1);
		}

		static ::System::Boolean IsSkinnedPam_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINUTILS_ISSKINNEDPAM_1_OFFSET))(a1);
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

		static ::System::Void ChangeVirtualCameraTargetEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINUTILS_CHANGEVIRTUALCAMERATARGETENTITY_OFFSET))(a1);
		}
	};
}
