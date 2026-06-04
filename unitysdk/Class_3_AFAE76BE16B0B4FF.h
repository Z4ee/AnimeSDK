#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GlobalMainIntensityEffectAutoRevert; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections { class IEnumerator; }

#define CLASS_3_AFAE76BE16B0B4FF_METHOD_3_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x118FA0C0)
#define CLASS_3_AFAE76BE16B0B4FF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118F9B90)
#define CLASS_3_AFAE76BE16B0B4FF__CTOR_OFFSET UNITYSDK_OFFSET(0x118F9B60)

inline static constexpr unsigned int Class_3_AFAE76BE16B0B4FF_TypeDefinitionIndex = 52623;

class Class_3_AFAE76BE16B0B4FF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GlobalMainIntensityEffectAutoRevert*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalMainIntensityEffectAutoRevert* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalMainIntensityEffectAutoRevert*))((::PBYTE)hIl2Cpp + CLASS_3_AFAE76BE16B0B4FF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFAE76BE16B0B4FF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_3_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFAE76BE16B0B4FF_METHOD_3_627C7524E98F4AC5_OFFSET))(this);
	}
};
