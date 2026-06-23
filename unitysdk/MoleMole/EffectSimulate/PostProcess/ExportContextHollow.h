#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/PostProcess/ExportContextBase.h"

namespace System { class String; }

#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18B14730)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x18B146B0)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_METHOD_2_BA0DC2F7F154B425_OFFSET UNITYSDK_OFFSET(0x18B144F0)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_METHOD_2_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0x18B14600)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B14720)

namespace MoleMole::EffectSimulate::PostProcess
{
	inline static constexpr unsigned int ExportContextHollow_TypeDefinitionIndex = 73680;

	class ExportContextHollow : public ::MoleMole::EffectSimulate::PostProcess::ExportContextBase
	{
	public:
		::System::String* str; // 0x18
		::MoleMole::Config::ScreenEffectType moduleType; // 0x20
		::System::Int32 markID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW__CTOR_OFFSET))(this);
		}

		::System::String* Method_2_BA0DC2F7F154B425()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_METHOD_2_BA0DC2F7F154B425_OFFSET))(this);
		}

		::System::String* Method_2_C101CD8C5CF89A5A()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_METHOD_2_C101CD8C5CF89A5A_OFFSET))(this);
		}

		::System::String* Method_2_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_2_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_METHOD_2_391A84BCD9F51317_OFFSET))(this);
		}
	};
}
