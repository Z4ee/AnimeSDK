#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SerializedScriptableObjectBase.h"

namespace MoleMole::Config { class HotPotFoodAssetConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOTPOTFOODASSETS_GETCONFIGBYID_OFFSET UNITYSDK_OFFSET(0x17D23CE0)
#define MOLEMOLE_CONFIG_CONFIGHOTPOTFOODASSETS_LOADELITEFOODMAP_OFFSET UNITYSDK_OFFSET(0x17D23E00)
#define MOLEMOLE_CONFIG_CONFIGHOTPOTFOODASSETS__CTOR_OFFSET UNITYSDK_OFFSET(0x17D242C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHotPotFoodAssets_TypeDefinitionIndex = 77321;

	class ConfigHotPotFoodAssets : public ::MoleMole::SerializedScriptableObjectBase
	{
	public:
		// static const ::System::String* InstancePath; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::HotPotFoodAssetConfig*>* configs; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _eliteToNormalIdMap; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOTPOTFOODASSETS__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::HotPotFoodAssetConfig* GetConfigById(::System::Int32 id)
		{
			return ((::MoleMole::Config::HotPotFoodAssetConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOTPOTFOODASSETS_GETCONFIGBYID_OFFSET))(this, id);
		}

		::System::Void LoadEliteFoodMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOTPOTFOODASSETS_LOADELITEFOODMAP_OFFSET))(this);
		}
	};
}
