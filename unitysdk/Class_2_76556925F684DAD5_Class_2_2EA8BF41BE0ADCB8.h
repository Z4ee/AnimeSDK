#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_76556925F684DAD5_Class_1_7378FCB590CC7F2E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F7445212B44E5397_Class_2_F5A9AC62CB261A91;
class Class_2_5583FD8A3512B20B;
class Class_2_76556925F684DAD5;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw; }

#define CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11559080)
#define CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8_GET_THROWDIRECTION_OFFSET UNITYSDK_OFFSET(0x11559060)
#define CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8_METHOD_2_9F81764D12A93B19_OFFSET UNITYSDK_OFFSET(0x115590F0)
#define CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8__CTOR_OFFSET UNITYSDK_OFFSET(0x11558EF0)
#define CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11559190)

inline static constexpr unsigned int Class_2_76556925F684DAD5_Class_2_2EA8BF41BE0ADCB8_TypeDefinitionIndex = 56647;

class Class_2_76556925F684DAD5_Class_2_2EA8BF41BE0ADCB8 : public ::Class_2_76556925F684DAD5_Class_1_7378FCB590CC7F2E
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

	::System::Void Method_2_9F81764D12A93B19(::Class_2_5583FD8A3512B20B* a1, ::Class_1_F7445212B44E5397_Class_2_F5A9AC62CB261A91* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5583FD8A3512B20B*, ::Class_1_F7445212B44E5397_Class_2_F5A9AC62CB261A91*))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8_METHOD_2_9F81764D12A93B19_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_CLASS_2_2EA8BF41BE0ADCB8___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
