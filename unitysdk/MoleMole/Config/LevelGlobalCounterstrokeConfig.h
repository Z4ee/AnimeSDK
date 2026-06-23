#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_LEVELGLOBALCOUNTERSTROKECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17E37060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelGlobalCounterstrokeConfig_TypeDefinitionIndex = 43774;

	class LevelGlobalCounterstrokeConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* HitZoneTag; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::BuffGroupName>* BuffGroups; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* TagList; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* BeAttackedTriggerTagList; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* RBLTagList; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALCOUNTERSTROKECONFIG__CTOR_OFFSET))(this);
		}
	};
}
