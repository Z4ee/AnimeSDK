#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/GuidanceCoreBase.h"

class Class_1_C8DF2FFACC9F1669;
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace MoleMole::MonoEffectContrllerModule { class PerlinNoiseConfig; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER2_GENERATEPATH_OFFSET UNITYSDK_OFFSET(0x125D5FE0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER2__CTOR_OFFSET UNITYSDK_OFFSET(0x125D61A0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER2___BASE_GENERATEPATH_OFFSET UNITYSDK_OFFSET(0x125D61B0)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int GuidanceCore_Bezier2_TypeDefinitionIndex = 64431;

	class GuidanceCore_Bezier2 : public ::MoleMole::MonoEffectContrllerModule::GuidanceCoreBase
	{
	public:
		::System::Single TimeToTurn; // 0x10
		::MoleMole::MonoEffectContrllerModule::PerlinNoiseConfig* NoiseConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER2__CTOR_OFFSET))(this);
		}

		::Class_1_C8DF2FFACC9F1669* GeneratePath(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::Class_1_C8DF2FFACC9F1669*(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER2_GENERATEPATH_OFFSET))(this, controller);
		}

		::Class_1_C8DF2FFACC9F1669* __base_GeneratePath(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* P0)
		{
			return ((::Class_1_C8DF2FFACC9F1669*(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER2___BASE_GENERATEPATH_OFFSET))(this, P0);
		}
	};
}
