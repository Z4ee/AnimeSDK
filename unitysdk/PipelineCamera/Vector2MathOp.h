#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define PIPELINECAMERA_VECTOR2MATHOP_FROMTO_OFFSET UNITYSDK_OFFSET(0x1C2B7D90)
#define PIPELINECAMERA_VECTOR2MATHOP_LINEARCOMBINE_1_OFFSET UNITYSDK_OFFSET(0x1C2B7EB0)
#define PIPELINECAMERA_VECTOR2MATHOP_LINEARCOMBINE_2_OFFSET UNITYSDK_OFFSET(0x1C2B7FA0)
#define PIPELINECAMERA_VECTOR2MATHOP_LINEARCOMBINE_OFFSET UNITYSDK_OFFSET(0x1C2B7E00)
#define PIPELINECAMERA_VECTOR2MATHOP_MULTIPLYFLOATADD_OFFSET UNITYSDK_OFFSET(0x1C2B7D10)
#define PIPELINECAMERA_VECTOR2MATHOP_MULTIPLYFLOAT_OFFSET UNITYSDK_OFFSET(0x1C2B7C90)
#define PIPELINECAMERA_VECTOR2MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR2__FROMTO_OFFSET UNITYSDK_OFFSET(0x1C2B85D0)
#define PIPELINECAMERA_VECTOR2MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR2__LINEARCOMBINE_1_OFFSET UNITYSDK_OFFSET(0x1C2B8350)
#define PIPELINECAMERA_VECTOR2MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR2__LINEARCOMBINE_2_OFFSET UNITYSDK_OFFSET(0x1C2B8460)
#define PIPELINECAMERA_VECTOR2MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR2__LINEARCOMBINE_OFFSET UNITYSDK_OFFSET(0x1C2B8280)
#define PIPELINECAMERA_VECTOR2MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR2__MULTIPLYFLOATADD_OFFSET UNITYSDK_OFFSET(0x1C2B81E0)
#define PIPELINECAMERA_VECTOR2MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR2__MULTIPLYFLOAT_OFFSET UNITYSDK_OFFSET(0x1C2B8140)
#define PIPELINECAMERA_VECTOR2MATHOP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2B8100)
#define PIPELINECAMERA_VECTOR2MATHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B80F0)

namespace PipelineCamera
{
	inline static constexpr unsigned int Vector2MathOp_TypeDefinitionIndex = 36094;

	class Vector2MathOp : public ::System::Object
	{
	public:
		static ::PipelineCamera::Vector2MathOp** StaticGet_Instance()
		{
			return (::PipelineCamera::Vector2MathOp**)Il2CppClass::FromTypeDefinitionIndex(Vector2MathOp_TypeDefinitionIndex)->GetStaticField(0x270B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR2MATHOP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR2MATHOP__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector2 MultiplyFloat(::UnityEngine::Vector2& value, ::System::Single floatValue)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR2MATHOP_MULTIPLYFLOAT_OFFSET))(this, value, floatValue);
		}

		::UnityEngine::Vector2 MultiplyFloatAdd(::UnityEngine::Vector2& value, ::System::Single floatValue, ::UnityEngine::Vector2& valueAdd)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR2MATHOP_MULTIPLYFLOATADD_OFFSET))(this, value, floatValue, valueAdd);
		}

		::UnityEngine::Vector2 FromTo(::UnityEngine::Vector2& from, ::UnityEngine::Vector2& to)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR2MATHOP_FROMTO_OFFSET))(this, from, to);
		}

		::UnityEngine::Vector2 LinearCombine(::System::Single a, ::UnityEngine::Vector2& valueA, ::System::Single b, ::UnityEngine::Vector2& valueB)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR2MATHOP_LINEARCOMBINE_OFFSET))(this, a, valueA, b, valueB);
		}

		::UnityEngine::Vector2 LinearCombine_1(::System::Single a, ::UnityEngine::Vector2& valueA, ::System::Single b, ::UnityEngine::Vector2& valueB, ::System::Single c, ::UnityEngine::Vector2& valueC)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR2MATHOP_LINEARCOMBINE_1_OFFSET))(this, a, valueA, b, valueB, c, valueC);
		}

		::UnityEngine::Vector2 LinearCombine_2(::System::Single a, ::UnityEngine::Vector2& valueA, ::System::Single b, ::UnityEngine::Vector2& valueB, ::System::Single c, ::UnityEngine::Vector2& valueC, ::System::Single d, ::UnityEngine::Vector2& valueD)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR2MATHOP_LINEARCOMBINE_2_OFFSET))(this, a, valueA, b, valueB, c, valueC, d, valueD);
		}

		::UnityEngine::Vector2 PipelineCamera_IMathOperation_UnityEngine_Vector2__MultiplyFloat(::UnityEngine::Vector2& value, ::System::Single floatValue)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR2MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR2__MULTIPLYFLOAT_OFFSET))(this, value, floatValue);
		}

		::UnityEngine::Vector2 PipelineCamera_IMathOperation_UnityEngine_Vector2__MultiplyFloatAdd(::UnityEngine::Vector2& value, ::System::Single floatValue, ::UnityEngine::Vector2& valueAdd)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR2MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR2__MULTIPLYFLOATADD_OFFSET))(this, value, floatValue, valueAdd);
		}

		::UnityEngine::Vector2 PipelineCamera_IMathOperation_UnityEngine_Vector2__LinearCombine(::System::Single a, ::UnityEngine::Vector2& valueA, ::System::Single b, ::UnityEngine::Vector2& valueB)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR2MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR2__LINEARCOMBINE_OFFSET))(this, a, valueA, b, valueB);
		}

		::UnityEngine::Vector2 PipelineCamera_IMathOperation_UnityEngine_Vector2__LinearCombine_1(::System::Single a, ::UnityEngine::Vector2& valueA, ::System::Single b, ::UnityEngine::Vector2& valueB, ::System::Single c, ::UnityEngine::Vector2& valueC)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR2MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR2__LINEARCOMBINE_1_OFFSET))(this, a, valueA, b, valueB, c, valueC);
		}

		::UnityEngine::Vector2 PipelineCamera_IMathOperation_UnityEngine_Vector2__LinearCombine_2(::System::Single a, ::UnityEngine::Vector2& valueA, ::System::Single b, ::UnityEngine::Vector2& valueB, ::System::Single c, ::UnityEngine::Vector2& valueC, ::System::Single d, ::UnityEngine::Vector2& valueD)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR2MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR2__LINEARCOMBINE_2_OFFSET))(this, a, valueA, b, valueB, c, valueC, d, valueD);
		}

		::UnityEngine::Vector2 PipelineCamera_IMathOperation_UnityEngine_Vector2__FromTo(::UnityEngine::Vector2& from, ::UnityEngine::Vector2& to)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR2MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR2__FROMTO_OFFSET))(this, from, to);
		}
	};
}
