#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/PostProcess/ExportContextBase.h"

namespace System { class String; }

#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_METHOD_2_102F0330C791FBB8_OFFSET UNITYSDK_OFFSET(0x19DA6120)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x19DA64D0)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_METHOD_2_420F5543CED5025E_OFFSET UNITYSDK_OFFSET(0x19DA6310)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x19DA6420)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA6490)

namespace MoleMole::EffectSimulate::PostProcess
{
	inline static constexpr unsigned int ExportContextMainPlot_TypeDefinitionIndex = 90680;

	class ExportContextMainPlot : public ::MoleMole::EffectSimulate::PostProcess::ExportContextBase
	{
	public:
		::System::String* mainPlotName; // 0x18
		::System::String* markStr; // 0x20
		::MoleMole::Config::ScreenEffectType moduleType; // 0x28
		::System::Int32 markID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT__CTOR_OFFSET))(this);
		}

		::System::String* Method_2_102F0330C791FBB8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_METHOD_2_102F0330C791FBB8_OFFSET))(this);
		}

		::System::String* Method_2_420F5543CED5025E()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_METHOD_2_420F5543CED5025E_OFFSET))(this);
		}

		::System::String* Method_2_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_2_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_METHOD_2_391A84BCD9F51317_OFFSET))(this);
		}
	};
}
