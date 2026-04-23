#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightManager_GridFightCustomValue; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_ADDEMPTY_OFFSET UNITYSDK_OFFSET(0xB6BACA0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_GETCUSTOMVALUE_1_OFFSET UNITYSDK_OFFSET(0xB6C0290)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_GETCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xB6B6B70)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_SETCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xB6B6D90)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP__CTOR_OFFSET UNITYSDK_OFFSET(0xB6BFFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightManager_GridFightCustomValueLookup_TypeDefinitionIndex = 51771;

	class GridFightManager_GridFightCustomValueLookup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::GridFightManager_GridFightCustomValue*>* _CustomValue; // 0x10
		::System::Action_1<::RPG::GameCore::GridFightManager_GridFightCustomValue*>* OnChangedDefault; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GridFightManager_GridFightCustomValue* AddEmpty(::System::String* key)
		{
			return ((::RPG::GameCore::GridFightManager_GridFightCustomValue*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_ADDEMPTY_OFFSET))(this, key);
		}

		::System::Void SetCustomValue(::System::String* key, ::RPG::GameCore::FixPoint overrideValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_SETCUSTOMVALUE_OFFSET))(this, key, overrideValue);
		}

		::RPG::GameCore::FixPoint GetCustomValue(::System::String* key)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_GETCUSTOMVALUE_OFFSET))(this, key);
		}

		::RPG::GameCore::FixPoint GetCustomValue_1(::RPG::GameCore::StringHash keyHash)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_GETCUSTOMVALUE_1_OFFSET))(this, keyHash);
		}
	};
}
