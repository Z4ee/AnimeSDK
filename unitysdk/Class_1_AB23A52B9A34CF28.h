#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_AB23A52B9A34CF28_METHOD_1_1AD51778485AD495_OFFSET UNITYSDK_OFFSET(0xECBED90)
#define CLASS_1_AB23A52B9A34CF28_METHOD_1_3AE0903B42435E60_OFFSET UNITYSDK_OFFSET(0xECBF060)
#define CLASS_1_AB23A52B9A34CF28_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xECBEF10)
#define CLASS_1_AB23A52B9A34CF28_METHOD_1_F31751E85D234B4D_OFFSET UNITYSDK_OFFSET(0xECBF480)
#define CLASS_1_AB23A52B9A34CF28__CTOR_OFFSET UNITYSDK_OFFSET(0xECBF650)

inline static constexpr unsigned int Class_1_AB23A52B9A34CF28_TypeDefinitionIndex = 67534;

class Class_1_AB23A52B9A34CF28 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_3; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::RPG::GameCore::GameEntity* Field_1_1; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB23A52B9A34CF28__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1AD51778485AD495(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB23A52B9A34CF28_METHOD_1_1AD51778485AD495_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB23A52B9A34CF28_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_3AE0903B42435E60(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB23A52B9A34CF28_METHOD_1_3AE0903B42435E60_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F31751E85D234B4D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB23A52B9A34CF28_METHOD_1_F31751E85D234B4D_OFFSET))(this, a1);
	}
};
