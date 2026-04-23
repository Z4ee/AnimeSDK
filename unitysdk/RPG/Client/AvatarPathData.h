#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_101;
class Class_1_D17272E82AE804C2_13;
class Class_1_F3CA30716D4FAF92_5;
namespace RPG::Client { class AvatarPathRowWrapper; }
namespace RPG::Client { class RelicSuitData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARPATHDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DB3FA0)
#define RPG_CLIENT_AVATARPATHDATA_GETSKILLTREEPOINTLEVEL_OFFSET UNITYSDK_OFFSET(0x9DB41A0)
#define RPG_CLIENT_AVATARPATHDATA_GET_RELICSDATA_OFFSET UNITYSDK_OFFSET(0x9DB42C0)
#define RPG_CLIENT_AVATARPATHDATA_GET_UNLOCKTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9DB42A0)
#define RPG_CLIENT_AVATARPATHDATA_ISSKILLTREEMAX_OFFSET UNITYSDK_OFFSET(0x9DB4020)
#define RPG_CLIENT_AVATARPATHDATA_SET_UNLOCKTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9DB42B0)
#define RPG_CLIENT_AVATARPATHDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9DB3D40)
#define RPG_CLIENT_AVATARPATHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB3D00)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathData_TypeDefinitionIndex = 61058;

	class AvatarPathData : public ::System::Object
	{
	public:
		::RPG::Client::RelicSuitData* _RelicsData; // 0x10
		::Il2CppArray<::Class_1_D17272E82AE804C2_101*>* EquipRelicList; // 0x18
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_13*>* AvatarSkillTreeList; // 0x20
		::RPG::Client::AvatarPathRowWrapper* Row; // 0x28
		::System::UInt32 DressedSkinID; // 0x30
		::System::UInt32 Rank; // 0x34
		::Enum_3_DFCB42601400F441 AvatarType; // 0x38
		::System::UInt32 CurEnhancedID; // 0x3C
		::System::UInt32 AvatarID; // 0x40
		::System::UInt32 Equipment; // 0x44
		::System::UInt64 _UnlockTimestamp_k__BackingField; // 0x48

		::System::Void _ctor(::Class_1_F3CA30716D4FAF92_5* uniqueData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHDATA__CTOR_OFFSET))(this, uniqueData);
		}

		::System::Void Sync(::Class_1_F3CA30716D4FAF92_5* uniqueData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHDATA_SYNC_OFFSET))(this, uniqueData);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHDATA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsSkillTreeMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHDATA_ISSKILLTREEMAX_OFFSET))(this);
		}

		::System::UInt32 GetSkillTreePointLevel(::System::UInt32 pointID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHDATA_GETSKILLTREEPOINTLEVEL_OFFSET))(this, pointID);
		}

		::System::UInt64 get_UnlockTimestamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHDATA_GET_UNLOCKTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_UnlockTimestamp(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHDATA_SET_UNLOCKTIMESTAMP_OFFSET))(this, value);
		}

		::RPG::Client::RelicSuitData* get_RelicsData()
		{
			return ((::RPG::Client::RelicSuitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHDATA_GET_RELICSDATA_OFFSET))(this);
		}
	};
}
