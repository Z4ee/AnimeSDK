#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FB2896E6C484E49.h"

namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_2_23A39E0E10733DDD_METHOD_2_87912BADECB247F1_OFFSET UNITYSDK_OFFSET(0x163E5920)
#define CLASS_2_23A39E0E10733DDD_METHOD_2_B16D64B5FEBB5069_OFFSET UNITYSDK_OFFSET(0x163E5A50)
#define CLASS_2_23A39E0E10733DDD_METHOD_2_D02A943E69A5767C_OFFSET UNITYSDK_OFFSET(0x163E59D0)
#define CLASS_2_23A39E0E10733DDD__CTOR_OFFSET UNITYSDK_OFFSET(0x163E57A0)

inline static constexpr unsigned int Class_2_23A39E0E10733DDD_TypeDefinitionIndex = 74720;

class Class_2_23A39E0E10733DDD : public ::Class_1_5FB2896E6C484E49
{
public:
	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_2_23A39E0E10733DDD__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_87912BADECB247F1(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_23A39E0E10733DDD_METHOD_2_87912BADECB247F1_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_D02A943E69A5767C(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_23A39E0E10733DDD_METHOD_2_D02A943E69A5767C_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_B16D64B5FEBB5069(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_23A39E0E10733DDD_METHOD_2_B16D64B5FEBB5069_OFFSET))(this, a1, a2);
	}
};
