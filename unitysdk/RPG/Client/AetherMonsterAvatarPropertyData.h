#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonsterAvatarPropertySource.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_44250175B60B216B;
namespace RPG::Client { class AetherMonsterAvatarData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_FORMATDISPLAYDATABYTYPE_OFFSET UNITYSDK_OFFSET(0xB27F060)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETAETHERMONSTERAVATARBASEVALUE_OFFSET UNITYSDK_OFFSET(0xB2816F0)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETBASEVALUE_OFFSET UNITYSDK_OFFSET(0xB27F290)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETFINALVALUE_OFFSET UNITYSDK_OFFSET(0xB27E960)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETPROPERTYADDVALUE_OFFSET UNITYSDK_OFFSET(0xB27F710)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GET__AETHERMONSTERAVATARDATA_OFFSET UNITYSDK_OFFSET(0xB281990)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_SETMODIFER_OFFSET UNITYSDK_OFFSET(0xB2809A0)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_SET__AETHERMONSTERAVATARDATA_OFFSET UNITYSDK_OFFSET(0xB2819A0)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB27DD40)
#define RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA__GETPROPERTYEXCELBASEDATA_OFFSET UNITYSDK_OFFSET(0xB281780)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherMonsterAvatarPropertyData_TypeDefinitionIndex = 58209;

	class AetherMonsterAvatarPropertyData : public ::System::Object
	{
	public:
		::RPG::Client::AetherMonsterAvatarData* __AetherMonsterAvatarData_k__BackingField; // 0x10
		::System::Collections::Generic::SortedList_2<::RPG::Client::MonsterAvatarPropertySource, ::Class_1_44250175B60B216B*>* _PropertyModifiers; // 0x18

		::System::Void _ctor(::RPG::Client::AetherMonsterAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetModifer(::RPG::Client::MonsterAvatarPropertySource a1, ::Class_1_44250175B60B216B* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterAvatarPropertySource, ::Class_1_44250175B60B216B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_SETMODIFER_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint GetFinalValue(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETFINALVALUE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint GetBaseValue(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETBASEVALUE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint GetAetherMonsterAvatarBaseValue(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETAETHERMONSTERAVATARBASEVALUE_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetPropertyAddValue(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GETPROPERTYADDVALUE_OFFSET))(this, a1, a2);
		}

		static ::System::String* FormatDisplayDataByType(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_FORMATDISPLAYDATABYTYPE_OFFSET))(a1, a2);
		}

		::System::Void _GetPropertyExcelBaseData(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::RPG::GameCore::FixPoint& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA__GETPROPERTYEXCELBASEDATA_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::AetherMonsterAvatarData* get__AetherMonsterAvatarData()
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_GET__AETHERMONSTERAVATARDATA_OFFSET))(this);
		}

		::System::Void set__AetherMonsterAvatarData(::RPG::Client::AetherMonsterAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARPROPERTYDATA_SET__AETHERMONSTERAVATARDATA_OFFSET))(this, a1);
		}
	};
}
