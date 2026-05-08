#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C8DF2FFACC9F1669;
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECOREBASE_GENERATEPATH_OFFSET UNITYSDK_OFFSET(0x15E46D40)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECOREBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E46D90)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int GuidanceCoreBase_TypeDefinitionIndex = 60707;

	class GuidanceCoreBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECOREBASE__CTOR_OFFSET))(this);
		}

		::Class_1_C8DF2FFACC9F1669* GeneratePath(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::Class_1_C8DF2FFACC9F1669*(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECOREBASE_GENERATEPATH_OFFSET))(this, controller);
		}
	};
}
