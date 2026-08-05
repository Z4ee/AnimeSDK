#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NameValueArray_1.h"
#include "unitysdk/Foundation/NameValueSortedArray_1.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Comparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_NAMEVALUECONTAINERBUILDER_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1F562490)
#define FOUNDATION_NAMEVALUECONTAINERBUILDER_SORT_OFFSET UNITYSDK_OFFSET(0x1F5624D0)
#define FOUNDATION_NAMEVALUECONTAINERBUILDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F562610)
#define FOUNDATION_NAMEVALUECONTAINERBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F562580)

namespace Foundation
{
	inline static constexpr unsigned int NameValueContainerBuilder_TypeDefinitionIndex = 8776;

	class NameValueContainerBuilder : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>>** StaticGet_Comparer()
		{
			return (::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(NameValueContainerBuilder_TypeDefinitionIndex)->GetStaticField(0x7550);
		}
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>>* _names; // 0x10
		::Foundation::NativeMemoryRequestHandle _keyRequest; // 0x18
		::Foundation::NativeMemoryRequestHandle _valueRequest; // 0x28
		::System::Boolean _isOutOfOrder; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAMEVALUECONTAINERBUILDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAMEVALUECONTAINERBUILDER__CCTOR_OFFSET))();
		}

		::Foundation::NameValueContainerBuilder* AddName(::Foundation::Unreal::FName name)
		{
			return ((::Foundation::NameValueContainerBuilder*(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + FOUNDATION_NAMEVALUECONTAINERBUILDER_ADDNAME_OFFSET))(this, name);
		}

		::System::Void Sort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAMEVALUECONTAINERBUILDER_SORT_OFFSET))(this);
		}
	};
}
