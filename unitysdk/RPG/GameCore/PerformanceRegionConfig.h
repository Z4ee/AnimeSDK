#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CoverRegionList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PERFORMANCEREGIONCONFIG_METHOD_2_3660AA0D5D9EFEEC_OFFSET UNITYSDK_OFFSET(0x1D8D3180)
#define RPG_GAMECORE_PERFORMANCEREGIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D32D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRegionConfig_TypeDefinitionIndex = 19220;

	class PerformanceRegionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PerformanceID; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CoverRegionList*>* Entries; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREGIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3660AA0D5D9EFEEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceRegionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceRegionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREGIONCONFIG_METHOD_2_3660AA0D5D9EFEEC_OFFSET))(a1, a2);
		}
	};
}
