#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyDataBase.h"

class Class_1_EAF7984A8FAD6BE4;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA_METHOD_2_526FB29047B22B50_OFFSET UNITYSDK_OFFSET(0xFBC7040)
#define ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA_METHOD_2_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0xFBC71F0)
#define ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA_METHOD_2_87C0E26F1D61379E_OFFSET UNITYSDK_OFFSET(0xFBC6FD0)
#define ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA_METHOD_2_DACDDC9624F9624F_OFFSET UNITYSDK_OFFSET(0xFBC7180)
#define ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFBC7170)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int BoolCurvePropertyData_TypeDefinitionIndex = 40089;

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

		::Class_1_EAF7984A8FAD6BE4* Method_2_526FB29047B22B50()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA_METHOD_2_526FB29047B22B50_OFFSET))(this);
		}

		::System::Boolean Method_2_DACDDC9624F9624F(::EnviromentSystemV2Space::PropertyDataBase* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA_METHOD_2_DACDDC9624F9624F_OFFSET))(this, P0);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_2_528BD4865C714C5C()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_BOOLCURVEPROPERTYDATA_METHOD_2_528BD4865C714C5C_OFFSET))(this);
		}
	};
}
