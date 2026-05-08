#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_ASSERT_ASSERTATLEAST_OFFSET UNITYSDK_OFFSET(0x1C1A68C0)
#define FOUNDATION_ASSERT_ASSERTATMOST_OFFSET UNITYSDK_OFFSET(0x1C1A6A80)
#define FOUNDATION_ASSERT_ASSERTEQUALS_OFFSET UNITYSDK_OFFSET(0x1C1A6D30)
#define FOUNDATION_ASSERT_ASSERTINRANGE_1_OFFSET UNITYSDK_OFFSET(0x1C1A6620)
#define FOUNDATION_ASSERT_ASSERTINRANGE_OFFSET UNITYSDK_OFFSET(0x1C1A63C0)
#define FOUNDATION_ASSERT_ASSERTNOTNULL_1_OFFSET UNITYSDK_OFFSET(0x1C1A6C80)
#define FOUNDATION_ASSERT_ASSERTNOTNULL_OFFSET UNITYSDK_OFFSET(0x1C1A6C40)
#define FOUNDATION_ASSERT_ASSERTSTRINGNOTNULL_OFFSET UNITYSDK_OFFSET(0x1C1A6320)
#define FOUNDATION_ASSERT_ASSERTTRUE_1_OFFSET UNITYSDK_OFFSET(0x1C1A62B0)
#define FOUNDATION_ASSERT_ASSERTTRUE_OFFSET UNITYSDK_OFFSET(0x1C1A6230)
#define FOUNDATION_ASSERT_FAIL_1_OFFSET UNITYSDK_OFFSET(0x1C1A61D0)
#define FOUNDATION_ASSERT_FAIL_OFFSET UNITYSDK_OFFSET(0x1C1A60B0)

namespace Foundation
{
	inline static constexpr unsigned int Assert_TypeDefinitionIndex = 8004;

	class Assert : public ::System::Object
	{
	public:
		static ::System::Void Fail(::System::Int32 skipStackFrames, ::System::String* message, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSERT_FAIL_OFFSET))(skipStackFrames, message, args);
		}

		static ::System::Void Fail_1(::System::String* message, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSERT_FAIL_1_OFFSET))(message, args);
		}

		static ::System::Void AssertTrue(::System::Boolean expression)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSERT_ASSERTTRUE_OFFSET))(expression);
		}

		static ::System::Void AssertTrue_1(::System::Boolean expression, ::System::String* message, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSERT_ASSERTTRUE_1_OFFSET))(expression, message, args);
		}

		static ::System::Void AssertStringNotNull(::System::String* str, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSERT_ASSERTSTRINGNOTNULL_OFFSET))(str, msg);
		}

		static ::System::Void AssertInRange(::System::Int32 value, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSERT_ASSERTINRANGE_OFFSET))(value, min, max);
		}

		static ::System::Void AssertInRange_1(::System::Single value, ::System::Single min, ::System::Single max)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ASSERT_ASSERTINRANGE_1_OFFSET))(value, min, max);
		}

		static ::System::Void AssertAtLeast(::System::Int32 value, ::System::Int32 min)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSERT_ASSERTATLEAST_OFFSET))(value, min);
		}

		static ::System::Void AssertAtMost(::System::Int32 value, ::System::Int32 max)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSERT_ASSERTATMOST_OFFSET))(value, max);
		}

		static ::System::Void AssertNotNull(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSERT_ASSERTNOTNULL_OFFSET))(obj);
		}

		static ::System::Void AssertNotNull_1(::System::Object* obj, ::System::String* pWrongPut)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSERT_ASSERTNOTNULL_1_OFFSET))(obj, pWrongPut);
		}

		static ::System::Void AssertEquals(::System::Object* value, ::System::Object* expectation)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSERT_ASSERTEQUALS_OFFSET))(value, expectation);
		}
	};
}
