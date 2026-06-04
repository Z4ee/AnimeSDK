#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_39;
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_DA26F2BB73BDCDDE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C229E0)

inline static constexpr unsigned int Class_1_DA26F2BB73BDCDDE_TypeDefinitionIndex = 40310;

class Class_1_DA26F2BB73BDCDDE : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_43BD383C98B4C0C5_39* Field_1_1; // 0x18
	::UnityEngine::Animator* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA26F2BB73BDCDDE__CTOR_OFFSET))(this);
	}
};
