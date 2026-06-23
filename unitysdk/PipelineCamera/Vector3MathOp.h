#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_VECTOR3MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR3__FROMTO_OFFSET UNITYSDK_OFFSET(0x1E605CA0)
#define PIPELINECAMERA_VECTOR3MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR3__LINEARCOMBINE_1_OFFSET UNITYSDK_OFFSET(0x1E6059E0)
#define PIPELINECAMERA_VECTOR3MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR3__LINEARCOMBINE_2_OFFSET UNITYSDK_OFFSET(0x1E605B10)
#define PIPELINECAMERA_VECTOR3MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR3__LINEARCOMBINE_OFFSET UNITYSDK_OFFSET(0x1E605910)
#define PIPELINECAMERA_VECTOR3MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR3__MULTIPLYFLOATADD_OFFSET UNITYSDK_OFFSET(0x1E605860)
#define PIPELINECAMERA_VECTOR3MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR3__MULTIPLYFLOAT_OFFSET UNITYSDK_OFFSET(0x1E6057C0)
#define PIPELINECAMERA_VECTOR3MATHOP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E605D40)
#define PIPELINECAMERA_VECTOR3MATHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E605D30)

namespace PipelineCamera
{
	inline static constexpr unsigned int Vector3MathOp_TypeDefinitionIndex = 37703;

	class Vector3MathOp : public ::System::Object
	{
	public:
		static ::PipelineCamera::Vector3MathOp** StaticGet_Instance()
		{
			return (::PipelineCamera::Vector3MathOp**)Il2CppClass::FromTypeDefinitionIndex(Vector3MathOp_TypeDefinitionIndex)->GetStaticField(0x28D40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR3MATHOP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR3MATHOP__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 PipelineCamera_IMathOperation_UnityEngine_Vector3__MultiplyFloat(::UnityEngine::Vector3& value, ::System::Single floatValue)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR3MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR3__MULTIPLYFLOAT_OFFSET))(this, value, floatValue);
		}

		::UnityEngine::Vector3 PipelineCamera_IMathOperation_UnityEngine_Vector3__MultiplyFloatAdd(::UnityEngine::Vector3& value, ::System::Single floatValue, ::UnityEngine::Vector3& valueAdd)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR3MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR3__MULTIPLYFLOATADD_OFFSET))(this, value, floatValue, valueAdd);
		}

		::UnityEngine::Vector3 PipelineCamera_IMathOperation_UnityEngine_Vector3__LinearCombine(::System::Single a, ::UnityEngine::Vector3& valueA, ::System::Single b, ::UnityEngine::Vector3& valueB)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR3MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR3__LINEARCOMBINE_OFFSET))(this, a, valueA, b, valueB);
		}

		::UnityEngine::Vector3 PipelineCamera_IMathOperation_UnityEngine_Vector3__LinearCombine_1(::System::Single a, ::UnityEngine::Vector3& valueA, ::System::Single b, ::UnityEngine::Vector3& valueB, ::System::Single c, ::UnityEngine::Vector3& valueC)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR3MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR3__LINEARCOMBINE_1_OFFSET))(this, a, valueA, b, valueB, c, valueC);
		}

		::UnityEngine::Vector3 PipelineCamera_IMathOperation_UnityEngine_Vector3__LinearCombine_2(::System::Single a, ::UnityEngine::Vector3& valueA, ::System::Single b, ::UnityEngine::Vector3& valueB, ::System::Single c, ::UnityEngine::Vector3& valueC, ::System::Single d, ::UnityEngine::Vector3& valueD)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR3MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR3__LINEARCOMBINE_2_OFFSET))(this, a, valueA, b, valueB, c, valueC, d, valueD);
		}

		::UnityEngine::Vector3 PipelineCamera_IMathOperation_UnityEngine_Vector3__FromTo(::UnityEngine::Vector3& from, ::UnityEngine::Vector3& to)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VECTOR3MATHOP_PIPELINECAMERA_IMATHOPERATION_UNITYENGINE_VECTOR3__FROMTO_OFFSET))(this, from, to);
		}
	};
}
