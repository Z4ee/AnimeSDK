#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ReactionItemConfig; }
namespace RPG::GameCore { class StimulusItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GLOBALREACTIONPARAMETER_METHOD_2_21DACADD96880816_OFFSET UNITYSDK_OFFSET(0x1D95AD80)
#define RPG_GAMECORE_GLOBALREACTIONPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D95AED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalReactionParameter_TypeDefinitionIndex = 15465;

	class GlobalReactionParameter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ReactionItemConfig*>* ReactionMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::StimulusItemConfig*>* StimulusMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALREACTIONPARAMETER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_21DACADD96880816(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalReactionParameter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalReactionParameter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALREACTIONPARAMETER_METHOD_2_21DACADD96880816_OFFSET))(a1, a2);
		}
	};
}
