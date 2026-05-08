#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BoolValueGetterType.h"
#include "unitysdk/NPCCrowd/AI/FloatValueGetterType.h"
#include "unitysdk/NPCCrowd/AI/IntValueGetterType.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class BoolValueGetterDelegate; }
namespace NPCCrowd::AI { class FloatValueGetterDelegate; }
namespace NPCCrowd::AI { class IntValueGetterDelegate; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_AI_CROWDVALUEGETTER_TEMPLELEVELGETTER_OFFSET UNITYSDK_OFFSET(0xD0BCDD0)
#define NPCCROWD_AI_CROWDVALUEGETTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0BCEC0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CrowdValueGetter_TypeDefinitionIndex = 56902;

	class CrowdValueGetter : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::NPCCrowd::AI::IntValueGetterType, ::NPCCrowd::AI::IntValueGetterDelegate*>** StaticGet_IntValueGetter()
		{
			return (::System::Collections::Generic::Dictionary_2<::NPCCrowd::AI::IntValueGetterType, ::NPCCrowd::AI::IntValueGetterDelegate*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdValueGetter_TypeDefinitionIndex)->GetStaticField(0x357F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::NPCCrowd::AI::FloatValueGetterType, ::NPCCrowd::AI::FloatValueGetterDelegate*>** StaticGet_FloatValueGetter()
		{
			return (::System::Collections::Generic::Dictionary_2<::NPCCrowd::AI::FloatValueGetterType, ::NPCCrowd::AI::FloatValueGetterDelegate*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdValueGetter_TypeDefinitionIndex)->GetStaticField(0x357F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::NPCCrowd::AI::BoolValueGetterType, ::NPCCrowd::AI::BoolValueGetterDelegate*>** StaticGet_BoolValueGetter()
		{
			return (::System::Collections::Generic::Dictionary_2<::NPCCrowd::AI::BoolValueGetterType, ::NPCCrowd::AI::BoolValueGetterDelegate*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdValueGetter_TypeDefinitionIndex)->GetStaticField(0x35800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDVALUEGETTER__CCTOR_OFFSET))();
		}

		static ::System::Int32 TempleLevelGetter()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDVALUEGETTER_TEMPLELEVELGETTER_OFFSET))();
		}
	};
}
