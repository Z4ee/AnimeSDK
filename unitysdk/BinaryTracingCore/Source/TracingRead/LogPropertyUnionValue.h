#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_CASTFROMOBJECT_OFFSET UNITYSDK_OFFSET(0x1BEFF200)
#define BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1BEFF170)
#define BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1BEFF190)
#define BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1BEFF1A0)
#define BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1BEFF1C0)
#define BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1BEFF1D0)
#define BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1BEFF1E0)
#define BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BEFF150)

namespace BinaryTracingCore::Source::TracingRead
{
	inline static constexpr unsigned int LogPropertyUnionValue_TypeDefinitionIndex = 32415;

	struct alignas(8) LogPropertyUnionValue
	{
		::System::Boolean boolValue; // 0x10
		::System::Single floatValue; // 0x10
		::System::Int32 intValue; // 0x10
		::System::UInt64 ulongValue; // 0x10
		::System::Double doubleValue; // 0x10
		::System::String* stringValue; // 0x18
		::System::Object* objectValue; // 0x18

		static ::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue op_Implicit(::System::Int32 value)
		{
			return ((::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue(*)(::System::Int32))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_OP_IMPLICIT_OFFSET))(value);
		}

		static ::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue op_Implicit_1(::System::UInt32 value)
		{
			return ((::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_OP_IMPLICIT_1_OFFSET))(value);
		}

		static ::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue op_Implicit_2(::System::UInt64 value)
		{
			return ((::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue(*)(::System::UInt64))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_OP_IMPLICIT_2_OFFSET))(value);
		}

		static ::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue op_Implicit_3(::System::Single value)
		{
			return ((::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue(*)(::System::Single))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_OP_IMPLICIT_3_OFFSET))(value);
		}

		static ::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue op_Implicit_4(::System::Double value)
		{
			return ((::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue(*)(::System::Double))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_OP_IMPLICIT_4_OFFSET))(value);
		}

		static ::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue op_Implicit_5(::System::String* value)
		{
			return ((::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue(*)(::System::String*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_OP_IMPLICIT_5_OFFSET))(value);
		}

		static ::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue op_Implicit_6(::System::Boolean value)
		{
			return ((::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue(*)(::System::Boolean))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_OP_IMPLICIT_6_OFFSET))(value);
		}

		static ::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue CastFromObject(::System::Object* obj)
		{
			return ((::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue(*)(::System::Object*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYUNIONVALUE_CASTFROMOBJECT_OFFSET))(obj);
		}
	};
}
