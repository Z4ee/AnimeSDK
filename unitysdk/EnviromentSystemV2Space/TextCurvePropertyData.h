#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/CustomCurvePropertyData.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_METHOD_3_080F02908C048D30_OFFSET UNITYSDK_OFFSET(0xF939690)
#define ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_METHOD_3_87C0E26F1D61379E_OFFSET UNITYSDK_OFFSET(0xF939620)
#define ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_METHOD_3_BD4FC714E5BBCF11_OFFSET UNITYSDK_OFFSET(0xF9398D0)
#define ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_METHOD_3_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xF939920)
#define ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF9398C0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int TextCurvePropertyData_TypeDefinitionIndex = 45996;

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

		::Class_1_EAF7984A8FAD6BE4* Method_3_080F02908C048D30()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_METHOD_3_080F02908C048D30_OFFSET))(this);
		}

		::System::Boolean Method_3_BD4FC714E5BBCF11(::EnviromentSystemV2Space::PropertyDataBase* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_METHOD_3_BD4FC714E5BBCF11_OFFSET))(this, P0);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_F8B73ECE7F883AC1()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_METHOD_3_F8B73ECE7F883AC1_OFFSET))(this);
		}
	};
}
