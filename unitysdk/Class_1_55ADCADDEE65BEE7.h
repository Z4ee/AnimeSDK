#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AnimatorClipZoneDescConfig; }
namespace RPG::GameCore { class AnimatorClipZoneNewConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_55ADCADDEE65BEE7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8FAEC0)
#define CLASS_1_55ADCADDEE65BEE7_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0xB8FAC70)
#define CLASS_1_55ADCADDEE65BEE7_METHOD_1_D45FD4EAC45B07B0_OFFSET UNITYSDK_OFFSET(0xB8FA7E0)
#define CLASS_1_55ADCADDEE65BEE7_METHOD_1_E50B89CA184B24C7_OFFSET UNITYSDK_OFFSET(0xB8FAF60)
#define CLASS_1_55ADCADDEE65BEE7__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FA7C0)

inline static constexpr unsigned int Class_1_55ADCADDEE65BEE7_TypeDefinitionIndex = 56102;

class Class_1_55ADCADDEE65BEE7 : public ::System::Object
{
public:
	::RPG::GameCore::AnimatorClipZoneNewConfig* FJBNJOOFBHB; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AnimatorClipZoneDescConfig*>* PFNNLAGAMLE; // 0x18

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
