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

#define NPCCROWD_AI_CROWDVALUEGETTER_TEMPLELEVELGETTER_OFFSET UNITYSDK_OFFSET(0x11784330)
#define NPCCROWD_AI_CROWDVALUEGETTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11784420)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CrowdValueGetter_TypeDefinitionIndex = 53755;

	class CrowdValueGetter : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::NPCCrowd::AI::BoolValueGetterType, ::NPCCrowd::AI::BoolValueGetterDelegate*>** StaticGet_BoolValueGetter()
		{
			return (::System::Collections::Generic::Dictionary_2<::NPCCrowd::AI::BoolValueGetterType, ::NPCCrowd::AI::BoolValueGetterDelegate*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdValueGetter_TypeDefinitionIndex)->GetStaticField(0x38220);
		}
		static ::System::Collections::Generic::Dictionary_2<::NPCCrowd::AI::IntValueGetterType, ::NPCCrowd::AI::IntValueGetterDelegate*>** StaticGet_IntValueGetter()
		{
			return (::System::Collections::Generic::Dictionary_2<::NPCCrowd::AI::IntValueGetterType, ::NPCCrowd::AI::IntValueGetterDelegate*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdValueGetter_TypeDefinitionIndex)->GetStaticField(0x38228);
		}
		static ::System::Collections::Generic::Dictionary_2<::NPCCrowd::AI::FloatValueGetterType, ::NPCCrowd::AI::FloatValueGetterDelegate*>** StaticGet_FloatValueGetter()
		{
			return (::System::Collections::Generic::Dictionary_2<::NPCCrowd::AI::FloatValueGetterType, ::NPCCrowd::AI::FloatValueGetterDelegate*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdValueGetter_TypeDefinitionIndex)->GetStaticField(0x38230);
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
