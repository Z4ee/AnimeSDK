#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnection; }
namespace SQLite { class TableMapping_Column; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Reflection { class MethodInfo; }

#define SQLITE_FASTCOLUMNSETTER_GETFASTSETTERMETHODINFOUNSAFE_OFFSET UNITYSDK_OFFSET(0x1B276DF0)
#define SQLITE_FASTCOLUMNSETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B276FA0)

namespace SQLite
{
	inline static constexpr unsigned int FastColumnSetter_TypeDefinitionIndex = 36799;

	class FastColumnSetter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_FASTCOLUMNSETTER__CTOR_OFFSET))(this);
		}

		static ::System::Reflection::MethodInfo* GetFastSetterMethodInfoUnsafe(::System::Type* mappedType)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_FASTCOLUMNSETTER_GETFASTSETTERMETHODINFOUNSAFE_OFFSET))(mappedType);
		}
	};
}
