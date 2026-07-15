#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AnimatorClipZoneDescConfig; }
namespace RPG::GameCore { class AnimatorClipZoneNewConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_55ADCADDEE65BEE7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F02680)
#define CLASS_1_55ADCADDEE65BEE7_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x18F02430)
#define CLASS_1_55ADCADDEE65BEE7_METHOD_1_D45FD4EAC45B07B0_OFFSET UNITYSDK_OFFSET(0x18F01FA0)
#define CLASS_1_55ADCADDEE65BEE7_METHOD_1_E50B89CA184B24C7_OFFSET UNITYSDK_OFFSET(0x18F02720)
#define CLASS_1_55ADCADDEE65BEE7__CTOR_OFFSET UNITYSDK_OFFSET(0x18F01F80)

inline static constexpr unsigned int Class_1_55ADCADDEE65BEE7_TypeDefinitionIndex = 53388;

class Class_1_55ADCADDEE65BEE7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AnimatorClipZoneDescConfig*>* Field_1_0; // 0x10
	::RPG::GameCore::AnimatorClipZoneNewConfig* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::AnimatorClipZoneNewConfig* a1, ::RPG::GameCore::AnimatorClipZoneNewConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimatorClipZoneNewConfig*, ::RPG::GameCore::AnimatorClipZoneNewConfig*))((::PBYTE)hIl2Cpp + CLASS_1_55ADCADDEE65BEE7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ADCADDEE65BEE7_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_E50B89CA184B24C7(::System::Int32 a1, ::System::Single a2, ::RPG::GameCore::AnimZoneType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::RPG::GameCore::AnimZoneType))((::PBYTE)hIl2Cpp + CLASS_1_55ADCADDEE65BEE7_METHOD_1_E50B89CA184B24C7_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::AnimatorClipZoneNewConfig* Method_1_D45FD4EAC45B07B0(::RPG::GameCore::AnimatorClipZoneNewConfig* a1, ::RPG::GameCore::AnimatorClipZoneNewConfig* a2)
	{
		return ((::RPG::GameCore::AnimatorClipZoneNewConfig*(*)(::PVOID, ::RPG::GameCore::AnimatorClipZoneNewConfig*, ::RPG::GameCore::AnimatorClipZoneNewConfig*))((::PBYTE)hIl2Cpp + CLASS_1_55ADCADDEE65BEE7_METHOD_1_D45FD4EAC45B07B0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ADCADDEE65BEE7_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}
};
