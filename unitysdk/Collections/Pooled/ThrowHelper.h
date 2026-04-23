#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/ExceptionArgument.h"
#include "unitysdk/Collections/Pooled/ExceptionResource.h"
#include "unitysdk/System/Object.h"

namespace System { class ArgumentException; }
namespace System { class ArgumentNullException; }
namespace System { class ArgumentOutOfRangeException; }
namespace System { class Exception; }
namespace System { class InvalidOperationException; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { class KeyNotFoundException; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COLLECTIONS_POOLED_THROWHELPER_GETADDINGDUPLICATEWITHKEYARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD6A20)
#define COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x17AD6BF0)
#define COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD6B30)
#define COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTNAME_OFFSET UNITYSDK_OFFSET(0x17AD6D40)
#define COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD6C80)
#define COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x17AD7640)
#define COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD6850)
#define COLLECTIONS_POOLED_THROWHELPER_GETINVALIDOPERATIONEXCEPTION_ENUMCURRENT_OFFSET UNITYSDK_OFFSET(0x17AD7D30)
#define COLLECTIONS_POOLED_THROWHELPER_GETINVALIDOPERATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD7790)
#define COLLECTIONS_POOLED_THROWHELPER_GETKEYNOTFOUNDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD81A0)
#define COLLECTIONS_POOLED_THROWHELPER_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x17AD7230)
#define COLLECTIONS_POOLED_THROWHELPER_GETWRONGKEYTYPEARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD7FC0)
#define COLLECTIONS_POOLED_THROWHELPER_GETWRONGVALUETYPEARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD80B0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWAGGREGATEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD7B60)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x17AD6BB0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_ARGUMENT_INVALIDARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x17AD7C00)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_DESTINATIONTOOSHORT_OFFSET UNITYSDK_OFFSET(0x17AD6770)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD6AF0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_OVERLAPALIGNMENTMISMATCH_OFFSET UNITYSDK_OFFSET(0x17AD67C0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x17AD71D0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x17AD74E0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD7190)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x17AD7550)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x17AD75B0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_3_OFFSET UNITYSDK_OFFSET(0x17AD75F0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD6720)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGE_INDEXEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD6810)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARRAYTYPEMISMATCHEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD6680)
#define COLLECTIONS_POOLED_THROWHELPER_THROWCOUNTARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_COUNT_OFFSET UNITYSDK_OFFSET(0x17AD69E0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWFORMATEXCEPTION_BADFORMATSPECIFIER_OFFSET UNITYSDK_OFFSET(0x17AD7F70)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINDEXARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD68E0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINDEXOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD66D0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x17AD7810)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_CONCURRENTOPERATIONSNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x17AD7ED0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_ENUMCURRENT_OFFSET UNITYSDK_OFFSET(0x17AD7CF0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_HANDLEISNOTINITIALIZED_OFFSET UNITYSDK_OFFSET(0x17AD7F20)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMENDED_OFFSET UNITYSDK_OFFSET(0x17AD7CA0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMFAILEDVERSION_OFFSET UNITYSDK_OFFSET(0x17AD7DE0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMNOTSTARTED_OFFSET UNITYSDK_OFFSET(0x17AD7C50)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMOPCANTHAPPEN_OFFSET UNITYSDK_OFFSET(0x17AD7E30)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_NOVALUE_OFFSET UNITYSDK_OFFSET(0x17AD7E80)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD7750)
#define COLLECTIONS_POOLED_THROWHELPER_THROWLENGTHARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_NEEDNONNEGNUM_OFFSET UNITYSDK_OFFSET(0x17AD6960)
#define COLLECTIONS_POOLED_THROWHELPER_THROWNOTSUPPORTEDEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x17AD7B10)
#define COLLECTIONS_POOLED_THROWHELPER_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD7990)
#define COLLECTIONS_POOLED_THROWHELPER_THROWOBJECTDISPOSEDEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x17AD7AB0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWOBJECTDISPOSEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD7A50)
#define COLLECTIONS_POOLED_THROWHELPER_THROWOUTOFMEMORYEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD7BB0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWRANKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD7930)
#define COLLECTIONS_POOLED_THROWHELPER_THROWSECURITYEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD78D0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWSERIALIZATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD7870)
#define COLLECTIONS_POOLED_THROWHELPER_THROWSTARTINDEXARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_INDEX_OFFSET UNITYSDK_OFFSET(0x17AD69A0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWUNAUTHORIZEDACCESSEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD79F0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWVALUEARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17AD6920)

namespace Collections::Pooled
{
	inline static constexpr unsigned int ThrowHelper_TypeDefinitionIndex = 5358;

