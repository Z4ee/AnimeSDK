#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_89;
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_DA26F2BB73BDCDDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C906980)

inline static constexpr unsigned int Class_1_DA26F2BB73BDCDDE_TypeDefinitionIndex = 43727;

class Class_1_DA26F2BB73BDCDDE : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_89* CAHCLIMGPFF; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* PIELBNECIIN; // 0x18
	::UnityEngine::Animator* CKDKOONONCG; // 0x20
	::System::String* OIBKPJEGPOK; // 0x28
	::System::Single HMBJNEIEIJK; // 0x30
	::System::Single JDLCDAKNJKH; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA26F2BB73BDCDDE__CTOR_OFFSET))(this);
	}
};
