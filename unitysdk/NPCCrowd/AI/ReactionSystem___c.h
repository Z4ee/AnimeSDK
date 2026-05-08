#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class CDCountItem; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_REACTIONSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D83A40)
#define NPCCROWD_AI_REACTIONSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D83A80)
#define NPCCROWD_AI_REACTIONSYSTEM___C___CTOR_B__24_0_OFFSET UNITYSDK_OFFSET(0x11D83A90)
#define NPCCROWD_AI_REACTIONSYSTEM___C___CTOR_B__24_1_OFFSET UNITYSDK_OFFSET(0x11D83B10)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ReactionSystem___c_TypeDefinitionIndex = 75277;

	class ReactionSystem___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::AI::ReactionSystem___c** StaticGet___9()
		{
			return (::NPCCrowd::AI::ReactionSystem___c**)Il2CppClass::FromTypeDefinitionIndex(ReactionSystem___c_TypeDefinitionIndex)->GetStaticField(0x42390);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::CDCountItem*>*>** StaticGet___9__24_0()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::CDCountItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(ReactionSystem___c_TypeDefinitionIndex)->GetStaticField(0x42398);
		}
		static ::System::Func_1<::NPCCrowd::AI::CDCountItem*>** StaticGet___9__24_1()
		{
			return (::System::Func_1<::NPCCrowd::AI::CDCountItem*>**)Il2CppClass::FromTypeDefinitionIndex(ReactionSystem___c_TypeDefinitionIndex)->GetStaticField(0x423A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::AI::CDCountItem*>* __ctor_b__24_0()
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::AI::CDCountItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM___C___CTOR_B__24_0_OFFSET))(this);
		}

		::NPCCrowd::AI::CDCountItem* __ctor_b__24_1()
		{
			return ((::NPCCrowd::AI::CDCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONSYSTEM___C___CTOR_B__24_1_OFFSET))(this);
		}
	};
}
