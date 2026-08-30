#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class PuzzleSetAnimatorParams; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_07AE34A47D84FDF5_METHOD_3_79DC04147CDBA2C4_OFFSET UNITYSDK_OFFSET(0x178D3A10)
#define CLASS_3_07AE34A47D84FDF5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x178D3770)
#define CLASS_3_07AE34A47D84FDF5__CTOR_OFFSET UNITYSDK_OFFSET(0x178D3740)

inline static constexpr unsigned int Class_3_07AE34A47D84FDF5_TypeDefinitionIndex = 53446;

class Class_3_07AE34A47D84FDF5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PuzzleSetAnimatorParams*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PuzzleSetAnimatorParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PuzzleSetAnimatorParams*))((::PBYTE)hIl2Cpp + CLASS_3_07AE34A47D84FDF5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07AE34A47D84FDF5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_79DC04147CDBA2C4(::RPG::Client::MockAnimator* a1, ::RPG::GameCore::AnimatorParameterType a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*, ::RPG::GameCore::AnimatorParameterType, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_07AE34A47D84FDF5_METHOD_3_79DC04147CDBA2C4_OFFSET))(this, a1, a2, a3, a4);
	}
};
