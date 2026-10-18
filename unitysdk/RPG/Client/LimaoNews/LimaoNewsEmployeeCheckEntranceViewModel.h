#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::Client::LimaoNews { class LimaoNewsEmployeeCheckData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL_BUILDSORTEDEMPLOYEEDATAS_OFFSET UNITYSDK_OFFSET(0xD3A5B10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL_GETCOUNT_OFFSET UNITYSDK_OFFSET(0xD3A5A30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL_GETEMPLOYEEDATA_OFFSET UNITYSDK_OFFSET(0xD3A5A80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL_GETFIRSTCANCHECKEMPLOYEEINDEX_OFFSET UNITYSDK_OFFSET(0xD3A5D70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD3A5E20)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsEmployeeCheckEntranceViewModel_TypeDefinitionIndex = 80423;

	class LimaoNewsEmployeeCheckEntranceViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>* _EmployeeDatas; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Int32 GetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL_GETCOUNT_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* GetEmployeeData(::System::Int32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL_GETEMPLOYEEDATA_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>* BuildSortedEmployeeDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL_BUILDSORTEDEMPLOYEEDATAS_OFFSET))();
		}

		::System::Int32 GetFirstCanCheckEmployeeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL_GETFIRSTCANCHECKEMPLOYEEINDEX_OFFSET))(this);
		}
	};
}
