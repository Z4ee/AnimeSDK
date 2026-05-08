#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIPELINECAMERA_FLOATMATHOP_FROMTO_OFFSET UNITYSDK_OFFSET(0x1BEAF3D0)
#define PIPELINECAMERA_FLOATMATHOP_LINEARCOMBINE_1_OFFSET UNITYSDK_OFFSET(0x1BEAF4C0)
#define PIPELINECAMERA_FLOATMATHOP_LINEARCOMBINE_2_OFFSET UNITYSDK_OFFSET(0x1BEAF580)
#define PIPELINECAMERA_FLOATMATHOP_LINEARCOMBINE_OFFSET UNITYSDK_OFFSET(0x1BEAF430)
#define PIPELINECAMERA_FLOATMATHOP_MULTIPLYFLOATADD_OFFSET UNITYSDK_OFFSET(0x1BEAF360)
#define PIPELINECAMERA_FLOATMATHOP_MULTIPLYFLOAT_OFFSET UNITYSDK_OFFSET(0x1BEAF2F0)
#define PIPELINECAMERA_FLOATMATHOP_PIPELINECAMERA_IMATHOPERATION_SYSTEM_SINGLE__FROMTO_OFFSET UNITYSDK_OFFSET(0x1BEAFA80)
#define PIPELINECAMERA_FLOATMATHOP_PIPELINECAMERA_IMATHOPERATION_SYSTEM_SINGLE__LINEARCOMBINE_1_OFFSET UNITYSDK_OFFSET(0x1BEAF880)
#define PIPELINECAMERA_FLOATMATHOP_PIPELINECAMERA_IMATHOPERATION_SYSTEM_SINGLE__LINEARCOMBINE_2_OFFSET UNITYSDK_OFFSET(0x1BEAF960)
#define PIPELINECAMERA_FLOATMATHOP_PIPELINECAMERA_IMATHOPERATION_SYSTEM_SINGLE__LINEARCOMBINE_OFFSET UNITYSDK_OFFSET(0x1BEAF7E0)
#define PIPELINECAMERA_FLOATMATHOP_PIPELINECAMERA_IMATHOPERATION_SYSTEM_SINGLE__MULTIPLYFLOATADD_OFFSET UNITYSDK_OFFSET(0x1BEAF750)
#define PIPELINECAMERA_FLOATMATHOP_PIPELINECAMERA_IMATHOPERATION_SYSTEM_SINGLE__MULTIPLYFLOAT_OFFSET UNITYSDK_OFFSET(0x1BEAF6D0)
#define PIPELINECAMERA_FLOATMATHOP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEAF690)
#define PIPELINECAMERA_FLOATMATHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEAF680)

namespace PipelineCamera
{
	inline static constexpr unsigned int FloatMathOp_TypeDefinitionIndex = 36093;

	class FloatMathOp : public ::System::Object
	{
	public:
		static ::PipelineCamera::FloatMathOp** StaticGet_Instance()
		{
			return (::PipelineCamera::FloatMathOp**)Il2CppClass::FromTypeDefinitionIndex(FloatMathOp_TypeDefinitionIndex)->GetStaticField(0x27000);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FLOATMATHOP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_FLOATMATHOP__CCTOR_OFFSET))();
		}

		::System::Single MultiplyFloat(::System::Single& value, ::System::Single floatValue)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FLOATMATHOP_MULTIPLYFLOAT_OFFSET))(this, value, floatValue);
		}

		::System::Single MultiplyFloatAdd(::System::Single& value, ::System::Single floatValue, ::System::Single& valueAdd)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single&, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FLOATMATHOP_MULTIPLYFLOATADD_OFFSET))(this, value, floatValue, valueAdd);
		}

		::System::Single FromTo(::System::Single& from, ::System::Single& to)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FLOATMATHOP_FROMTO_OFFSET))(this, from, to);
		}

		::System::Single LinearCombine(::System::Single a, ::System::Single& valueA, ::System::Single b, ::System::Single& valueB)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FLOATMATHOP_LINEARCOMBINE_OFFSET))(this, a, valueA, b, valueB);
		}

		::System::Single LinearCombine_1(::System::Single a, ::System::Single& valueA, ::System::Single b, ::System::Single& valueB, ::System::Single c, ::System::Single& valueC)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single, ::System::Single&, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FLOATMATHOP_LINEARCOMBINE_1_OFFSET))(this, a, valueA, b, valueB, c, valueC);
		}

		::System::Single LinearCombine_2(::System::Single a, ::System::Single& valueA, ::System::Single b, ::System::Single& valueB, ::System::Single c, ::System::Single& valueC, ::System::Single d, ::System::Single& valueD)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single, ::System::Single&, ::System::Single, ::System::Single&, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FLOATMATHOP_LINEARCOMBINE_2_OFFSET))(this, a, valueA, b, valueB, c, valueC, d, valueD);
		}

		::System::Single PipelineCamera_IMathOperation_System_Single__MultiplyFloat(::System::Single& value, ::System::Single floatValue)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FLOATMATHOP_PIPELINECAMERA_IMATHOPERATION_SYSTEM_SINGLE__MULTIPLYFLOAT_OFFSET))(this, value, floatValue);
		}

		::System::Single PipelineCamera_IMathOperation_System_Single__MultiplyFloatAdd(::System::Single& value, ::System::Single floatValue, ::System::Single& valueAdd)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single&, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FLOATMATHOP_PIPELINECAMERA_IMATHOPERATION_SYSTEM_SINGLE__MULTIPLYFLOATADD_OFFSET))(this, value, floatValue, valueAdd);
		}

		::System::Single PipelineCamera_IMathOperation_System_Single__LinearCombine(::System::Single a, ::System::Single& valueA, ::System::Single b, ::System::Single& valueB)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FLOATMATHOP_PIPELINECAMERA_IMATHOPERATION_SYSTEM_SINGLE__LINEARCOMBINE_OFFSET))(this, a, valueA, b, valueB);
		}

		::System::Single PipelineCamera_IMathOperation_System_Single__LinearCombine_1(::System::Single a, ::System::Single& valueA, ::System::Single b, ::System::Single& valueB, ::System::Single c, ::System::Single& valueC)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single, ::System::Single&, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FLOATMATHOP_PIPELINECAMERA_IMATHOPERATION_SYSTEM_SINGLE__LINEARCOMBINE_1_OFFSET))(this, a, valueA, b, valueB, c, valueC);
		}

		::System::Single PipelineCamera_IMathOperation_System_Single__LinearCombine_2(::System::Single a, ::System::Single& valueA, ::System::Single b, ::System::Single& valueB, ::System::Single c, ::System::Single& valueC, ::System::Single d, ::System::Single& valueD)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single, ::System::Single&, ::System::Single, ::System::Single&, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FLOATMATHOP_PIPELINECAMERA_IMATHOPERATION_SYSTEM_SINGLE__LINEARCOMBINE_2_OFFSET))(this, a, valueA, b, valueB, c, valueC, d, valueD);
		}

		::System::Single PipelineCamera_IMathOperation_System_Single__FromTo(::System::Single& from, ::System::Single& to)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FLOATMATHOP_PIPELINECAMERA_IMATHOPERATION_SYSTEM_SINGLE__FROMTO_OFFSET))(this, from, to);
		}
	};
}
