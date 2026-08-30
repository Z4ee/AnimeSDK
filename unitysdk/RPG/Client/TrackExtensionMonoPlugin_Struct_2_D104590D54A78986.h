#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_STRUCT_2_D104590D54A78986__CCTOR_OFFSET UNITYSDK_OFFSET(0xE230A10)

namespace RPG::Client
{
	inline static constexpr unsigned int TrackExtensionMonoPlugin_Struct_2_D104590D54A78986_TypeDefinitionIndex = 70998;

	struct alignas(4) TrackExtensionMonoPlugin_Struct_2_D104590D54A78986
	{
		static ::RPG::Client::TrackExtensionMonoPlugin_Struct_2_D104590D54A78986* StaticGet_KPJGDHLENIP()
		{
			return (::RPG::Client::TrackExtensionMonoPlugin_Struct_2_D104590D54A78986*)Il2CppClass::FromTypeDefinitionIndex(TrackExtensionMonoPlugin_Struct_2_D104590D54A78986_TypeDefinitionIndex)->GetStaticField(0x12AF0);
		}
		::UnityEngine::Vector3 PECPBEOHOJC; // 0x10
		::UnityEngine::Vector3 HLENMDAPAGH; // 0x1C
		::UnityEngine::Vector3 NKDECDGECFL; // 0x28
		::UnityEngine::Vector3 LLKCEKEOIME; // 0x34

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_STRUCT_2_D104590D54A78986__CCTOR_OFFSET))();
		}
	};
}
