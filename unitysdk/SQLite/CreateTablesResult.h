#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/CreateTableResult.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SQLITE_CREATETABLESRESULT_GET_RESULTS_OFFSET UNITYSDK_OFFSET(0x1B2762A0)
#define SQLITE_CREATETABLESRESULT_SET_RESULTS_OFFSET UNITYSDK_OFFSET(0x1B2762B0)
#define SQLITE_CREATETABLESRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2762C0)

namespace SQLite
{
	inline static constexpr unsigned int CreateTablesResult_TypeDefinitionIndex = 36807;

	class CreateTablesResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::SQLite::CreateTableResult>* _Results_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_CREATETABLESRESULT__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Type*, ::SQLite::CreateTableResult>* get_Results()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Type*, ::SQLite::CreateTableResult>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_CREATETABLESRESULT_GET_RESULTS_OFFSET))(this);
		}

		::System::Void set_Results(::System::Collections::Generic::Dictionary_2<::System::Type*, ::SQLite::CreateTableResult>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::SQLite::CreateTableResult>*))((::PBYTE)hIl2Cpp + SQLITE_CREATETABLESRESULT_SET_RESULTS_OFFSET))(this, value);
		}
	};
}
