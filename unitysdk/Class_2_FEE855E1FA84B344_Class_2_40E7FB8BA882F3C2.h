#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FEE855E1FA84B344_Class_1_3C64130387B0042A.h"

class Class_1_9BAFBE9EEC7CF1E0_Class_2_7BCB8E84ED62460B;
class Class_2_C0925AF8B152B3F0;
class Class_2_FEE855E1FA84B344;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession; }

#define CLASS_2_FEE855E1FA84B344_CLASS_2_40E7FB8BA882F3C2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A01AB10)
#define CLASS_2_FEE855E1FA84B344_CLASS_2_40E7FB8BA882F3C2_METHOD_2_B2731C9B76574D32_OFFSET UNITYSDK_OFFSET(0x1A01AB80)
#define CLASS_2_FEE855E1FA84B344_CLASS_2_40E7FB8BA882F3C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A01A940)

inline static constexpr unsigned int Class_2_FEE855E1FA84B344_Class_2_40E7FB8BA882F3C2_TypeDefinitionIndex = 69274;

class Class_2_FEE855E1FA84B344_Class_2_40E7FB8BA882F3C2 : public ::Class_2_FEE855E1FA84B344_Class_1_3C64130387B0042A
{
public:
	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession* CIKPBGDIABO; // 0x10

	::System::Void _ctor(::Class_2_FEE855E1FA84B344* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FEE855E1FA84B344*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession*))((::PBYTE)hIl2Cpp + CLASS_2_FEE855E1FA84B344_CLASS_2_40E7FB8BA882F3C2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEE855E1FA84B344_CLASS_2_40E7FB8BA882F3C2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B2731C9B76574D32(::Class_2_C0925AF8B152B3F0* a1, ::Class_1_9BAFBE9EEC7CF1E0_Class_2_7BCB8E84ED62460B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C0925AF8B152B3F0*, ::Class_1_9BAFBE9EEC7CF1E0_Class_2_7BCB8E84ED62460B*))((::PBYTE)hIl2Cpp + CLASS_2_FEE855E1FA84B344_CLASS_2_40E7FB8BA882F3C2_METHOD_2_B2731C9B76574D32_OFFSET))(this, a1, a2);
	}
};
