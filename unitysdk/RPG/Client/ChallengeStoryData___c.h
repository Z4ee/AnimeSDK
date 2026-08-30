#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGESTORYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD6E610)
#define RPG_CLIENT_CHALLENGESTORYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD6E650)
#define RPG_CLIENT_CHALLENGESTORYDATA___C__GETVORACITYINVASIONLEVEL_B__7_0_OFFSET UNITYSDK_OFFSET(0x1AD6E660)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeStoryData___c_TypeDefinitionIndex = 63215;

	class ChallengeStoryData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChallengeStoryData___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengeStoryData___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeStoryData___c_TypeDefinitionIndex)->GetStaticField(0x28CC0);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeStoryData___c_TypeDefinitionIndex)->GetStaticField(0x28CC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetVoracityInvasionLevel_b__7_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA___C__GETVORACITYINVASIONLEVEL_B__7_0_OFFSET))(this, a1);
		}
	};
}
