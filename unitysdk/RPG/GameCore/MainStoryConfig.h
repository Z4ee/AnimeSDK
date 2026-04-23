#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class WaypointMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAINSTORYCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A854D0)
#define RPG_GAMECORE_MAINSTORYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A85760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainStoryConfig_TypeDefinitionIndex = 17986;

	class MainStoryConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* WaypointInfoPrefabPath; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* IconColorIDToColor; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* IconColorIDToIconPath; // 0x20
		::System::String* WaypointLockColor; // 0x28
		::Il2CppArray<::RPG::GameCore::WaypointMaterial*>* WaypointMatList; // 0x30
		::Il2CppArray<::System::UInt32>* ShowUnpassEfxColorIDs; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MainStoryConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainStoryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
