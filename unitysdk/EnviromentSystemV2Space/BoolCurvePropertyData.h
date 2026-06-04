#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyDataBase.h"

class Class_1_EAF7984A8FAD6BE4;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA_METHOD_2_4D387B8BA1C12799_OFFSET UNITYSDK_OFFSET(0x135CFED0)
#define ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA_METHOD_2_87C0E26F1D61379E_OFFSET UNITYSDK_OFFSET(0x135CFE60)
#define ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA_METHOD_2_E3DABABAFC459BA9_OFFSET UNITYSDK_OFFSET(0x135D0020)
#define ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x135D00C0)
#define ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x135D0000)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int BoolCurvePropertyData_TypeDefinitionIndex = 46581;

	class BoolCurvePropertyData : public ::EnviromentSystemV2Space::PropertyDataBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* times; // 0x28
		::System::Collections::Generic::List_1<::System::Boolean>* paths; // 0x30
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_2_87C0E26F1D61379E(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA_METHOD_2_87C0E26F1D61379E_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_2_4D387B8BA1C12799()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA_METHOD_2_4D387B8BA1C12799_OFFSET))(this);
		}

		::System::Boolean Method_2_E3DABABAFC459BA9(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA_METHOD_2_E3DABABAFC459BA9_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_2_F8B73ECE7F883AC1()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
		}
	};
}
