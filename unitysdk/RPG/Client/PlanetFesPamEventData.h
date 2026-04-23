#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesEventDataBase.h"

class Class_1_BE729FA1D1A7FEDD;
namespace RPG::Client { class PlanetFesPamEventItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESPAMEVENTDATA_GETITEMS_OFFSET UNITYSDK_OFFSET(0xAD36C30)
#define RPG_CLIENT_PLANETFESPAMEVENTDATA__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0xAD36CF0)
#define RPG_CLIENT_PLANETFESPAMEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAD36850)
#define RPG_CLIENT_PLANETFESPAMEVENTDATA__DISPOSEDETAIL_OFFSET UNITYSDK_OFFSET(0xAD36C70)
#define RPG_CLIENT_PLANETFESPAMEVENTDATA__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0xAD368A0)
#define RPG_CLIENT_PLANETFESPAMEVENTDATA___IFIXBASEPROXY__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0xAD36E30)
#define RPG_CLIENT_PLANETFESPAMEVENTDATA___IFIXBASEPROXY__DISPOSEDETAIL_OFFSET UNITYSDK_OFFSET(0xAD36DD0)
#define RPG_CLIENT_PLANETFESPAMEVENTDATA___IFIXBASEPROXY__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0xAD36D60)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesPamEventData_TypeDefinitionIndex = 61316;

	class PlanetFesPamEventData : public ::RPG::Client::PlanetFesEventDataBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesPamEventItem*>* _Items; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTDATA__CTOR_OFFSET))(this);
		}

		::System::Void _SyncDetail(::Class_1_BE729FA1D1A7FEDD* eventInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE729FA1D1A7FEDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTDATA__SYNCDETAIL_OFFSET))(this, eventInfo);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesPamEventItem*>* GetItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesPamEventItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTDATA_GETITEMS_OFFSET))(this);
		}

		::System::Void _DisposeDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTDATA__DISPOSEDETAIL_OFFSET))(this);
		}

		::System::Void _ClearDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTDATA__CLEARDETAIL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SyncDetail(::Class_1_BE729FA1D1A7FEDD* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE729FA1D1A7FEDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTDATA___IFIXBASEPROXY__SYNCDETAIL_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__DisposeDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTDATA___IFIXBASEPROXY__DISPOSEDETAIL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__ClearDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTDATA___IFIXBASEPROXY__CLEARDETAIL_OFFSET))(this);
		}
	};
}
