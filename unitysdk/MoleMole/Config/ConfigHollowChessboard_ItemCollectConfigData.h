#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ItemCollectEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectDistributeConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectEffectConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectLayerConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectTVParticleConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTCONFIGDATA_GETFADEOUTEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x14864440)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTCONFIGDATA_GETITEMCOLLECTEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0x14864600)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTCONFIGDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x148648B0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x148647B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ItemCollectConfigData_TypeDefinitionIndex = 59279;

	class ConfigHollowChessboard_ItemCollectConfigData : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_DEFAULT_KEY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ItemCollectConfigData_TypeDefinitionIndex)->GetStaticField(0xF5D0);
		}
		::UnityEngine::AnimationCurve* InitFlashWhiteEffectFadeOutCurve; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigHollowChessboard_ItemCollectTVParticleConfig*>* TVParticleConfigDic; // 0x18
		::UnityEngine::AnimationCurve* FinalFlashWhiteEffectFadeInCurve; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ItemCollectLayerConfig*>* ItemCollectLayerConfigs; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigHollowChessboard_ItemCollectEffectConfig*>* EffectConfigDic; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ItemCollectDistributeConfig*>* ItemCollectLayerDistributeConfigs; // 0x38
		::UnityEngine::AnimationCurve* BurstCurve; // 0x40
		::UnityEngine::AnimationCurve* ShadowOpacityCurve; // 0x48
		::UnityEngine::AnimationCurve* CollectFrameCurve; // 0x50
		::UnityEngine::AnimationCurve* BurstFrameCurve; // 0x58
		::UnityEngine::AnimationCurve* ShadowDistanceCurve; // 0x60
		::UnityEngine::AnimationCurve* CollectCurve; // 0x68
		::UnityEngine::Vector2 BurstScaleBeginEnd; // 0x70
		::System::Single FinalParticlePlayAdvanceTime; // 0x78
		::System::Single FinalFlashWhiteEffectDuration; // 0x7C
		::UnityEngine::Vector2 ShadowOpacityRange; // 0x80
		::System::Boolean EnableShadow; // 0x88
		::UnityEngine::Vector2 ShadowDistanceRange; // 0x8C
		::System::Single ShadowAngle; // 0x94
		::UnityEngine::Vector2 BurstEllipseSizeRatio; // 0x98
		::UnityEngine::Vector2 CollectScaleBeginEnd; // 0xA0
		::System::Single InitFlashWhiteEffectDuration; // 0xA8
		::System::Int32 MaxParticleCountOnce; // 0xAC
		::System::Int32 AudioID; // 0xB0
		::System::Int32 ParticlePoolInitSize; // 0xB4
		::UnityEngine::Vector2 FinalFlashWhiteEffectBeginEnd; // 0xB8
		::UnityEngine::Vector2 InitFlashWhiteEffectBeginEnd; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTCONFIGDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTCONFIGDATA__CCTOR_OFFSET))();
		}

		::MoleMole::ItemCollectEffectType GetFadeOutEffectType(::System::Int32 itemId)
		{
			return ((::MoleMole::ItemCollectEffectType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTCONFIGDATA_GETFADEOUTEFFECTTYPE_OFFSET))(this, itemId);
		}

		::MoleMole::Config::ConfigHollowChessboard_ItemCollectEffectConfig* GetItemCollectEffectConfig(::System::Int32 itemId)
		{
			return ((::MoleMole::Config::ConfigHollowChessboard_ItemCollectEffectConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTCONFIGDATA_GETITEMCOLLECTEFFECTCONFIG_OFFSET))(this, itemId);
		}
	};
}
