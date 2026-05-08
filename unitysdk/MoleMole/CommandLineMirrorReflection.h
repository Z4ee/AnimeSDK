#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MirrorReflectionQuality.h"

namespace MoleMole { class MirrorReflectionProfileContext; }

#define MOLEMOLE_COMMANDLINEMIRRORREFLECTION_METHOD_2_2362E43632123EB3_OFFSET UNITYSDK_OFFSET(0xECFAF20)
#define MOLEMOLE_COMMANDLINEMIRRORREFLECTION_METHOD_2_95F4C07DAEF4C457_OFFSET UNITYSDK_OFFSET(0xECFB070)
#define MOLEMOLE_COMMANDLINEMIRRORREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xECFB030)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineMirrorReflection_TypeDefinitionIndex = 80133;

	class CommandLineMirrorReflection : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::MirrorReflectionProfileContext*, ::MoleMole::CommandLineMirrorReflection*>
	{
	public:
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::MirrorReflectionQuality> MirrorReflectionSetting; // 0x18
		::System::Nullable_1<::System::Int32> SSRDownScale; // 0x20
		::System::Nullable_1<::System::Single> SSRMinSmoothness; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMIRRORREFLECTION__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineMirrorReflection* Method_2_2362E43632123EB3(::MoleMole::MirrorReflectionProfileContext* a1)
		{
			return ((::MoleMole::CommandLineMirrorReflection*(*)(::PVOID, ::MoleMole::MirrorReflectionProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMIRRORREFLECTION_METHOD_2_2362E43632123EB3_OFFSET))(this, a1);
		}

		::MoleMole::MirrorReflectionProfileContext* Method_2_95F4C07DAEF4C457(::MoleMole::MirrorReflectionProfileContext* a1)
		{
			return ((::MoleMole::MirrorReflectionProfileContext*(*)(::PVOID, ::MoleMole::MirrorReflectionProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMIRRORREFLECTION_METHOD_2_95F4C07DAEF4C457_OFFSET))(this, a1);
		}
	};
}
