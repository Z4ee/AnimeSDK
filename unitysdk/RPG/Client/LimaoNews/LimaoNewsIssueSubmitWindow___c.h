#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C542E80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C542EC0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueSubmitWindow___c_TypeDefinitionIndex = 79059;

	class LimaoNewsIssueSubmitWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsIssueSubmitWindow___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsIssueSubmitWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsIssueSubmitWindow___c_TypeDefinitionIndex)->GetStaticField(0x5B890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
