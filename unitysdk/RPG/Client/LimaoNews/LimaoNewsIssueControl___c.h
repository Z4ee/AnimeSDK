#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A774AA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A774AE0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueControl___c_TypeDefinitionIndex = 75483;

	class LimaoNewsIssueControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsIssueControl___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsIssueControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsIssueControl___c_TypeDefinitionIndex)->GetStaticField(0x367B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
