#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonsterAnimatorBoolParam.h"
#include "unitysdk/MoleMole/MonsterAnimatorFloatParam.h"
#include "unitysdk/MoleMole/MonsterAnimatorIntParam.h"
#include "unitysdk/MoleMole/MonsterAnimatorTriggerParam.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONSTERSPECIALIDLEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x179249F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterSpecialIdleEntry_TypeDefinitionIndex = 72742;

	class MonsterSpecialIdleEntry : public ::System::Object
	{
	public:
		::System::Int32 SpecialIdleKey; // 0x10
		::System::String* SpecialIdleName; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::MonsterAnimatorTriggerParam>* AnimatorTriggerParams; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::MonsterAnimatorBoolParam>* AnimatorBoolParams; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::MonsterAnimatorIntParam>* AnimatorIntParams; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::MonsterAnimatorFloatParam>* AnimatorFloatParams; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERSPECIALIDLEENTRY__CTOR_OFFSET))(this);
		}
	};
}
