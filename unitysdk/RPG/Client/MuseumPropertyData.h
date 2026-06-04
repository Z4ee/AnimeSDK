#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSEUMPROPERTYDATA_CLEARALLDATA_OFFSET UNITYSDK_OFFSET(0xC2197E0)
#define RPG_CLIENT_MUSEUMPROPERTYDATA_CLEARPREVIEWDATA_OFFSET UNITYSDK_OFFSET(0xC208610)
#define RPG_CLIENT_MUSEUMPROPERTYDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0xC219840)
#define RPG_CLIENT_MUSEUMPROPERTYDATA_GET_CANUPDATE_OFFSET UNITYSDK_OFFSET(0xC2197D0)
#define RPG_CLIENT_MUSEUMPROPERTYDATA_GET_PREVIEWCURNUM_OFFSET UNITYSDK_OFFSET(0xC219710)
#define RPG_CLIENT_MUSEUMPROPERTYDATA_GET_PREVIEWMAXNUM_OFFSET UNITYSDK_OFFSET(0xC219770)
#define RPG_CLIENT_MUSEUMPROPERTYDATA_ISMAX_OFFSET UNITYSDK_OFFSET(0xC208940)
#define RPG_CLIENT_MUSEUMPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC2068F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumPropertyData_TypeDefinitionIndex = 62021;

	class MuseumPropertyData : public ::System::Object
	{
	public:
		::System::UInt32 MaxNum; // 0x10
		::System::UInt32 AddMaxNum; // 0x14
		::System::UInt32 CurNum; // 0x18
		::System::UInt32 AddCurNum; // 0x1C
		::System::Boolean IsAddMaxNumMinus; // 0x20
		::System::Boolean IsAddCurNumMinus; // 0x21
		::System::Boolean IsJustMax; // 0x22
		::System::Boolean IsJustAdd; // 0x23
		::System::UInt32 Level; // 0x24
		::System::UInt32 UpdateCost; // 0x28
		::System::UInt32 MaxLevel; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PreviewCurNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA_GET_PREVIEWCURNUM_OFFSET))(this);
		}

		::System::UInt32 get_PreviewMaxNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA_GET_PREVIEWMAXNUM_OFFSET))(this);
		}

		::System::Boolean get_CanUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA_GET_CANUPDATE_OFFSET))(this);
		}

		::System::Boolean IsMax(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA_ISMAX_OFFSET))(this, a1);
		}

		::System::Void ClearPreviewData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA_CLEARPREVIEWDATA_OFFSET))(this);
		}

		::System::Void ClearAllData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA_CLEARALLDATA_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::Client::MuseumPropertyData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumPropertyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA_COPYTO_OFFSET))(this, a1);
		}
	};
}
