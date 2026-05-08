#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_141;
class Class_3_6EF456A21AE85EEC_135;
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoBangbooPartyDemoPara_EachLayerData; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoPartyDemoBlock; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_AWAKE_OFFSET UNITYSDK_OFFSET(0x1383B390)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_DOONTRIGGER_OFFSET UNITYSDK_OFFSET(0x1383B2E0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GENERATEMAP_OFFSET UNITYSDK_OFFSET(0x1383AC20)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GENERATEPREFABAT_OFFSET UNITYSDK_OFFSET(0x1383B510)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GENMAP_OFFSET UNITYSDK_OFFSET(0x1383AC70)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GETLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x1383AA10)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GETTOPPOSITION_OFFSET UNITYSDK_OFFSET(0x1383AA70)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GETTOPPOS_OFFSET UNITYSDK_OFFSET(0x1383AB70)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1383A9F0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x1383B290)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_RESETMAP_OFFSET UNITYSDK_OFFSET(0x1383BB10)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_SETACTIVETOPLAYER_OFFSET UNITYSDK_OFFSET(0x1383BA70)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1383B4D0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1383BDB0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA__CTOR_OFFSET UNITYSDK_OFFSET(0x1383BD10)

namespace MoleMole::MiniGame::BangbooPartyGame
{
	inline static constexpr unsigned int MonoBangbooPartyDemoPara_TypeDefinitionIndex = 38382;

	class MonoBangbooPartyDemoPara : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		static ::Class_0_16E4307DCC419505_141** StaticGet_Ins()
		{
			return (::Class_0_16E4307DCC419505_141**)Il2CppClass::FromTypeDefinitionIndex(MonoBangbooPartyDemoPara_TypeDefinitionIndex)->GetStaticField(0x34C10);
		}
		static ::System::Boolean* StaticGet_UseStdGenerateLayers()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoBangbooPartyDemoPara_TypeDefinitionIndex)->GetStaticField(0xCF00);
		}
		static ::System::Single* StaticGet_BlockHalfHeight()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonoBangbooPartyDemoPara_TypeDefinitionIndex)->GetStaticField(0xCF04);
		}
		::System::Single scaleForJoint; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyDemoPara_EachLayerData*>* layerData; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Color>* layerColors; // 0x68
		::UnityEngine::Color lightColor; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::MiniGame::BangbooPartyGame::MonoPartyDemoBlock*>* layerBlockDict; // 0x80
		::System::Int32 layerHeight; // 0x88
		::System::String* blockPath; // 0x90
		::UnityEngine::Transform* blockParent; // 0x98
		::UnityEngine::GameObject* block; // 0xA0
		::UnityEngine::Vector3 parentOffset; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* layerParents; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA__CCTOR_OFFSET))();
		}

		::System::Int32 get_layerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GET_LAYERCOUNT_OFFSET))(this);
		}

		::UnityEngine::Color GetLightColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GETLIGHTCOLOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTopPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GETTOPPOSITION_OFFSET))(this);
		}

		::System::Void GenerateMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GENERATEMAP_OFFSET))(this);
		}

		::System::Void OnTrigger(::Class_3_6EF456A21AE85EEC_135* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_6EF456A21AE85EEC_135*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_ONTRIGGER_OFFSET))(this, info);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_UPDATE_OFFSET))(this);
		}

		::System::Void GenMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GENMAP_OFFSET))(this);
		}

		::System::Void GeneratePrefabAt(::System::Int32 layer, ::UnityEngine::Vector2 xzPos, ::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GENERATEPREFABAT_OFFSET))(this, layer, xzPos, uid);
		}

		::UnityEngine::Vector3 GetTopPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GETTOPPOS_OFFSET))(this);
		}

		::System::Void SetActiveTopLayer(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_SETACTIVETOPLAYER_OFFSET))(this, show);
		}

		::System::Void ResetMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_RESETMAP_OFFSET))(this);
		}

		::System::Void DoOnTrigger(::Class_3_6EF456A21AE85EEC_135* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_6EF456A21AE85EEC_135*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_DOONTRIGGER_OFFSET))(this, info);
		}
	};
}
