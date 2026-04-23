#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MAINUI3DBOSSLOGOLOADER_BIND_OFFSET UNITYSDK_OFFSET(0xA153CF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MAINUI3DBOSSLOGOLOADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1540E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MAINUI3DBOSSLOGOLOADER_GET__MATERIAL_OFFSET UNITYSDK_OFFSET(0xA154020)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MAINUI3DBOSSLOGOLOADER_SHOWBOSSLOGIBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xA153D40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MAINUI3DBOSSLOGOLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0xA1542B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MAINUI3DBOSSLOGOLOADER__GETTEXTUREPATHBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xA153F70)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2MainUI3DBossLogoLoader_TypeDefinitionIndex = 69968;

	class DiceCombatV2MainUI3DBossLogoLoader : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _LogoTransform; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Texture*>* _Textures; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MAINUI3DBOSSLOGOLOADER__CTOR_OFFSET))(this);
		}

		::System::Void Bind(::UnityEngine::Transform* logoTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MAINUI3DBOSSLOGOLOADER_BIND_OFFSET))(this, logoTransform);
		}

		::System::Void ShowBossLogiByStageID(::System::UInt32 stageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MAINUI3DBOSSLOGOLOADER_SHOWBOSSLOGIBYSTAGEID_OFFSET))(this, stageID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MAINUI3DBOSSLOGOLOADER_DISPOSE_OFFSET))(this);
		}

		::System::String* _GetTexturePathByStageID(::System::UInt32 stageID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MAINUI3DBOSSLOGOLOADER__GETTEXTUREPATHBYSTAGEID_OFFSET))(this, stageID);
		}

		::UnityEngine::Material* get__Material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MAINUI3DBOSSLOGOLOADER_GET__MATERIAL_OFFSET))(this);
		}
	};
}
