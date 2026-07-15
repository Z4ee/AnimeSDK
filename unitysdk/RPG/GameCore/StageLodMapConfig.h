#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAGELODMAPCONFIG_METHOD_2_DA10B7CFBEE9C221_OFFSET UNITYSDK_OFFSET(0x1B0B1400)
#define RPG_GAMECORE_STAGELODMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B1540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageLodMapConfig_TypeDefinitionIndex = 18452;

	class StageLodMapConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LodMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* NormDistanceLodMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGELODMAPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DA10B7CFBEE9C221(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageLodMapConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageLodMapConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGELODMAPCONFIG_METHOD_2_DA10B7CFBEE9C221_OFFSET))(a1, a2);
		}
	};
}
