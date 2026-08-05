#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Spline/NAPPointMetaPluginBase.h"

class Class_0_16E4307DCC419505_176;
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CHECKPOINT_GET_NAME_1_OFFSET UNITYSDK_OFFSET(0x1190F1B0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CHECKPOINT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1190F170)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CHECKPOINT_METHOD_8_A4CD58DA1A409835_OFFSET UNITYSDK_OFFSET(0x1190F1F0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CHECKPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1190F280)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CHECKPOINT___BASE_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x1190F2D0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NapPointMetaPlugin_CheckPoint_TypeDefinitionIndex = 87951;

	class NapPointMetaPlugin_CheckPoint : public ::MoleMole::Spline::NAPPointMetaPluginBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CHECKPOINT__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CHECKPOINT_GET_NAME_OFFSET))();
		}

		::System::String* get_Name_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CHECKPOINT_GET_NAME_1_OFFSET))(this);
		}

		::System::Void Method_8_A4CD58DA1A409835(::Class_0_16E4307DCC419505_176* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_176*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CHECKPOINT_METHOD_8_A4CD58DA1A409835_OFFSET))(this, a1);
		}

		::System::Void __base_OnTrigger(::Class_0_16E4307DCC419505_176* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_176*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CHECKPOINT___BASE_ONTRIGGER_OFFSET))(this, a1);
		}
	};
}
