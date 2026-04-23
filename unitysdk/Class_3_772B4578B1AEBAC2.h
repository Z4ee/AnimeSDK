#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

class Class_1_945ACFB1FEBC7A2C_16;
namespace RPGTools::Timeline { class CharacterFullBodyChainData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_3_772B4578B1AEBAC2_METHOD_3_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x9609530)
#define CLASS_3_772B4578B1AEBAC2_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9609E70)
#define CLASS_3_772B4578B1AEBAC2_METHOD_3_85B99880C160E13F_OFFSET UNITYSDK_OFFSET(0x9609C40)
#define CLASS_3_772B4578B1AEBAC2_METHOD_3_EDB27C1AE53E0E20_OFFSET UNITYSDK_OFFSET(0x9609AC0)
#define CLASS_3_772B4578B1AEBAC2__CTOR_OFFSET UNITYSDK_OFFSET(0x9609E60)

inline static constexpr unsigned int Class_3_772B4578B1AEBAC2_TypeDefinitionIndex = 44714;

class Class_3_772B4578B1AEBAC2 : public ::RPGTools::Timeline::CustomEventBehaviour
{
public:
	::Il2CppArray<::RPGTools::Timeline::CharacterFullBodyChainData*>* Field_3_1; // 0x20
	::Class_1_945ACFB1FEBC7A2C_16* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_772B4578B1AEBAC2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_772B4578B1AEBAC2_METHOD_3_414C8F92528E4746_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_85B99880C160E13F(::UnityEngine::GameObject* a1, ::RPGTools::Timeline::CharacterFullBodyChainData* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPGTools::Timeline::CharacterFullBodyChainData*))((::PBYTE)hIl2Cpp + CLASS_3_772B4578B1AEBAC2_METHOD_3_85B99880C160E13F_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_3_EDB27C1AE53E0E20(::UnityEngine::GameObject* a1, ::RPGTools::Timeline::CharacterFullBodyChainData* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPGTools::Timeline::CharacterFullBodyChainData*))((::PBYTE)hIl2Cpp + CLASS_3_772B4578B1AEBAC2_METHOD_3_EDB27C1AE53E0E20_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_772B4578B1AEBAC2_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
