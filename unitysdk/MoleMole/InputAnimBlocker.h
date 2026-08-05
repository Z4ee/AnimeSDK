#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_INPUTANIMBLOCKER__CTOR_OFFSET UNITYSDK_OFFSET(0x13845950)

namespace MoleMole
{
	inline static constexpr unsigned int InputAnimBlocker_TypeDefinitionIndex = 82792;

	class InputAnimBlocker : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* BlockAnimNameList; // 0x10
		::UnityEngine::Animation* Anim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTANIMBLOCKER__CTOR_OFFSET))(this);
		}
	};
}
