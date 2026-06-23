#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class RenderScaleProfileContext; }

#define MOLEMOLE_COMMANDLINERENDERSCALE_METHOD_2_7D8E67F55E5B87EF_OFFSET UNITYSDK_OFFSET(0x13ECC3F0)
#define MOLEMOLE_COMMANDLINERENDERSCALE_METHOD_2_B2A7C6FDE215F575_OFFSET UNITYSDK_OFFSET(0x13ECC2B0)
#define MOLEMOLE_COMMANDLINERENDERSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x13ECC3B0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineRenderScale_TypeDefinitionIndex = 62777;

	class CommandLineRenderScale : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::RenderScaleProfileContext*, ::MoleMole::CommandLineRenderScale*>
	{
	public:
		::System::Nullable_1<::System::Single> RenderScaleValue; // 0x18
		::System::Nullable_1<::System::Single> RenderTargetFactor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINERENDERSCALE__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineRenderScale* Method_2_B2A7C6FDE215F575(::MoleMole::RenderScaleProfileContext* a1)
		{
			return ((::MoleMole::CommandLineRenderScale*(*)(::PVOID, ::MoleMole::RenderScaleProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINERENDERSCALE_METHOD_2_B2A7C6FDE215F575_OFFSET))(this, a1);
		}

		::MoleMole::RenderScaleProfileContext* Method_2_7D8E67F55E5B87EF(::MoleMole::RenderScaleProfileContext* a1)
		{
			return ((::MoleMole::RenderScaleProfileContext*(*)(::PVOID, ::MoleMole::RenderScaleProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINERENDERSCALE_METHOD_2_7D8E67F55E5B87EF_OFFSET))(this, a1);
		}
	};
}
