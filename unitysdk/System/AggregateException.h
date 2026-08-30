#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_AGGREGATEEXCEPTION_FLATTEN_OFFSET UNITYSDK_OFFSET(0x1BB92140)
#define SYSTEM_AGGREGATEEXCEPTION_GETBASEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1BB92090)
#define SYSTEM_AGGREGATEEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1BB91F70)
#define SYSTEM_AGGREGATEEXCEPTION_GET_INNEREXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x1BB92130)
#define SYSTEM_AGGREGATEEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BB92740)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BB90F20)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BB91000)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BB90F60)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1BB91040)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1BB91050)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1BB91640)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1BB91680)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1BB91720)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1BB91E10)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB90E30)

namespace System
{
	inline static constexpr unsigned int AggregateException_TypeDefinitionIndex = 153;

	class AggregateException : public ::System::Exception
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* m_innerExceptions; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::Exception*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Exception*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Exception*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::String* a1, ::Il2CppArray<::System::Exception*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Exception*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_5(::System::String* a1, ::System::Collections::Generic::IList_1<::System::Exception*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_5_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_6(::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_6_OFFSET))(this, a1);
		}

		::System::Void _ctor_7(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_7_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_8(::System::String* a1, ::System::Collections::Generic::IList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_8_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_9(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_9_OFFSET))(this, a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Exception* GetBaseException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_GETBASEEXCEPTION_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* get_InnerExceptions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_GET_INNEREXCEPTIONS_OFFSET))(this);
		}

		::System::AggregateException* Flatten()
		{
			return ((::System::AggregateException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_FLATTEN_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_TOSTRING_OFFSET))(this);
		}
	};
}
