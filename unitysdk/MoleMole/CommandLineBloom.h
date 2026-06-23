#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class BloomProfileContext; }

#define MOLEMOLE_COMMANDLINEBLOOM_METHOD_2_020C1956FD22F27B_OFFSET UNITYSDK_OFFSET(0x1702EF50)
#define MOLEMOLE_COMMANDLINEBLOOM_METHOD_2_5876DB29D7667FE1_OFFSET UNITYSDK_OFFSET(0x1702EE40)
#define MOLEMOLE_COMMANDLINEBLOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1702EF10)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineBloom_TypeDefinitionIndex = 78836;

	class CommandLineBloom : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::BloomProfileContext*, ::MoleMole::CommandLineBloom*>
	{
	public:
		::System::Nullable_1<::System::Boolean> IsBloomOn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEBLOOM__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineBloom* Method_2_5876DB29D7667FE1(::MoleMole::BloomProfileContext* a1)
		{
			return ((::MoleMole::CommandLineBloom*(*)(::PVOID, ::MoleMole::BloomProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEBLOOM_METHOD_2_5876DB29D7667FE1_OFFSET))(this, a1);
		}

		::MoleMole::BloomProfileContext* Method_2_020C1956FD22F27B(::MoleMole::BloomProfileContext* a1)
		{
			return ((::MoleMole::BloomProfileContext*(*)(::PVOID, ::MoleMole::BloomProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEBLOOM_METHOD_2_020C1956FD22F27B_OFFSET))(this, a1);
		}
	};
}
