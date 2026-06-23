#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181F2920)
#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181F2960)
#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__ONFINISHCHAT_B__37_0_OFFSET UNITYSDK_OFFSET(0x181F2970)

namespace MoleMole
{
	inline static constexpr unsigned int UIMixedStreamingPageController___c_TypeDefinitionIndex = 62917;

	class UIMixedStreamingPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__37_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMixedStreamingPageController___c_TypeDefinitionIndex)->GetStaticField(0x34830);
		}
		static ::MoleMole::UIMixedStreamingPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMixedStreamingPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMixedStreamingPageController___c_TypeDefinitionIndex)->GetStaticField(0x34838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnFinishChat_b__37_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__ONFINISHCHAT_B__37_0_OFFSET))(this);
		}
	};
}
