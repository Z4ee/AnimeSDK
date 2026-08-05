#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/MoleMole/NapAnisotropicSamplingType.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class AnisotropicSamplingProfileContext; }

#define MOLEMOLE_COMMANDLINEANISOTROPICSAMPLING_METHOD_2_035B471DAE7665D5_OFFSET UNITYSDK_OFFSET(0x1484A1F0)
#define MOLEMOLE_COMMANDLINEANISOTROPICSAMPLING_METHOD_2_ABACFB27553ACD1B_OFFSET UNITYSDK_OFFSET(0x1484A0E0)
#define MOLEMOLE_COMMANDLINEANISOTROPICSAMPLING__CTOR_OFFSET UNITYSDK_OFFSET(0x1484A1B0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineAnisotropicSampling_TypeDefinitionIndex = 77839;

	class CommandLineAnisotropicSampling : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::AnisotropicSamplingProfileContext*, ::MoleMole::CommandLineAnisotropicSampling*>
	{
	public:
		::System::Nullable_1<::MoleMole::NapAnisotropicSamplingType> AnisotropicSamplingType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEANISOTROPICSAMPLING__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineAnisotropicSampling* Method_2_ABACFB27553ACD1B(::MoleMole::AnisotropicSamplingProfileContext* a1)
		{
			return ((::MoleMole::CommandLineAnisotropicSampling*(*)(::PVOID, ::MoleMole::AnisotropicSamplingProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEANISOTROPICSAMPLING_METHOD_2_ABACFB27553ACD1B_OFFSET))(this, a1);
		}

		::MoleMole::AnisotropicSamplingProfileContext* Method_2_035B471DAE7665D5(::MoleMole::AnisotropicSamplingProfileContext* a1)
		{
			return ((::MoleMole::AnisotropicSamplingProfileContext*(*)(::PVOID, ::MoleMole::AnisotropicSamplingProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEANISOTROPICSAMPLING_METHOD_2_035B471DAE7665D5_OFFSET))(this, a1);
		}
	};
}
