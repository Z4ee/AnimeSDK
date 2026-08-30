#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMFINISHDELAYEDSEQUENCEACTION_METHOD_3_25A50A8A39AE8675_OFFSET UNITYSDK_OFFSET(0x1D85DF10)
#define RPG_GAMECORE_FIVEDIMFINISHDELAYEDSEQUENCEACTION_METHOD_3_AF7F56DF2665F738_OFFSET UNITYSDK_OFFSET(0x1D85DE50)
#define RPG_GAMECORE_FIVEDIMFINISHDELAYEDSEQUENCEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85DF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFinishDelayedSequenceAction_TypeDefinitionIndex = 18487;

	class FiveDimFinishDelayedSequenceAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* Name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFINISHDELAYEDSEQUENCEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AF7F56DF2665F738(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFinishDelayedSequenceAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFinishDelayedSequenceAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFINISHDELAYEDSEQUENCEACTION_METHOD_3_AF7F56DF2665F738_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_25A50A8A39AE8675(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFinishDelayedSequenceAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFinishDelayedSequenceAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFINISHDELAYEDSEQUENCEACTION_METHOD_3_25A50A8A39AE8675_OFFSET))(a1, a2);
		}
	};
}
