#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonsterAvatarPropertySource.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_CA604A479B70DDEA;
namespace RPG::Client { class AetherMonsterAvatarData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_FORMATDISPLAYDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x9CD9EA0)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETAETHERMONSTERAVATARBASEVALUE_OFFSET UNITYSDK_OFFSET(0x9CDC460)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETBASEVALUE_OFFSET UNITYSDK_OFFSET(0x9CDA070)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETFINALVALUE_OFFSET UNITYSDK_OFFSET(0x9CD9610)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETPROPERTYADDVALUE_OFFSET UNITYSDK_OFFSET(0x9CDA570)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GET__AETHERMONSTERAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9CDC700)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_SETMODIFER_OFFSET UNITYSDK_OFFSET(0x9CDB760)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_SET__AETHERMONSTERAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9CDC710)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9CD8840)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA__GETPROPERTYEXCELBASEDATA_OFFSET UNITYSDK_OFFSET(0x9CDC4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherMonsterAvatarPropertyData_TypeDefinitionIndex = 57397;

	class AetherMonsterAvatarPropertyData : public ::System::Object
	{
	public:
		::RPG::Client::AetherMonsterAvatarData* __AetherMonsterAvatarData_k__BackingField; // 0x10
		::System::Collections::Generic::SortedList_2<::RPG::Client::MonsterAvatarPropertySource, ::Class_1_CA604A479B70DDEA*>* _PropertyModifiers; // 0x18

		::System::Void _ctor(::RPG::Client::AetherMonsterAvatarData* aetherMonsterAvatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA__CTOR_OFFSET))(this, aetherMonsterAvatarData);
		}

		::System::Void SetModifer(::RPG::Client::MonsterAvatarPropertySource modifierID, ::Class_1_CA604A479B70DDEA* propertyModifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterAvatarPropertySource, ::Class_1_CA604A479B70DDEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_SETMODIFER_OFFSET))(this, modifierID, propertyModifier);
		}

		::RPG::GameCore::FixPoint GetFinalValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETFINALVALUE_OFFSET))(this, propertyType, promotion);
		}

		::RPG::GameCore::FixPoint GetBaseValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETBASEVALUE_OFFSET))(this, propertyType, promotion);
		}

		::RPG::GameCore::FixPoint GetAetherMonsterAvatarBaseValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETAETHERMONSTERAVATARBASEVALUE_OFFSET))(this, propertyType, promotion);
		}

		::System::Int32 GetPropertyAddValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETPROPERTYADDVALUE_OFFSET))(this, propertyType, promotion);
		}

		static ::System::String* FormatDisplayDataByType(::RPG::GameCore::AvatarPropertyType propertyType, ::RPG::GameCore::FixPoint dataValue)
		{
			return ((::System::String*(*)(::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_FORMATDISPLAYDATABYTYPE_OFFSET))(propertyType, dataValue);
		}

		::System::Void _GetPropertyExcelBaseData(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::RPG::GameCore::FixPoint& baseValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA__GETPROPERTYEXCELBASEDATA_OFFSET))(this, propertyType, promotion, baseValue);
		}

		::RPG::Client::AetherMonsterAvatarData* get__AetherMonsterAvatarData()
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GET__AETHERMONSTERAVATARDATA_OFFSET))(this);
		}

		::System::Void set__AetherMonsterAvatarData(::RPG::Client::AetherMonsterAvatarData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_SET__AETHERMONSTERAVATARDATA_OFFSET))(this, value);
		}
	};
}
