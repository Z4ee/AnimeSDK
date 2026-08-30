#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FEE855E1FA84B344_Class_1_3C64130387B0042A.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9BAFBE9EEC7CF1E0_Class_2_7BCB8E84ED62460B;
class Class_2_C0925AF8B152B3F0;
class Class_2_FEE855E1FA84B344;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw; }

#define CLASS_2_FEE855E1FA84B344_CLASS_2_2EA8BF41BE0ADCB8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A01AA00)
#define CLASS_2_FEE855E1FA84B344_CLASS_2_2EA8BF41BE0ADCB8_GET_THROWDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A01A9E0)
#define CLASS_2_FEE855E1FA84B344_CLASS_2_2EA8BF41BE0ADCB8_METHOD_2_2AFCA5E8A45268C8_OFFSET UNITYSDK_OFFSET(0x1A01AA70)
#define CLASS_2_FEE855E1FA84B344_CLASS_2_2EA8BF41BE0ADCB8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A01A870)

inline static constexpr unsigned int Class_2_FEE855E1FA84B344_Class_2_2EA8BF41BE0ADCB8_TypeDefinitionIndex = 69273;

class Class_2_FEE855E1FA84B344_Class_2_2EA8BF41BE0ADCB8 : public ::Class_2_FEE855E1FA84B344_Class_1_3C64130387B0042A
{
public:
	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw* CIKPBGDIABO; // 0x10
	::UnityEngine::Vector3 _ThrowDirection_k__BackingField; // 0x18

	::System::Void _ctor(::Class_2_FEE855E1FA84B344* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FEE855E1FA84B344*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw*))((::PBYTE)hIl2Cpp + CLASS_2_FEE855E1FA84B344_CLASS_2_2EA8BF41BE0ADCB8__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 get_ThrowDirection()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEE855E1FA84B344_CLASS_2_2EA8BF41BE0ADCB8_GET_THROWDIRECTION_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEE855E1FA84B344_CLASS_2_2EA8BF41BE0ADCB8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2AFCA5E8A45268C8(::Class_2_C0925AF8B152B3F0* a1, ::Class_1_9BAFBE9EEC7CF1E0_Class_2_7BCB8E84ED62460B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C0925AF8B152B3F0*, ::Class_1_9BAFBE9EEC7CF1E0_Class_2_7BCB8E84ED62460B*))((::PBYTE)hIl2Cpp + CLASS_2_FEE855E1FA84B344_CLASS_2_2EA8BF41BE0ADCB8_METHOD_2_2AFCA5E8A45268C8_OFFSET))(this, a1, a2);
	}
};
