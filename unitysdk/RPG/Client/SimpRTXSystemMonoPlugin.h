#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

class SWRTAsset;
namespace RPG::Client { class SimpRTXSystemBehavior; }
namespace RPG::SimpRTX { class BakedSDFInstanceData; }
namespace RPG::SimpRTX { class BakedSDFPrefabData; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_SIMPRTXSYSTEMMONOPLUGIN_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE0CC7C0)
#define RPG_CLIENT_SIMPRTXSYSTEMMONOPLUGIN_GET_KEY_OFFSET UNITYSDK_OFFSET(0xE0CC780)
#define RPG_CLIENT_SIMPRTXSYSTEMMONOPLUGIN_HASVALIDBAKEDDATA_OFFSET UNITYSDK_OFFSET(0xE0CB2B0)
#define RPG_CLIENT_SIMPRTXSYSTEMMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE0CC860)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpRTXSystemMonoPlugin_TypeDefinitionIndex = 70951;

	class SimpRTXSystemMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::SimpRTXSystemBehavior*>
	{
	public:
		::System::Int32 maxCardsPerDirection; // 0x30
		::System::Single cardBoundsExpand; // 0x34
		::System::Int32 atlasDilateIterations; // 0x38
		::System::Int32 maxSDFObjects; // 0x3C
		::SWRTAsset* swrtAsset; // 0x40
		::System::String* debugFailReason; // 0x48
		::System::Boolean useBakedData; // 0x50
		::Il2CppArray<::RPG::SimpRTX::BakedSDFPrefabData*>* bakedPrefabDatas; // 0x58
		::Il2CppArray<::RPG::SimpRTX::BakedSDFInstanceData*>* bakedInstances; // 0x60
		::System::Boolean BFIPMABKDJC; // 0x68
		::System::Boolean OOHHJKPHAAD; // 0x69
		::System::Boolean m_sdfRendererReplaceEnabled; // 0x6A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Boolean HasValidBakedData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMMONOPLUGIN_HASVALIDBAKEDDATA_OFFSET))(this);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMMONOPLUGIN_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMMONOPLUGIN_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
