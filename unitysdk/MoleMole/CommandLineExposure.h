#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class ExposureProfileContext; }

#define MOLEMOLE_COMMANDLINEEXPOSURE_METHOD_2_2CD20F10C229CD49_OFFSET UNITYSDK_OFFSET(0x134E7D50)
#define MOLEMOLE_COMMANDLINEEXPOSURE_METHOD_2_95681B9E162CBC1D_OFFSET UNITYSDK_OFFSET(0x134E7E60)
#define MOLEMOLE_COMMANDLINEEXPOSURE__CTOR_OFFSET UNITYSDK_OFFSET(0x134E7E20)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineExposure_TypeDefinitionIndex = 57869;

	class CommandLineExposure : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::ExposureProfileContext*, ::MoleMole::CommandLineExposure*>
	{
	public:
		::System::Nullable_1<::System::Boolean> exposureBeforeBloom; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEEXPOSURE__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineExposure* Method_2_2CD20F10C229CD49(::MoleMole::ExposureProfileContext* a1)
		{
			return ((::MoleMole::CommandLineExposure*(*)(::PVOID, ::MoleMole::ExposureProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEEXPOSURE_METHOD_2_2CD20F10C229CD49_OFFSET))(this, a1);
		}

		::MoleMole::ExposureProfileContext* Method_2_95681B9E162CBC1D(::MoleMole::ExposureProfileContext* a1)
		{
			return ((::MoleMole::ExposureProfileContext*(*)(::PVOID, ::MoleMole::ExposureProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEEXPOSURE_METHOD_2_95681B9E162CBC1D_OFFSET))(this, a1);
		}
	};
}
