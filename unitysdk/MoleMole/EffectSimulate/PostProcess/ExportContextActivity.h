#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/PostProcess/ExportContextBase.h"

namespace System { class String; }

#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_METHOD_2_102F0330C791FBB8_OFFSET UNITYSDK_OFFSET(0x1B947970)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1B947CF0)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_METHOD_2_420F5543CED5025E_OFFSET UNITYSDK_OFFSET(0x1B947B60)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1B947C70)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B947CE0)

namespace MoleMole::EffectSimulate::PostProcess
{
	inline static constexpr unsigned int ExportContextActivity_TypeDefinitionIndex = 71150;

	class ExportContextActivity : public ::MoleMole::EffectSimulate::PostProcess::ExportContextBase
	{
	public:
		::System::String* activityName; // 0x18
		::System::String* str; // 0x20
		::MoleMole::Config::ScreenEffectType moduleType; // 0x28
		::System::Int32 markID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY__CTOR_OFFSET))(this);
		}

		::System::String* Method_2_102F0330C791FBB8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_METHOD_2_102F0330C791FBB8_OFFSET))(this);
		}

		::System::String* Method_2_420F5543CED5025E()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_METHOD_2_420F5543CED5025E_OFFSET))(this);
		}

		::System::String* Method_2_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_2_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_METHOD_2_391A84BCD9F51317_OFFSET))(this);
		}
	};
}
