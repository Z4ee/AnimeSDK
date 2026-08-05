#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class VSyncProfileContext; }

#define MOLEMOLE_COMMANDLINEVSYNC_METHOD_2_B56A04952F869EF9_OFFSET UNITYSDK_OFFSET(0x11457F30)
#define MOLEMOLE_COMMANDLINEVSYNC_METHOD_2_BBEB22AFF699E501_OFFSET UNITYSDK_OFFSET(0x11457E20)
#define MOLEMOLE_COMMANDLINEVSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x11457EF0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineVSync_TypeDefinitionIndex = 44184;

	class CommandLineVSync : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::VSyncProfileContext*, ::MoleMole::CommandLineVSync*>
	{
	public:
		::System::Nullable_1<::System::Boolean> IsEnabled; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVSYNC__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineVSync* Method_2_BBEB22AFF699E501(::MoleMole::VSyncProfileContext* a1)
		{
			return ((::MoleMole::CommandLineVSync*(*)(::PVOID, ::MoleMole::VSyncProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVSYNC_METHOD_2_BBEB22AFF699E501_OFFSET))(this, a1);
		}

		::MoleMole::VSyncProfileContext* Method_2_B56A04952F869EF9(::MoleMole::VSyncProfileContext* a1)
		{
			return ((::MoleMole::VSyncProfileContext*(*)(::PVOID, ::MoleMole::VSyncProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVSYNC_METHOD_2_B56A04952F869EF9_OFFSET))(this, a1);
		}
	};
}
