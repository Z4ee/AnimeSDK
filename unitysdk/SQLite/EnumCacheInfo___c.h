#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class CustomAttributeData; }

#define SQLITE_ENUMCACHEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B276D10)
#define SQLITE_ENUMCACHEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B276D50)
#define SQLITE_ENUMCACHEINFO___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1B276D60)

namespace SQLite
{
	inline static constexpr unsigned int EnumCacheInfo___c_TypeDefinitionIndex = 36791;

	class EnumCacheInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::CustomAttributeData*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Reflection::CustomAttributeData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EnumCacheInfo___c_TypeDefinitionIndex)->GetStaticField(0x272E0);
		}
		static ::SQLite::EnumCacheInfo___c** StaticGet___9()
		{
			return (::SQLite::EnumCacheInfo___c**)Il2CppClass::FromTypeDefinitionIndex(EnumCacheInfo___c_TypeDefinitionIndex)->GetStaticField(0x272E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0_0(::System::Reflection::CustomAttributeData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::CustomAttributeData*))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO___C___CTOR_B__0_0_OFFSET))(this, x);
		}
	};
}
