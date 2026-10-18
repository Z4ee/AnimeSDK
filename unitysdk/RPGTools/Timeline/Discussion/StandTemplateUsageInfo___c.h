#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::Timeline::Discussion { class StandSlotUsageInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPGTOOLS_TIMELINE_DISCUSSION_STANDTEMPLATEUSAGEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE8D1CA0)
#define RPGTOOLS_TIMELINE_DISCUSSION_STANDTEMPLATEUSAGEINFO___C__CLONE_B__11_0_OFFSET UNITYSDK_OFFSET(0xE8D1CF0)
#define RPGTOOLS_TIMELINE_DISCUSSION_STANDTEMPLATEUSAGEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE8D1CE0)

namespace RPGTools::Timeline::Discussion
{
	inline static constexpr unsigned int StandTemplateUsageInfo___c_TypeDefinitionIndex = 48780;

	class StandTemplateUsageInfo___c : public ::System::Object
	{
	public:
		static ::RPGTools::Timeline::Discussion::StandTemplateUsageInfo___c** StaticGet___9()
		{
			return (::RPGTools::Timeline::Discussion::StandTemplateUsageInfo___c**)Il2CppClass::FromTypeDefinitionIndex(StandTemplateUsageInfo___c_TypeDefinitionIndex)->GetStaticField(0x6FB20);
		}
		static ::System::Func_2<::RPGTools::Timeline::Discussion::StandSlotUsageInfo*, ::RPGTools::Timeline::Discussion::StandSlotUsageInfo*>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPGTools::Timeline::Discussion::StandSlotUsageInfo*, ::RPGTools::Timeline::Discussion::StandSlotUsageInfo*>**)Il2CppClass::FromTypeDefinitionIndex(StandTemplateUsageInfo___c_TypeDefinitionIndex)->GetStaticField(0x6FB28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_STANDTEMPLATEUSAGEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_STANDTEMPLATEUSAGEINFO___C__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Discussion::StandSlotUsageInfo* _Clone_b__11_0(::RPGTools::Timeline::Discussion::StandSlotUsageInfo* a1)
		{
			return ((::RPGTools::Timeline::Discussion::StandSlotUsageInfo*(*)(::PVOID, ::RPGTools::Timeline::Discussion::StandSlotUsageInfo*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_STANDTEMPLATEUSAGEINFO___C__CLONE_B__11_0_OFFSET))(this, a1);
		}
	};
}
