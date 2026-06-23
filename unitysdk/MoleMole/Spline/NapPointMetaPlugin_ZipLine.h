#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_12C5CA6868CBAD01.h"
#include "unitysdk/MoleMole/Spline/NAPPointMetaPluginBase.h"

class Class_0_16E4307DCC419505_280;
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE_GET_NAME_1_OFFSET UNITYSDK_OFFSET(0x13049FA0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x13049F60)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE_METHOD_8_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x13049FE0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1304A0E0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE___BASE_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x1304A180)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NapPointMetaPlugin_ZipLine_TypeDefinitionIndex = 79892;

	class NapPointMetaPlugin_ZipLine : public ::MoleMole::Spline::NAPPointMetaPluginBase
	{
	public:
		::Enum_3_12C5CA6868CBAD01 ControlType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET))();
		}

		::System::String* get_Name_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE_GET_NAME_1_OFFSET))(this);
		}

		::System::Void Method_8_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_280* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE_METHOD_8_58E4F6A5F8FAF17F_OFFSET))(this, a1);
		}

		::System::Void __base_OnTrigger(::Class_0_16E4307DCC419505_280* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE___BASE_ONTRIGGER_OFFSET))(this, a1);
		}
	};
}
