#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/CustomCurvePropertyData.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_METHOD_3_35F88F8F0390DB9A_OFFSET UNITYSDK_OFFSET(0x17C3DBF0)
#define ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_METHOD_3_87C0E26F1D61379E_OFFSET UNITYSDK_OFFSET(0x17C3DB80)
#define ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17C3DDA0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int TextCurvePropertyData_TypeDefinitionIndex = 47544;

	class TextCurvePropertyData : public ::EnviromentSystemV2Space::CustomCurvePropertyData
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* times; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* paths; // 0x38
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_87C0E26F1D61379E(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_METHOD_3_87C0E26F1D61379E_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_35F88F8F0390DB9A()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_METHOD_3_35F88F8F0390DB9A_OFFSET))(this);
		}
	};
}
