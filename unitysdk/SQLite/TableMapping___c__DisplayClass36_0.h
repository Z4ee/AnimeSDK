#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Reflection { class PropertyInfo; }

#define SQLITE_TABLEMAPPING___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B289370)
#define SQLITE_TABLEMAPPING___C__DISPLAYCLASS36_0__GETPUBLICMEMBERS_B__0_OFFSET UNITYSDK_OFFSET(0x1B289690)

namespace SQLite
{
	inline static constexpr unsigned int TableMapping___c__DisplayClass36_0_TypeDefinitionIndex = 36787;

	class TableMapping___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>* __9__0; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* memberNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPublicMembers_b__0(::System::Reflection::PropertyInfo* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING___C__DISPLAYCLASS36_0__GETPUBLICMEMBERS_B__0_OFFSET))(this, p);
		}
	};
}
