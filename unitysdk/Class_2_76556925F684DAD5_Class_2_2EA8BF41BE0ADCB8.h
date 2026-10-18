#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_76556925F684DAD5_Class_1_9F59B1C537F88FE7.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9BAFBE9EEC7CF1E0_Class_2_7BCB8E84ED62460B;
class Class_2_76556925F684DAD5;
class Class_2_C0925AF8B152B3F0;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw; }

#define CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156BAD70)
#define CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8_GET_THROWDIRECTION_OFFSET UNITYSDK_OFFSET(0x156BAD50)
#define CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8_METHOD_2_2AFCA5E8A45268C8_OFFSET UNITYSDK_OFFSET(0x156BADE0)
#define CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8__CTOR_OFFSET UNITYSDK_OFFSET(0x156BABE0)

inline static constexpr unsigned int Class_2_76556925F684DAD5_Class_2_2EA8BF41BE0ADCB8_TypeDefinitionIndex = 69309;

class Class_2_76556925F684DAD5_Class_2_2EA8BF41BE0ADCB8 : public ::Class_2_76556925F684DAD5_Class_1_9F59B1C537F88FE7
{
public:
	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw* CIKPBGDIABO; // 0x10
	::UnityEngine::Vector3 _ThrowDirection_k__BackingField; // 0x18

	::System::Void _ctor(::Class_2_76556925F684DAD5* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_76556925F684DAD5*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw*))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 get_ThrowDirection()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8_GET_THROWDIRECTION_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2AFCA5E8A45268C8(::Class_2_C0925AF8B152B3F0* a1, ::Class_1_9BAFBE9EEC7CF1E0_Class_2_7BCB8E84ED62460B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C0925AF8B152B3F0*, ::Class_1_9BAFBE9EEC7CF1E0_Class_2_7BCB8E84ED62460B*))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8_METHOD_2_2AFCA5E8A45268C8_OFFSET))(this, a1, a2);
	}
};
