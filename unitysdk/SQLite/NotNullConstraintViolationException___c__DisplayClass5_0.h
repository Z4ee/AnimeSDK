#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class TableMapping_Column; }

#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D633630)
#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION___C__DISPLAYCLASS5_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1D6338E0)

namespace SQLite
{
	inline static constexpr unsigned int NotNullConstraintViolationException___c__DisplayClass5_0_TypeDefinitionIndex = 38362;

	class NotNullConstraintViolationException___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Object* obj; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0(::SQLite::TableMapping_Column* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::SQLite::TableMapping_Column*))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION___C__DISPLAYCLASS5_0___CTOR_B__0_OFFSET))(this, c);
		}
	};
}
