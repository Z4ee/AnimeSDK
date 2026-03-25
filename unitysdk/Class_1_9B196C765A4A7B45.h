#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AnimatorClipZoneDescConfig; }
namespace RPG::GameCore { class AnimatorClipZoneNewConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9B196C765A4A7B45_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B0DDF0)
#define CLASS_1_9B196C765A4A7B45_METHOD_1_1D1E7C1B618F2CC9_OFFSET UNITYSDK_OFFSET(0x10B0DEA0)
#define CLASS_1_9B196C765A4A7B45_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x10B0DBA0)
#define CLASS_1_9B196C765A4A7B45_METHOD_1_D45FD4EAC45B07B0_OFFSET UNITYSDK_OFFSET(0x10B0D7E0)
#define CLASS_1_9B196C765A4A7B45__CTOR_OFFSET UNITYSDK_OFFSET(0x10B0D7C0)

inline static constexpr unsigned int Class_1_9B196C765A4A7B45_TypeDefinitionIndex = 44820;

class Class_1_9B196C765A4A7B45 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AnimatorClipZoneDescConfig*>* Field_1_1; // 0x10
	::RPG::GameCore::AnimatorClipZoneNewConfig* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::AnimatorClipZoneNewConfig* a1, ::RPG::GameCore::AnimatorClipZoneNewConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimatorClipZoneNewConfig*, ::RPG::GameCore::AnimatorClipZoneNewConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9B196C765A4A7B45__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B196C765A4A7B45_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_1D1E7C1B618F2CC9(::System::Int32 a1, ::System::Single a2, ::RPG::GameCore::AnimZoneType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::RPG::GameCore::AnimZoneType))((::PBYTE)hIl2Cpp + CLASS_1_9B196C765A4A7B45_METHOD_1_1D1E7C1B618F2CC9_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::AnimatorClipZoneNewConfig* Method_1_D45FD4EAC45B07B0(::RPG::GameCore::AnimatorClipZoneNewConfig* a1, ::RPG::GameCore::AnimatorClipZoneNewConfig* a2)
	{
		return ((::RPG::GameCore::AnimatorClipZoneNewConfig*(*)(::PVOID, ::RPG::GameCore::AnimatorClipZoneNewConfig*, ::RPG::GameCore::AnimatorClipZoneNewConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9B196C765A4A7B45_METHOD_1_D45FD4EAC45B07B0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B196C765A4A7B45_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}
};
