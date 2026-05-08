#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/PostProcess/ExportContextBase.h"

namespace System { class String; }

#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_METHOD_2_102F0330C791FBB8_OFFSET UNITYSDK_OFFSET(0x16D2DEC0)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16D2E240)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_METHOD_2_420F5543CED5025E_OFFSET UNITYSDK_OFFSET(0x16D2E0B0)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x16D2E1C0)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x16D2E230)

namespace MoleMole::EffectSimulate::PostProcess
{
	inline static constexpr unsigned int ExportContextMiniGame_TypeDefinitionIndex = 45850;

	class ExportContextMiniGame : public ::MoleMole::EffectSimulate::PostProcess::ExportContextBase
	{
	public:
		::System::String* gameName; // 0x18
		::System::String* str; // 0x20
		::MoleMole::Config::ScreenEffectType moduleType; // 0x28
		::System::Int32 markID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME__CTOR_OFFSET))(this);
		}

		::System::String* Method_2_102F0330C791FBB8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_METHOD_2_102F0330C791FBB8_OFFSET))(this);
		}

		::System::String* Method_2_420F5543CED5025E()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_METHOD_2_420F5543CED5025E_OFFSET))(this);
		}

		::System::String* Method_2_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_2_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_METHOD_2_391A84BCD9F51317_OFFSET))(this);
		}
	};
}
