#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_OFFLINECULLINGCONFIG_METHOD_2_0E7CF5ABF813FE71_OFFSET UNITYSDK_OFFSET(0x18BC3A00)
#define RPG_GAMECORE_OFFLINECULLINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC3BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OfflineCullingConfig_TypeDefinitionIndex = 18194;

	class OfflineCullingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* CompletelyCullingThreshold; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* PartialCullingThreshold; // 0x18
		::System::Single LightVisibilityThreshold; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFLINECULLINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0E7CF5ABF813FE71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OfflineCullingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OfflineCullingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFLINECULLINGCONFIG_METHOD_2_0E7CF5ABF813FE71_OFFSET))(a1, a2);
		}
	};
}
