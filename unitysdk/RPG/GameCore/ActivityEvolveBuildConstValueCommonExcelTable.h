#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCONSTVALUECOMMONEXCELTABLE_GETCONFIGVALUE_OFFSET UNITYSDK_OFFSET(0x193DD460)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCONSTVALUECOMMONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x193DD570)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCONSTVALUECOMMONEXCELTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x193DD560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEvolveBuildConstValueCommonExcelTable_TypeDefinitionIndex = 14691;

	class ActivityEvolveBuildConstValueCommonExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EvolveBuildSeason, ::System::String*>** StaticGet__SeasonToPrefix()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EvolveBuildSeason, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildConstValueCommonExcelTable_TypeDefinitionIndex)->GetStaticField(0x5ADB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCONSTVALUECOMMONEXCELTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCONSTVALUECOMMONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::DynamicValue* GetConfigValue(::System::String* a1, ::RPG::GameCore::EvolveBuildSeason a2)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::System::String*, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCONSTVALUECOMMONEXCELTABLE_GETCONFIGVALUE_OFFSET))(a1, a2);
		}
	};
}
