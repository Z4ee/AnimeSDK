#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A776E70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A776EB0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueHintPopupWindows___c_TypeDefinitionIndex = 75467;

	class LimaoNewsIssueHintPopupWindows___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsIssueHintPopupWindows___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsIssueHintPopupWindows___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsIssueHintPopupWindows___c_TypeDefinitionIndex)->GetStaticField(0x36870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS___C__CTOR_OFFSET))(this);
		}
	};
}
