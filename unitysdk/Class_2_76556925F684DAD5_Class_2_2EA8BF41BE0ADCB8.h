#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_76556925F684DAD5_Class_1_9F59B1C537F88FE7.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_EFECBF8C912C40AA_Class_2_6BE772A579E2B740;
class Class_2_76556925F684DAD5;
class Class_2_C83BF0782BE028DB;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw; }

#define CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13641140)
#define CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8_GET_THROWDIRECTION_OFFSET UNITYSDK_OFFSET(0x13641120)
#define CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8_METHOD_2_9F81764D12A93B19_OFFSET UNITYSDK_OFFSET(0x136411B0)
#define CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8__CTOR_OFFSET UNITYSDK_OFFSET(0x13640FC0)
#define CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13641250)

inline static constexpr unsigned int Class_2_76556925F684DAD5_Class_2_2EA8BF41BE0ADCB8_TypeDefinitionIndex = 64812;

class Class_2_76556925F684DAD5_Class_2_2EA8BF41BE0ADCB8 : public ::Class_2_76556925F684DAD5_Class_1_9F59B1C537F88FE7
{
public:
	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw* Field_2_0; // 0x10
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

	::System::Void Method_2_9F81764D12A93B19(::Class_2_C83BF0782BE028DB* a1, ::Class_1_EFECBF8C912C40AA_Class_2_6BE772A579E2B740* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C83BF0782BE028DB*, ::Class_1_EFECBF8C912C40AA_Class_2_6BE772A579E2B740*))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8_METHOD_2_9F81764D12A93B19_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
