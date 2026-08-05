#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGReferenceMode.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/Modules/ScaleMode.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GETADVANCEDSCALE_OFFSET UNITYSDK_OFFSET(0x1EE68AB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GETRELATIVEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1EE68A10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GETSCALE_1_OFFSET UNITYSDK_OFFSET(0x1EE68860)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GETSCALE_2_OFFSET UNITYSDK_OFFSET(0x1EE68700)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GETSCALE_OFFSET UNITYSDK_OFFSET(0x1EE686A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GETSIMPLESCALE_OFFSET UNITYSDK_OFFSET(0x1EE68B80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEMODE_OFFSET UNITYSDK_OFFSET(0x1EE68240)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEMULTIPLIERX_OFFSET UNITYSDK_OFFSET(0x1EE683D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEMULTIPLIERY_OFFSET UNITYSDK_OFFSET(0x1EE68470)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1EE68330)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1EE68290)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEUNIFORM_OFFSET UNITYSDK_OFFSET(0x1EE682E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1EE68380)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1EE68420)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_RESET_OFFSET UNITYSDK_OFFSET(0x1EE684C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEMODE_OFFSET UNITYSDK_OFFSET(0x1EE68250)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEMULTIPLIERX_OFFSET UNITYSDK_OFFSET(0x1EE683E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEMULTIPLIERY_OFFSET UNITYSDK_OFFSET(0x1EE68480)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1EE68340)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1EE682A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEUNIFORM_OFFSET UNITYSDK_OFFSET(0x1EE682F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1EE68390)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1EE68430)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE68BA0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int ScalingModule_TypeDefinitionIndex = 39638;

	class ScalingModule : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::Modules::ScaleMode m_ScaleMode; // 0xB8
		::FluffyUnderware::Curvy::Generator::CGReferenceMode m_ScaleReference; // 0xBC
		::System::Single m_ScaleOffset; // 0xC0
		::System::Boolean m_ScaleUniform; // 0xC4
		::System::Single m_ScaleX; // 0xC8
		::UnityEngine::AnimationCurve* m_ScaleCurveX; // 0xD0
		::System::Single m_ScaleY; // 0xD8
		::UnityEngine::AnimationCurve* m_ScaleCurveY; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::Modules::ScaleMode get_ScaleMode()
		{
			return ((::FluffyUnderware::Curvy::Generator::Modules::ScaleMode(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEMODE_OFFSET))(this);
		}

		::System::Void set_ScaleMode(::FluffyUnderware::Curvy::Generator::Modules::ScaleMode value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::Modules::ScaleMode))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEMODE_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::CGReferenceMode get_ScaleReference()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGReferenceMode(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEREFERENCE_OFFSET))(this);
		}

		::System::Void set_ScaleReference(::FluffyUnderware::Curvy::Generator::CGReferenceMode value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGReferenceMode))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEREFERENCE_OFFSET))(this, value);
		}

		::System::Boolean get_ScaleUniform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEUNIFORM_OFFSET))(this);
		}

		::System::Void set_ScaleUniform(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEUNIFORM_OFFSET))(this, value);
		}

		::System::Single get_ScaleOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEOFFSET_OFFSET))(this);
		}

		::System::Void set_ScaleOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEOFFSET_OFFSET))(this, value);
		}

		::System::Single get_ScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEX_OFFSET))(this);
		}

		::System::Void set_ScaleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEX_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* get_ScaleMultiplierX()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEMULTIPLIERX_OFFSET))(this);
		}

		::System::Void set_ScaleMultiplierX(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEMULTIPLIERX_OFFSET))(this, value);
		}

		::System::Single get_ScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEY_OFFSET))(this);
		}

		::System::Void set_ScaleY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEY_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* get_ScaleMultiplierY()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GET_SCALEMULTIPLIERY_OFFSET))(this);
		}

		::System::Void set_ScaleMultiplierY(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_SET_SCALEMULTIPLIERY_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_RESET_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetScale(::System::Single relativeDistance)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GETSCALE_OFFSET))(this, relativeDistance);
		}

		::UnityEngine::Vector2 GetScale_1(::System::Int32 sampleIndex, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> relativeDistances, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> sourceRelativeDistances)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GETSCALE_1_OFFSET))(this, sampleIndex, relativeDistances, sourceRelativeDistances);
		}

		static ::UnityEngine::Vector2 GetScale_2(::System::Single relativeDistance, ::FluffyUnderware::Curvy::Generator::Modules::ScaleMode mode, ::System::Single offset, ::System::Boolean isUniform, ::System::Single scaleX, ::UnityEngine::AnimationCurve* scaleMultiplierX, ::System::Single scaleY, ::UnityEngine::AnimationCurve* scaleMultiplierY)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::FluffyUnderware::Curvy::Generator::Modules::ScaleMode, ::System::Single, ::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GETSCALE_2_OFFSET))(relativeDistance, mode, offset, isUniform, scaleX, scaleMultiplierX, scaleY, scaleMultiplierY);
		}

		static ::System::Single GetRelativeDistance(::System::Int32 sampleIndex, ::FluffyUnderware::Curvy::Generator::CGReferenceMode cgReferenceMode, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> relativeDistances, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> sourceRelativeDistances)
		{
			return ((::System::Single(*)(::System::Int32, ::FluffyUnderware::Curvy::Generator::CGReferenceMode, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GETRELATIVEDISTANCE_OFFSET))(sampleIndex, cgReferenceMode, relativeDistances, sourceRelativeDistances);
		}

		static ::UnityEngine::Vector2 GetAdvancedScale(::System::Single relativeDistance, ::System::Single scaleOffset, ::System::Boolean isUniform, ::System::Single scaleX, ::UnityEngine::AnimationCurve* scaleMultiplierX, ::System::Single scaleY, ::UnityEngine::AnimationCurve* scaleMultiplierY)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GETADVANCEDSCALE_OFFSET))(relativeDistance, scaleOffset, isUniform, scaleX, scaleMultiplierX, scaleY, scaleMultiplierY);
		}

		static ::UnityEngine::Vector2 GetSimpleScale(::System::Boolean isUniform, ::System::Single scaleX, ::System::Single scaleY)
		{
			return ((::UnityEngine::Vector2(*)(::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_SCALINGMODULE_GETSIMPLESCALE_OFFSET))(isUniform, scaleX, scaleY);
		}
	};
}
