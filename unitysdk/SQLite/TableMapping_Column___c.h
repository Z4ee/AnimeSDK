#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class CustomAttributeData; }

#define SQLITE_TABLEMAPPING_COLUMN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B289CA0)
#define SQLITE_TABLEMAPPING_COLUMN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B289CE0)
#define SQLITE_TABLEMAPPING_COLUMN___C___CTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1B289CF0)

namespace SQLite
{
	inline static constexpr unsigned int TableMapping_Column___c_TypeDefinitionIndex = 36784;

	class TableMapping_Column___c : public ::System::Object
	{
	public:
		static ::SQLite::TableMapping_Column___c** StaticGet___9()
		{
			return (::SQLite::TableMapping_Column___c**)Il2CppClass::FromTypeDefinitionIndex(TableMapping_Column___c_TypeDefinitionIndex)->GetStaticField(0x273B0);
		}
		static ::System::Func_2<::System::Reflection::CustomAttributeData*, ::System::Boolean>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::System::Reflection::CustomAttributeData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TableMapping_Column___c_TypeDefinitionIndex)->GetStaticField(0x273B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__53_0(::System::Reflection::CustomAttributeData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::CustomAttributeData*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_COLUMN___C___CTOR_B__53_0_OFFSET))(this, x);
		}
	};
}
