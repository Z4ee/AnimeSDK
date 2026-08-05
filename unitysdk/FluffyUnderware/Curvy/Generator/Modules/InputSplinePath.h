#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/SplineInputModuleBase.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy::Generator { class CGData; }
namespace FluffyUnderware::Curvy::Generator { class CGDataRequestParameter; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH_GET_INPUTSPLINE_OFFSET UNITYSDK_OFFSET(0x1F28C790)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH_GET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1F28C3F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH_GET_SUPPORTSIPE_OFFSET UNITYSDK_OFFSET(0x1F28C4B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH_ONSLOTDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x1F28C4C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH_ONTEMPLATECREATED_OFFSET UNITYSDK_OFFSET(0x1F28C640)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH_SET_INPUTSPLINE_OFFSET UNITYSDK_OFFSET(0x1F28C7A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH_SET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1F28C400)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F28C7B0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int InputSplinePath_TypeDefinitionIndex = 39602;

	class InputSplinePath : public ::FluffyUnderware::Curvy::Generator::SplineInputModuleBase
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* Path; // 0xD0
		::FluffyUnderware::Curvy::CurvySpline* m_Spline; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySpline* get_Spline()
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH_GET_SPLINE_OFFSET))(this);
		}

		::System::Void set_Spline(::FluffyUnderware::Curvy::CurvySpline* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH_SET_SPLINE_OFFSET))(this, value);
		}

		::System::Boolean get_SupportsIPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH_GET_SUPPORTSIPE_OFFSET))(this);
		}

		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>* OnSlotDataRequest(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* requestedBy, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* requestedSlot, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>* requests)
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH_ONSLOTDATAREQUEST_OFFSET))(this, requestedBy, requestedSlot, requests);
		}

		::System::Void OnTemplateCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH_ONTEMPLATECREATED_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySpline* get_InputSpline()
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH_GET_INPUTSPLINE_OFFSET))(this);
		}

		::System::Void set_InputSpline(::FluffyUnderware::Curvy::CurvySpline* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPLINEPATH_SET_INPUTSPLINE_OFFSET))(this, value);
		}
	};
}
