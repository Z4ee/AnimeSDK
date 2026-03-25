#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OfflineCullingIndex; }

#define RPG_GAMECORE_OFFLINECULLINGLOD_METHOD_2_A295ED64EB299386_OFFSET UNITYSDK_OFFSET(0x1747ACA0)
#define RPG_GAMECORE_OFFLINECULLINGLOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1747ADC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OfflineCullingLod_TypeDefinitionIndex = 17540;

	class OfflineCullingLod : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::OfflineCullingIndex*>* PreloadDataIndexList; // 0x10
		::System::Single CellSize; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFLINECULLINGLOD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A295ED64EB299386(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OfflineCullingLod*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OfflineCullingLod*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFLINECULLINGLOD_METHOD_2_A295ED64EB299386_OFFSET))(a1, a2);
		}
	};
}
