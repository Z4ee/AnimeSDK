#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

class Class_1_BB4B99DE4C2501EC_3;
class Class_1_F3CA30716D4FAF92_5;
namespace RPG::Client { class AvatarPathData; }
namespace RPG::Client { class AvatarPathRowWrapper; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIPATHAVATARDATA_CANCHANGETOSPECIFICAVATARPATH_OFFSET UNITYSDK_OFFSET(0xAAE9D40)
#define RPG_CLIENT_MULTIPATHAVATARDATA_DELETEOTHERGENDERAVATARPATHDATA_OFFSET UNITYSDK_OFFSET(0xAAE8EE0)
#define RPG_CLIENT_MULTIPATHAVATARDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAE8880)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GETALLAVAILABLEMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0xAAE9820)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GETALLAVATARPATHDATA_OFFSET UNITYSDK_OFFSET(0xAAE9440)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GETALLMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0xAAE94A0)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GETAVATARPATHDATA_OFFSET UNITYSDK_OFFSET(0xAAE9380)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GETAVATARPATHROW_OFFSET UNITYSDK_OFFSET(0xAAE9C80)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GETCURRENTMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0xAAE9340)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GETEARLYUNLOCKMULTIPATHAVATARTYPES_OFFSET UNITYSDK_OFFSET(0xAAE9980)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GET_BASEAVATARID_OFFSET UNITYSDK_OFFSET(0xAAE9EB0)
#define RPG_CLIENT_MULTIPATHAVATARDATA_HASMULTIAVATARPATH_OFFSET UNITYSDK_OFFSET(0xAAE9E20)
#define RPG_CLIENT_MULTIPATHAVATARDATA_SETCURRENTMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0xAAE92B0)
#define RPG_CLIENT_MULTIPATHAVATARDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xAAE8990)
#define RPG_CLIENT_MULTIPATHAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE8620)
#define RPG_CLIENT_MULTIPATHAVATARDATA__UPDATEALLAVATARPATHDATA_OFFSET UNITYSDK_OFFSET(0xAAE8BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarData_TypeDefinitionIndex = 61062;

	class MultiPathAvatarData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 HERO_BASE_AVATAR_ID = 0x1F41; // 0x0
		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* _AllEarlyUnlockMultiPathAvatarTypes; // 0x10
		::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441, ::RPG::Client::AvatarPathRowWrapper*>* _AvatarPathRowDict; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::AvatarPathData*>* _AllAvatarPathDatas; // 0x20
		::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441, ::RPG::Client::AvatarPathData*>* _AvatarPathDataDict; // 0x28
		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* _AllMultiPathAvatarTypes; // 0x30
		::System::UInt32 _BaseAvatarID; // 0x38
		::Enum_3_DFCB42601400F441 _CurrentAvatarType; // 0x3C

		::System::Void _ctor(::System::UInt32 baseAvatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA__CTOR_OFFSET))(this, baseAvatarID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_BB4B99DE4C2501EC_3* baseData, ::System::Span_1<::Class_1_F3CA30716D4FAF92_5*> uniqueDataSpan)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_3*, ::System::Span_1<::Class_1_F3CA30716D4FAF92_5*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA_SYNC_OFFSET))(this, baseData, uniqueDataSpan);
		}

		::System::Void DeleteOtherGenderAvatarPathData(::RPG::GameCore::GenderType genderType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA_DELETEOTHERGENDERAVATARPATHDATA_OFFSET))(this, genderType);
		}

		::System::Void SetCurrentMultiPathAvatarType(::Enum_3_DFCB42601400F441 newPathAvatarType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA_SETCURRENTMULTIPATHAVATARTYPE_OFFSET))(this, newPathAvatarType);
		}

		::Enum_3_DFCB42601400F441 GetCurrentMultiPathAvatarType()
		{
			return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA_GETCURRENTMULTIPATHAVATARTYPE_OFFSET))(this);
		}

		::RPG::Client::AvatarPathData* GetAvatarPathData(::Enum_3_DFCB42601400F441 type)
		{
			return ((::RPG::Client::AvatarPathData*(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA_GETAVATARPATHDATA_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarPathData*>* GetAllAvatarPathData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarPathData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA_GETALLAVATARPATHDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* GetAllMultiPathAvatarType()
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA_GETALLMULTIPATHAVATARTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* GetAllAvailableMultiPathAvatarType()
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA_GETALLAVAILABLEMULTIPATHAVATARTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* GetEarlyUnlockMultiPathAvatarTypes()
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA_GETEARLYUNLOCKMULTIPATHAVATARTYPES_OFFSET))(this);
		}

		::RPG::Client::AvatarPathRowWrapper* GetAvatarPathRow(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::AvatarPathRowWrapper*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA_GETAVATARPATHROW_OFFSET))(this, avatarID);
		}

		::System::Boolean CanChangeToSpecificAvatarPath(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA_CANCHANGETOSPECIFICAVATARPATH_OFFSET))(this, avatarID);
		}

		::System::Boolean HasMultiAvatarPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA_HASMULTIAVATARPATH_OFFSET))(this);
		}

		::System::Void _UpdateAllAvatarPathData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA__UPDATEALLAVATARPATHDATA_OFFSET))(this);
		}

		::System::UInt32 get_BaseAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA_GET_BASEAVATARID_OFFSET))(this);
		}
	};
}
