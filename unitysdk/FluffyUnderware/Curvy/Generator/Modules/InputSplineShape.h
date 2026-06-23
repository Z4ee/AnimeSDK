#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/SplineInputModuleBase.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy::Generator { class CGData; }
namespace FluffyUnderware::Curvy::Generator { class CGDataRequestParameter; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_GET_FREEFORM_OFFSET UNITYSDK_OFFSET(0x1E672B10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_GET_INPUTSPLINE_OFFSET UNITYSDK_OFFSET(0x1E673420)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1E672770)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_GET_SUPPORTSIPE_OFFSET UNITYSDK_OFFSET(0x1E672B00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_ONSLOTDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x1E673170)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_ONSPLINEASSIGNED_OFFSET UNITYSDK_OFFSET(0x1E672990)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_REMOVEMANAGEDSHAPE_OFFSET UNITYSDK_OFFSET(0x1E6732C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_SET_FREEFORM_OFFSET UNITYSDK_OFFSET(0x1E672DA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_SET_INPUTSPLINE_OFFSET UNITYSDK_OFFSET(0x1E673430)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1E672780)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E673440)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int InputSplineShape_TypeDefinitionIndex = 39001;

	class InputSplineShape : public ::FluffyUnderware::Curvy::Generator::SplineInputModuleBase
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutShape; // 0xD0
		::FluffyUnderware::Curvy::CurvySpline* m_Shape; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySpline* get_Shape()
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_Shape(::FluffyUnderware::Curvy::CurvySpline* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_SET_SHAPE_OFFSET))(this, value);
		}

		::System::Boolean get_SupportsIPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_GET_SUPPORTSIPE_OFFSET))(this);
		}

		::System::Boolean get_FreeForm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_GET_FREEFORM_OFFSET))(this);
		}

		::System::Void set_FreeForm(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_SET_FREEFORM_OFFSET))(this, value);
		}

		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>* OnSlotDataRequest(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* requestedBy, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* requestedSlot, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>* requests)
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_ONSLOTDATAREQUEST_OFFSET))(this, requestedBy, requestedSlot, requests);
		}

		::System::Void RemoveManagedShape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_REMOVEMANAGEDSHAPE_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySpline* get_InputSpline()
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_GET_INPUTSPLINE_OFFSET))(this);
		}

		::System::Void set_InputSpline(::FluffyUnderware::Curvy::CurvySpline* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_SET_INPUTSPLINE_OFFSET))(this, value);
		}

		::System::Void OnSplineAssigned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINESHAPE_ONSPLINEASSIGNED_OFFSET))(this);
		}
	};
}
