#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RenderTestPageContext_AnimationDropDownItem; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_RENDERTESTPAGECONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17398110)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17398150)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___C___INITANIMATIONDROPDOWN_B__55_0_OFFSET UNITYSDK_OFFSET(0x17398160)

namespace RPG::Client
{
	inline static constexpr unsigned int RenderTestPageContext___c_TypeDefinitionIndex = 69554;

	class RenderTestPageContext___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::RenderTestPageContext_AnimationDropDownItem*>** StaticGet___9__55_0()
		{
			return (::System::Comparison_1<::RPG::Client::RenderTestPageContext_AnimationDropDownItem*>**)Il2CppClass::FromTypeDefinitionIndex(RenderTestPageContext___c_TypeDefinitionIndex)->GetStaticField(0x21790);
		}
		static ::RPG::Client::RenderTestPageContext___c** StaticGet___9()
		{
			return (::RPG::Client::RenderTestPageContext___c**)Il2CppClass::FromTypeDefinitionIndex(RenderTestPageContext___c_TypeDefinitionIndex)->GetStaticField(0x21798);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitAnimationDropDown_b__55_0(::RPG::Client::RenderTestPageContext_AnimationDropDownItem* a1, ::RPG::Client::RenderTestPageContext_AnimationDropDownItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RenderTestPageContext_AnimationDropDownItem*, ::RPG::Client::RenderTestPageContext_AnimationDropDownItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___C___INITANIMATIONDROPDOWN_B__55_0_OFFSET))(this, a1, a2);
		}
	};
}
