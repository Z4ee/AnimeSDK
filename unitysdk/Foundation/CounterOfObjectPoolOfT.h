#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_COUNTEROFOBJECTPOOLOFT_DUMP_OFFSET UNITYSDK_OFFSET(0x1F696030)
#define FOUNDATION_COUNTEROFOBJECTPOOLOFT_SWAPMARK_OFFSET UNITYSDK_OFFSET(0x1F695F20)
#define FOUNDATION_COUNTEROFOBJECTPOOLOFT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6961A0)
#define FOUNDATION_COUNTEROFOBJECTPOOLOFT__UPDATELIST_OFFSET UNITYSDK_OFFSET(0x1F695A30)

namespace Foundation
{
	inline static constexpr unsigned int CounterOfObjectPoolOfT_TypeDefinitionIndex = 8414;

	class CounterOfObjectPoolOfT : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet__lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CounterOfObjectPoolOfT_TypeDefinitionIndex)->GetStaticField(0x7010);
		}
		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Int32>>** StaticGet__samplerNames()
		{
			return (::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(CounterOfObjectPoolOfT_TypeDefinitionIndex)->GetStaticField(0x7018);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_s_counter()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CounterOfObjectPoolOfT_TypeDefinitionIndex)->GetStaticField(0x7020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COUNTEROFOBJECTPOOLOFT__CCTOR_OFFSET))();
		}

		static ::System::Void _UpdateList()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COUNTEROFOBJECTPOOLOFT__UPDATELIST_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* SwapMark()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COUNTEROFOBJECTPOOLOFT_SWAPMARK_OFFSET))();
		}

		static ::System::Void Dump()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COUNTEROFOBJECTPOOLOFT_DUMP_OFFSET))();
		}
	};
}
