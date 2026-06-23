#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_ASSERT_ASSERTATLEAST_OFFSET UNITYSDK_OFFSET(0x1E4F0470)
#define FOUNDATION_ASSERT_ASSERTATMOST_OFFSET UNITYSDK_OFFSET(0x1E4F0630)
#define FOUNDATION_ASSERT_ASSERTEQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F08E0)
#define FOUNDATION_ASSERT_ASSERTINRANGE_1_OFFSET UNITYSDK_OFFSET(0x1E4F01D0)
#define FOUNDATION_ASSERT_ASSERTINRANGE_OFFSET UNITYSDK_OFFSET(0x1E4EFF70)
#define FOUNDATION_ASSERT_ASSERTNOTNULL_1_OFFSET UNITYSDK_OFFSET(0x1E4F0830)
#define FOUNDATION_ASSERT_ASSERTNOTNULL_OFFSET UNITYSDK_OFFSET(0x1E4F07F0)
#define FOUNDATION_ASSERT_ASSERTSTRINGNOTNULL_OFFSET UNITYSDK_OFFSET(0x1E4EFED0)
#define FOUNDATION_ASSERT_ASSERTTRUE_1_OFFSET UNITYSDK_OFFSET(0x1E4EFE60)
#define FOUNDATION_ASSERT_ASSERTTRUE_OFFSET UNITYSDK_OFFSET(0x1E4EFDE0)
#define FOUNDATION_ASSERT_FAIL_1_OFFSET UNITYSDK_OFFSET(0x1E4EFD80)
#define FOUNDATION_ASSERT_FAIL_OFFSET UNITYSDK_OFFSET(0x1E4EFC60)

namespace Foundation
{
	inline static constexpr unsigned int Assert_TypeDefinitionIndex = 8287;

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
