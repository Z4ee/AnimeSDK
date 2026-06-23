#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class LoopSubdivisionProfileContext; }

#define MOLEMOLE_COMMANDLINELOOPSUBDIVISION_METHOD_2_8C4EB15C90E465ED_OFFSET UNITYSDK_OFFSET(0x1108A880)
#define MOLEMOLE_COMMANDLINELOOPSUBDIVISION_METHOD_2_B803F7DBC34AF411_OFFSET UNITYSDK_OFFSET(0x1108A760)
#define MOLEMOLE_COMMANDLINELOOPSUBDIVISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1108A840)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineLoopSubdivision_TypeDefinitionIndex = 69719;

	class CommandLineLoopSubdivision : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::LoopSubdivisionProfileContext*, ::MoleMole::CommandLineLoopSubdivision*>
	{
	public:
		::System::Nullable_1<::System::Boolean> enable; // 0x18
		::System::Nullable_1<::System::Boolean> IsGlobal; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINELOOPSUBDIVISION__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineLoopSubdivision* Method_2_B803F7DBC34AF411(::MoleMole::LoopSubdivisionProfileContext* a1)
		{
			return ((::MoleMole::CommandLineLoopSubdivision*(*)(::PVOID, ::MoleMole::LoopSubdivisionProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINELOOPSUBDIVISION_METHOD_2_B803F7DBC34AF411_OFFSET))(this, a1);
		}

		::MoleMole::LoopSubdivisionProfileContext* Method_2_8C4EB15C90E465ED(::MoleMole::LoopSubdivisionProfileContext* a1)
		{
			return ((::MoleMole::LoopSubdivisionProfileContext*(*)(::PVOID, ::MoleMole::LoopSubdivisionProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINELOOPSUBDIVISION_METHOD_2_8C4EB15C90E465ED_OFFSET))(this, a1);
		}
	};
}
