#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_ENVRESOURCECURVEPROPERTYDATA_METHOD_3_1A1283E6D869BB8A_OFFSET UNITYSDK_OFFSET(0xF1E5CA0)
#define ENVIROMENTSYSTEMV2SPACE_ENVRESOURCECURVEPROPERTYDATA_METHOD_3_A034FB093FB7C7DD_OFFSET UNITYSDK_OFFSET(0xF1E5DB0)
#define ENVIROMENTSYSTEMV2SPACE_ENVRESOURCECURVEPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF1E5ED0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvResourceCurvePropertyData_TypeDefinitionIndex = 47534;

	class EnvResourceCurvePropertyData : public ::EnviromentSystemV2Space::PropertyData_1<::System::String*>
	{
	public:
		::System::String* valueTypeInfo; // 0x30
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x38
		::System::Int32 usrData; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVRESOURCECURVEPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_1A1283E6D869BB8A(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVRESOURCECURVEPROPERTYDATA_METHOD_3_1A1283E6D869BB8A_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_A034FB093FB7C7DD()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVRESOURCECURVEPROPERTYDATA_METHOD_3_A034FB093FB7C7DD_OFFSET))(this);
		}
	};
}
