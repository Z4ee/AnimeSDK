#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

class Class_1_BB4B99DE4C2501EC_3;
class Class_1_F3CA30716D4FAF92_4;
namespace RPG::Client { class AvatarPathData; }
namespace RPG::Client { class AvatarPathRowWrapper; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIPATHAVATARDATA_CANCHANGETOSPECIFICAVATARPATH_OFFSET UNITYSDK_OFFSET(0x9DA48E0)
#define RPG_CLIENT_MULTIPATHAVATARDATA_DELETEOTHERGENDERAVATARPATHDATA_OFFSET UNITYSDK_OFFSET(0x9DA3CA0)
#define RPG_CLIENT_MULTIPATHAVATARDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DA36D0)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GETALLAVAILABLEMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x9DA43C0)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GETALLAVATARPATHDATA_OFFSET UNITYSDK_OFFSET(0x9DA4100)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GETALLMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x9DA4160)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GETAVATARPATHDATA_OFFSET UNITYSDK_OFFSET(0x9DA4040)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GETAVATARPATHROW_OFFSET UNITYSDK_OFFSET(0x9DA4820)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GETCURRENTMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x9DA4000)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GETEARLYUNLOCKMULTIPATHAVATARTYPES_OFFSET UNITYSDK_OFFSET(0x9DA4520)
#define RPG_CLIENT_MULTIPATHAVATARDATA_GET_BASEAVATARID_OFFSET UNITYSDK_OFFSET(0x9DA4A50)
#define RPG_CLIENT_MULTIPATHAVATARDATA_HASMULTIAVATARPATH_OFFSET UNITYSDK_OFFSET(0x9DA49C0)
#define RPG_CLIENT_MULTIPATHAVATARDATA_SETCURRENTMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x9DA3F60)
#define RPG_CLIENT_MULTIPATHAVATARDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9DA37E0)
#define RPG_CLIENT_MULTIPATHAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DA3470)
#define RPG_CLIENT_MULTIPATHAVATARDATA__UPDATEALLAVATARPATHDATA_OFFSET UNITYSDK_OFFSET(0x9DA3A10)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarData_TypeDefinitionIndex = 53918;

	class MultiPathAvatarData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 HERO_BASE_AVATAR_ID = 0x1F41; // 0x0
		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* _AllMultiPathAvatarTypes; // 0x10
		::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441, ::RPG::Client::AvatarPathData*>* _AvatarPathDataDict; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::AvatarPathData*>* _AllAvatarPathDatas; // 0x20
		::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441, ::RPG::Client::AvatarPathRowWrapper*>* _AvatarPathRowDict; // 0x28
		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* _AllEarlyUnlockMultiPathAvatarTypes; // 0x30
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

		::System::Void Sync(::Class_1_BB4B99DE4C2501EC_3* baseData, ::System::Span_1<::Class_1_F3CA30716D4FAF92_4*> uniqueDataSpan)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_3*, ::System::Span_1<::Class_1_F3CA30716D4FAF92_4*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARDATA_SYNC_OFFSET))(this, baseData, uniqueDataSpan);
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
