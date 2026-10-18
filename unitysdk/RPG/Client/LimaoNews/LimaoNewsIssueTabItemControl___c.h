#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3B0D20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3B0D60)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueTabItemControl___c_TypeDefinitionIndex = 80392;

	class LimaoNewsIssueTabItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsIssueTabItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsIssueTabItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsIssueTabItemControl___c_TypeDefinitionIndex)->GetStaticField(0x1C8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
