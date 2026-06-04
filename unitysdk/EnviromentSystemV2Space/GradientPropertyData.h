#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace UnityEngine { class Gradient; }

#define ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA_METHOD_3_59779CE445A59A8E_OFFSET UNITYSDK_OFFSET(0x135EDB80)
#define ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA_METHOD_3_87C0E26F1D61379E_1_OFFSET UNITYSDK_OFFSET(0x135EDB10)
#define ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA_METHOD_3_87C0E26F1D61379E_OFFSET UNITYSDK_OFFSET(0x135ED9C0)
#define ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA_METHOD_3_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0x135EDA30)
#define ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x135EDAF0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int GradientPropertyData_TypeDefinitionIndex = 46574;

	class GradientPropertyData : public ::EnviromentSystemV2Space::PropertyData_1<::UnityEngine::Gradient*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_87C0E26F1D61379E(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA_METHOD_3_87C0E26F1D61379E_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_E4886687508BA48F()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA_METHOD_3_E4886687508BA48F_OFFSET))(this);
		}

		::System::Boolean Method_3_87C0E26F1D61379E_1(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA_METHOD_3_87C0E26F1D61379E_1_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_59779CE445A59A8E()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA_METHOD_3_59779CE445A59A8E_OFFSET))(this);
		}
	};
}
