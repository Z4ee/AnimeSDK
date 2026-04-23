#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginTilingByTargetID_RendererData.h"
#include "unitysdk/RPG/Client/MonoEffectPluginTilingByTargetID_TilingOffsetData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9A2AA0)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_METHOD_6_1266C0B90690EC46_OFFSET UNITYSDK_OFFSET(0xA9A2840)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_METHOD_6_9D73A4DA47109EEE_OFFSET UNITYSDK_OFFSET(0xA9A2AE0)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_METHOD_6_BAE1C23C3E6356EC_OFFSET UNITYSDK_OFFSET(0xA9A2570)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9A2750)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9A2DB0)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID__CTOR_OFFSET UNITYSDK_OFFSET(0xA9A2C90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTilingByTargetID_TypeDefinitionIndex = 64645;

	class MonoEffectPluginTilingByTargetID : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_6_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTilingByTargetID_TypeDefinitionIndex)->GetStaticField(0x3DB10);
		}
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginTilingByTargetID_RendererData>* RendererList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginTilingByTargetID_TilingOffsetData>* TilingOffsetDataList; // 0x30
		::UnityEngine::Vector2 DefaultTiling; // 0x38
		::UnityEngine::Vector2 DefaultOffset; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID__CCTOR_OFFSET))();
		}

		static ::System::Int32 Method_6_BAE1C23C3E6356EC(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_METHOD_6_BAE1C23C3E6356EC_OFFSET))(a1);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Method_6_1266C0B90690EC46(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_METHOD_6_1266C0B90690EC46_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 Method_6_9D73A4DA47109EEE(::System::UInt32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_METHOD_6_9D73A4DA47109EEE_OFFSET))(this, a1);
		}
	};
}
