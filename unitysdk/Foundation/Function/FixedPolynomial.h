#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Function/FixedPolynomial___coefficients_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_ADD_OFFSET UNITYSDK_OFFSET(0xA61200)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_BEZIER_OFFSET UNITYSDK_OFFSET(0x1E357EB0)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1E356220)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1E3563B0)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_CREATE_3_OFFSET UNITYSDK_OFFSET(0x1E356550)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1E3560A0)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_DERIVATIVE_OFFSET UNITYSDK_OFFSET(0xA61160)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA610D0)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA61060)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x7A2320)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_HERMITE_OFFSET UNITYSDK_OFFSET(0x1E357540)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_INTEGRAL_1_OFFSET UNITYSDK_OFFSET(0xA611A0)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_INTEGRAL_OFFSET UNITYSDK_OFFSET(0xA61180)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0xA61220)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA611E0)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1E3573F0)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1E357490)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x1E3574F0)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E357440)
#define FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL__CTOR_OFFSET UNITYSDK_OFFSET(0xA61030)

namespace Foundation::Function
{
	inline static constexpr unsigned int FixedPolynomial_TypeDefinitionIndex = 8556;

	struct alignas(4) FixedPolynomial
	{
		::System::Int32 _order; // 0x10
		::Foundation::Function::FixedPolynomial___coefficients_e__FixedBuffer _coefficients; // 0x14

		/*
		::System::Void _ctor(::System::ReadOnlySpan_1<::System::Single> coefficients)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Single>))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL__CTOR_OFFSET))(this, coefficients);
		}
		*/

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_GET_ITEM_OFFSET))(this, index);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_GET_LENGTH_OFFSET))(this);
		}

		static ::Foundation::Function::FixedPolynomial Create(::System::Single a)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_CREATE_OFFSET))(a);
		}

		static ::Foundation::Function::FixedPolynomial Create_1(::System::Single a, ::System::Single b)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_CREATE_1_OFFSET))(a, b);
		}

		static ::Foundation::Function::FixedPolynomial Create_2(::System::Single a, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_CREATE_2_OFFSET))(a, b, c, d);
		}

		static ::Foundation::Function::FixedPolynomial Create_3(::System::Single a, ::System::Single b, ::System::Single c, ::System::Single d, ::System::Single e, ::System::Single f)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_CREATE_3_OFFSET))(a, b, c, d, e, f);
		}

		::System::Single Evaluate(::System::Single x)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_EVALUATE_OFFSET))(this, x);
		}

		::Foundation::Function::FixedPolynomial Derivative()
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_DERIVATIVE_OFFSET))(this);
		}

		::Foundation::Function::FixedPolynomial Integral(::System::Single constant)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_INTEGRAL_OFFSET))(this, constant);
		}

		::Foundation::Function::FixedPolynomial Integral_1()
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_INTEGRAL_1_OFFSET))(this);
		}

		::Foundation::Function::FixedPolynomial Multiply(::System::Single value)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_MULTIPLY_OFFSET))(this, value);
		}

		::Foundation::Function::FixedPolynomial Add(::Foundation::Function::FixedPolynomial& other)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::PVOID, ::Foundation::Function::FixedPolynomial&))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_ADD_OFFSET))(this, other);
		}

		::Foundation::Function::FixedPolynomial Multiply_1(::Foundation::Function::FixedPolynomial& other)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::PVOID, ::Foundation::Function::FixedPolynomial&))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_MULTIPLY_1_OFFSET))(this, other);
		}

		static ::Foundation::Function::FixedPolynomial op_Addition(::Foundation::Function::FixedPolynomial& lhs, ::Foundation::Function::FixedPolynomial& rhs)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::Foundation::Function::FixedPolynomial&, ::Foundation::Function::FixedPolynomial&))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_OP_ADDITION_OFFSET))(lhs, rhs);
		}

		static ::Foundation::Function::FixedPolynomial op_Multiply(::Foundation::Function::FixedPolynomial& lhs, ::System::Single rhs)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::Foundation::Function::FixedPolynomial&, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_OP_MULTIPLY_OFFSET))(lhs, rhs);
		}

		static ::Foundation::Function::FixedPolynomial op_Multiply_1(::System::Single lhs, ::Foundation::Function::FixedPolynomial& rhs)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::System::Single, ::Foundation::Function::FixedPolynomial&))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_OP_MULTIPLY_1_OFFSET))(lhs, rhs);
		}

		static ::Foundation::Function::FixedPolynomial op_Multiply_2(::Foundation::Function::FixedPolynomial& lhs, ::Foundation::Function::FixedPolynomial& rhs)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::Foundation::Function::FixedPolynomial&, ::Foundation::Function::FixedPolynomial&))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_OP_MULTIPLY_2_OFFSET))(lhs, rhs);
		}

		static ::Foundation::Function::FixedPolynomial Hermite(::System::Single p0, ::System::Single m0, ::System::Single m1, ::System::Single p1)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_HERMITE_OFFSET))(p0, m0, m1, p1);
		}

		static ::Foundation::Function::FixedPolynomial Bezier(::System::Single p0, ::System::Single p1, ::System::Single p2, ::System::Single p3)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_FIXEDPOLYNOMIAL_BEZIER_OFFSET))(p0, p1, p2, p3);
		}
	};
}
