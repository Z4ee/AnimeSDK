#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

class Class_1_945ACFB1FEBC7A2C_17;
namespace RPGTools::Timeline { class CharacterFullBodyChainData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_3_61A13EAE4EEAED18_METHOD_3_0CACDFAF951A2118_OFFSET UNITYSDK_OFFSET(0x13755720)
#define CLASS_3_61A13EAE4EEAED18_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13755930)
#define CLASS_3_61A13EAE4EEAED18_METHOD_3_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x13754F40)
#define CLASS_3_61A13EAE4EEAED18_METHOD_3_EDB27C1AE53E0E20_OFFSET UNITYSDK_OFFSET(0x137555A0)
#define CLASS_3_61A13EAE4EEAED18__CTOR_OFFSET UNITYSDK_OFFSET(0x13755920)

inline static constexpr unsigned int Class_3_61A13EAE4EEAED18_TypeDefinitionIndex = 45261;

class Class_3_61A13EAE4EEAED18 : public ::RPGTools::Timeline::CustomEventBehaviour
{
public:
	::Class_1_945ACFB1FEBC7A2C_17* Field_3_0; // 0x20
	::Il2CppArray<::RPGTools::Timeline::CharacterFullBodyChainData*>* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A13EAE4EEAED18__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A13EAE4EEAED18_METHOD_3_AA7E3074254D484A_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_0CACDFAF951A2118(::UnityEngine::GameObject* a1, ::RPGTools::Timeline::CharacterFullBodyChainData* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPGTools::Timeline::CharacterFullBodyChainData*))((::PBYTE)hIl2Cpp + CLASS_3_61A13EAE4EEAED18_METHOD_3_0CACDFAF951A2118_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_3_EDB27C1AE53E0E20(::UnityEngine::GameObject* a1, ::RPGTools::Timeline::CharacterFullBodyChainData* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPGTools::Timeline::CharacterFullBodyChainData*))((::PBYTE)hIl2Cpp + CLASS_3_61A13EAE4EEAED18_METHOD_3_EDB27C1AE53E0E20_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A13EAE4EEAED18_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