	class ThrowHelper : public ::System::Object
	{
	public:
		static ::System::Void ThrowArrayTypeMismatchException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARRAYTYPEMISMATCHEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowIndexOutOfRangeException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINDEXOUTOFRANGEEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowArgumentOutOfRangeException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowArgumentException_DestinationTooShort()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_DESTINATIONTOOSHORT_OFFSET))();
		}

		static ::System::Void ThrowArgumentException_OverlapAlignmentMismatch()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_OVERLAPALIGNMENTMISMATCH_OFFSET))();
		}

		static ::System::Void ThrowArgumentOutOfRange_IndexException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGE_INDEXEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowIndexArgumentOutOfRange_NeedNonNegNumException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINDEXARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowValueArgumentOutOfRange_NeedNonNegNumException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWVALUEARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowLengthArgumentOutOfRange_ArgumentOutOfRange_NeedNonNegNum()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWLENGTHARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_NEEDNONNEGNUM_OFFSET))();
		}

		static ::System::Void ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWSTARTINDEXARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_INDEX_OFFSET))();
		}

		static ::System::Void ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWCOUNTARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_COUNT_OFFSET))();
		}

		static ::System::ArgumentException* GetAddingDuplicateWithKeyArgumentException(::System::Object* key)
		{
			return ((::System::ArgumentException*(*)(::System::Object*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETADDINGDUPLICATEWITHKEYARGUMENTEXCEPTION_OFFSET))(key);
		}

		static ::System::Void ThrowArgumentException(::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_OFFSET))(resource);
		}

		static ::System::Void ThrowArgumentException_1(::Collections::Pooled::ExceptionResource resource, ::Collections::Pooled::ExceptionArgument argument)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource, ::Collections::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_1_OFFSET))(resource, argument);
		}

		static ::System::ArgumentNullException* GetArgumentNullException(::Collections::Pooled::ExceptionArgument argument)
		{
			return ((::System::ArgumentNullException*(*)(::Collections::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTNULLEXCEPTION_OFFSET))(argument);
		}

		static ::System::Void ThrowArgumentNullException(::Collections::Pooled::ExceptionArgument argument)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET))(argument);
		}

		static ::System::Void ThrowArgumentNullException_1(::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_1_OFFSET))(resource);
		}

		static ::System::Void ThrowArgumentNullException_2(::Collections::Pooled::ExceptionArgument argument, ::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionArgument, ::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_2_OFFSET))(argument, resource);
		}

		static ::System::Void ThrowArgumentOutOfRangeException_1(::Collections::Pooled::ExceptionArgument argument)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET))(argument);
		}

		static ::System::Void ThrowArgumentOutOfRangeException_2(::Collections::Pooled::ExceptionArgument argument, ::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionArgument, ::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_2_OFFSET))(argument, resource);
		}

		static ::System::Void ThrowArgumentOutOfRangeException_3(::Collections::Pooled::ExceptionArgument argument, ::System::Int32 paramNumber, ::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionArgument, ::System::Int32, ::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_3_OFFSET))(argument, paramNumber, resource);
		}

		static ::System::Void ThrowInvalidOperationException(::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_OFFSET))(resource);
		}

		static ::System::Void ThrowInvalidOperationException_1(::Collections::Pooled::ExceptionResource resource, ::System::Exception* e)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource, ::System::Exception*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_1_OFFSET))(resource, e);
		}

		static ::System::Void ThrowSerializationException(::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWSERIALIZATIONEXCEPTION_OFFSET))(resource);
		}

		static ::System::Void ThrowSecurityException(::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWSECURITYEXCEPTION_OFFSET))(resource);
		}

		static ::System::Void ThrowRankException(::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWRANKEXCEPTION_OFFSET))(resource);
		}

		static ::System::Void ThrowNotSupportedException(::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWNOTSUPPORTEDEXCEPTION_OFFSET))(resource);
		}

		static ::System::Void ThrowUnauthorizedAccessException(::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWUNAUTHORIZEDACCESSEXCEPTION_OFFSET))(resource);
		}

		static ::System::Void ThrowObjectDisposedException(::System::String* objectName, ::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::Void(*)(::System::String*, ::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWOBJECTDISPOSEDEXCEPTION_OFFSET))(objectName, resource);
		}

		static ::System::Void ThrowObjectDisposedException_1(::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWOBJECTDISPOSEDEXCEPTION_1_OFFSET))(resource);
		}

		static ::System::Void ThrowNotSupportedException_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWNOTSUPPORTEDEXCEPTION_1_OFFSET))();
		}

		static ::System::Void ThrowAggregateException(::System::Collections::Generic::List_1<::System::Exception*>* exceptions)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWAGGREGATEEXCEPTION_OFFSET))(exceptions);
		}

		static ::System::Void ThrowOutOfMemoryException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWOUTOFMEMORYEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowArgumentException_Argument_InvalidArrayType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_ARGUMENT_INVALIDARRAYTYPE_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_InvalidOperation_EnumNotStarted()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMNOTSTARTED_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_InvalidOperation_EnumEnded()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMENDED_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_EnumCurrent(::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_ENUMCURRENT_OFFSET))(index);
		}

		static ::System::Void ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMFAILEDVERSION_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMOPCANTHAPPEN_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_InvalidOperation_NoValue()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_NOVALUE_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_ConcurrentOperationsNotSupported()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_CONCURRENTOPERATIONSNOTSUPPORTED_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_HandleIsNotInitialized()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_HANDLEISNOTINITIALIZED_OFFSET))();
		}

		static ::System::Void ThrowFormatException_BadFormatSpecifier()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWFORMATEXCEPTION_BADFORMATSPECIFIER_OFFSET))();
		}

		static ::System::ArgumentException* GetArgumentException(::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::ArgumentException*(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTEXCEPTION_OFFSET))(resource);
		}

		static ::System::InvalidOperationException* GetInvalidOperationException(::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::InvalidOperationException*(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETINVALIDOPERATIONEXCEPTION_OFFSET))(resource);
		}

		static ::System::ArgumentException* GetWrongKeyTypeArgumentException(::System::Object* key, ::System::Type* targetType)
		{
			return ((::System::ArgumentException*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETWRONGKEYTYPEARGUMENTEXCEPTION_OFFSET))(key, targetType);
		}

		static ::System::ArgumentException* GetWrongValueTypeArgumentException(::System::Object* value, ::System::Type* targetType)
		{
			return ((::System::ArgumentException*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETWRONGVALUETYPEARGUMENTEXCEPTION_OFFSET))(value, targetType);
		}

		static ::System::Collections::Generic::KeyNotFoundException* GetKeyNotFoundException(::System::Object* key)
		{
			return ((::System::Collections::Generic::KeyNotFoundException*(*)(::System::Object*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETKEYNOTFOUNDEXCEPTION_OFFSET))(key);
		}

		static ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::Collections::Pooled::ExceptionArgument argument, ::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::Collections::Pooled::ExceptionArgument, ::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(argument, resource);
		}

		static ::System::ArgumentException* GetArgumentException_1(::Collections::Pooled::ExceptionResource resource, ::Collections::Pooled::ExceptionArgument argument)
		{
			return ((::System::ArgumentException*(*)(::Collections::Pooled::ExceptionResource, ::Collections::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTEXCEPTION_1_OFFSET))(resource, argument);
		}

		static ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException_1(::Collections::Pooled::ExceptionArgument argument, ::System::Int32 paramNumber, ::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::Collections::Pooled::ExceptionArgument, ::System::Int32, ::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET))(argument, paramNumber, resource);
		}

		static ::System::InvalidOperationException* GetInvalidOperationException_EnumCurrent(::System::Int32 index)
		{
			return ((::System::InvalidOperationException*(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETINVALIDOPERATIONEXCEPTION_ENUMCURRENT_OFFSET))(index);
		}

		static ::System::String* GetArgumentName(::Collections::Pooled::ExceptionArgument argument)
		{
			return ((::System::String*(*)(::Collections::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTNAME_OFFSET))(argument);
		}

		static ::System::String* GetResourceString(::Collections::Pooled::ExceptionResource resource)
		{
			return ((::System::String*(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETRESOURCESTRING_OFFSET))(resource);
		}
	};
}
