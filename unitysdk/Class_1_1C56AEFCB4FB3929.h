#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_1C56AEFCB4FB3929_METHOD_1_2856A0AE08E6B328_OFFSET UNITYSDK_OFFSET(0x121DE910)
#define CLASS_1_1C56AEFCB4FB3929_METHOD_1_33451B7B38D58352_OFFSET UNITYSDK_OFFSET(0x121DE9A0)
#define CLASS_1_1C56AEFCB4FB3929_METHOD_1_FBEEA17929CDB662_OFFSET UNITYSDK_OFFSET(0x121DE790)

inline static constexpr unsigned int Class_1_1C56AEFCB4FB3929_TypeDefinitionIndex = 54577;

class Class_1_1C56AEFCB4FB3929 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_FBEEA17929CDB662(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_1C56AEFCB4FB3929_METHOD_1_FBEEA17929CDB662_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2856A0AE08E6B328(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_1C56AEFCB4FB3929_METHOD_1_2856A0AE08E6B328_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_33451B7B38D58352(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_1C56AEFCB4FB3929_METHOD_1_33451B7B38D58352_OFFSET))(a1, a2, a3);
	}
};
