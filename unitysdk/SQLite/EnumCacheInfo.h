#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SQLITE_ENUMCACHEINFO_GET_ENUMVALUES_OFFSET UNITYSDK_OFFSET(0x1D633050)
#define SQLITE_ENUMCACHEINFO_GET_ISENUM_OFFSET UNITYSDK_OFFSET(0x1D633010)
#define SQLITE_ENUMCACHEINFO_GET_STOREASTEXT_OFFSET UNITYSDK_OFFSET(0x1D633030)
#define SQLITE_ENUMCACHEINFO_SET_ENUMVALUES_OFFSET UNITYSDK_OFFSET(0x1D633060)
#define SQLITE_ENUMCACHEINFO_SET_ISENUM_OFFSET UNITYSDK_OFFSET(0x1D633020)
#define SQLITE_ENUMCACHEINFO_SET_STOREASTEXT_OFFSET UNITYSDK_OFFSET(0x1D633040)
#define SQLITE_ENUMCACHEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D632940)

namespace SQLite
{
	inline static constexpr unsigned int EnumCacheInfo_TypeDefinitionIndex = 38400;

	class EnumCacheInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _EnumValues_k__BackingField; // 0x10
		::System::Boolean _StoreAsText_k__BackingField; // 0x18
		::System::Boolean _IsEnum_k__BackingField; // 0x19

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO__CTOR_OFFSET))(this, type);
		}

		::System::Boolean get_IsEnum()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO_GET_ISENUM_OFFSET))(this);
		}

		::System::Void set_IsEnum(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO_SET_ISENUM_OFFSET))(this, value);
		}

		::System::Boolean get_StoreAsText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO_GET_STOREASTEXT_OFFSET))(this);
		}

		::System::Void set_StoreAsText(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO_SET_STOREASTEXT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* get_EnumValues()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO_GET_ENUMVALUES_OFFSET))(this);
		}

		::System::Void set_EnumValues(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO_SET_ENUMVALUES_OFFSET))(this, value);
		}
	};
}
