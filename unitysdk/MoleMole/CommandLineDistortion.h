#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class DistortionProfileContext; }

#define MOLEMOLE_COMMANDLINEDISTORTION_METHOD_2_09FE7D376E130FB9_OFFSET UNITYSDK_OFFSET(0x1BD44390)
#define MOLEMOLE_COMMANDLINEDISTORTION_METHOD_2_EF9831ED1EBB9277_OFFSET UNITYSDK_OFFSET(0x1BD444A0)
#define MOLEMOLE_COMMANDLINEDISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD44460)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineDistortion_TypeDefinitionIndex = 65291;

	class CommandLineDistortion : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::DistortionProfileContext*, ::MoleMole::CommandLineDistortion*>
	{
	public:
		::System::Nullable_1<::System::Boolean> enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDISTORTION__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineDistortion* Method_2_09FE7D376E130FB9(::MoleMole::DistortionProfileContext* a1)
		{
			return ((::MoleMole::CommandLineDistortion*(*)(::PVOID, ::MoleMole::DistortionProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDISTORTION_METHOD_2_09FE7D376E130FB9_OFFSET))(this, a1);
		}

		::MoleMole::DistortionProfileContext* Method_2_EF9831ED1EBB9277(::MoleMole::DistortionProfileContext* a1)
		{
			return ((::MoleMole::DistortionProfileContext*(*)(::PVOID, ::MoleMole::DistortionProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDISTORTION_METHOD_2_EF9831ED1EBB9277_OFFSET))(this, a1);
		}
	};
}
