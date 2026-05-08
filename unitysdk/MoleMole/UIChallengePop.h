#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_2_208CC9941471731A_807;
namespace System { class Action; }

#define MOLEMOLE_UICHALLENGEPOP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x16C9A350)
#define MOLEMOLE_UICHALLENGEPOP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x16C9A3B0)
#define MOLEMOLE_UICHALLENGEPOP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C9A360)

namespace MoleMole
{
	inline static constexpr unsigned int UIChallengePop_TypeDefinitionIndex = 48695;

	class UIChallengePop : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action* callback; // 0x28
		::Class_2_208CC9941471731A_807* template_; // 0x30

		::System::Void _ctor(::Class_2_208CC9941471731A_807* template_, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_807*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHALLENGEPOP__CTOR_OFFSET))(this, template_, callback);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHALLENGEPOP_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHALLENGEPOP_ONPROCESS_OFFSET))(this);
		}
	};
}
