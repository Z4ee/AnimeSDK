#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/EndShape.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/GuidanceCoreBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_C8DF2FFACC9F1669;
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace MoleMole::MonoEffectContrllerModule { class PerlinNoiseConfig; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER3_GENERATEPATH_OFFSET UNITYSDK_OFFSET(0x17910920)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER3__CTOR_OFFSET UNITYSDK_OFFSET(0x179114F0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER3___BASE_GENERATEPATH_OFFSET UNITYSDK_OFFSET(0x17911510)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int GuidanceCore_Bezier3_TypeDefinitionIndex = 60925;

	class GuidanceCore_Bezier3 : public ::MoleMole::MonoEffectContrllerModule::GuidanceCoreBase
	{
	public:
		::System::Single MininBezierAngle; // 0x10
		::System::Single ExtBezierAngle; // 0x14
		::System::Single TimeToTurn; // 0x18
		::UnityEngine::Quaternion Rotation; // 0x1C
		::System::Single OffsetLength; // 0x2C
		::System::Boolean EnableEndControlRandom; // 0x30
		::MoleMole::MonoEffectContrllerModule::EndShape OffsetShape; // 0x34
		::MoleMole::MonoEffectContrllerModule::PerlinNoiseConfig* NoiseConfig; // 0x50
		::System::Boolean AutoRaising; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER3__CTOR_OFFSET))(this);
		}

		::Class_1_C8DF2FFACC9F1669* GeneratePath(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::Class_1_C8DF2FFACC9F1669*(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER3_GENERATEPATH_OFFSET))(this, controller);
		}

		::Class_1_C8DF2FFACC9F1669* __base_GeneratePath(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* P0)
		{
			return ((::Class_1_C8DF2FFACC9F1669*(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER3___BASE_GENERATEPATH_OFFSET))(this, P0);
		}
	};
}
