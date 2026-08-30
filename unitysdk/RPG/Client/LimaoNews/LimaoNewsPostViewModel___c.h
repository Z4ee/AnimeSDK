#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4A7BA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A7BE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C__SHOWSUBMITTEDPOSTWINDOW_B__74_0_OFFSET UNITYSDK_OFFSET(0x1C4A7BF0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostViewModel___c_TypeDefinitionIndex = 79147;

	class LimaoNewsPostViewModel___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__74_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5DB00);
		}
		static ::RPG::Client::LimaoNews::LimaoNewsPostViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsPostViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5DB08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSubmittedPostWindow_b__74_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C__SHOWSUBMITTEDPOSTWINDOW_B__74_0_OFFSET))(this);
		}
	};
}
