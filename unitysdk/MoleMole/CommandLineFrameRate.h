#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class FrameRateProfileContext; }

#define MOLEMOLE_COMMANDLINEFRAMERATE_METHOD_2_47D9418D793AEC80_OFFSET UNITYSDK_OFFSET(0x1702F160)
#define MOLEMOLE_COMMANDLINEFRAMERATE_METHOD_2_638C4D5CE624AD09_OFFSET UNITYSDK_OFFSET(0x1702F050)
#define MOLEMOLE_COMMANDLINEFRAMERATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1702F120)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineFrameRate_TypeDefinitionIndex = 46258;

	class CommandLineFrameRate : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::FrameRateProfileContext*, ::MoleMole::CommandLineFrameRate*>
	{
	public:
		::System::Nullable_1<::System::Int32> FrameRate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEFRAMERATE__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineFrameRate* Method_2_638C4D5CE624AD09(::MoleMole::FrameRateProfileContext* a1)
		{
			return ((::MoleMole::CommandLineFrameRate*(*)(::PVOID, ::MoleMole::FrameRateProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEFRAMERATE_METHOD_2_638C4D5CE624AD09_OFFSET))(this, a1);
		}

		::MoleMole::FrameRateProfileContext* Method_2_47D9418D793AEC80(::MoleMole::FrameRateProfileContext* a1)
		{
			return ((::MoleMole::FrameRateProfileContext*(*)(::PVOID, ::MoleMole::FrameRateProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEFRAMERATE_METHOD_2_47D9418D793AEC80_OFFSET))(this, a1);
		}
	};
}
