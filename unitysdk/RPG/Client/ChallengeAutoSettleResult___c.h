#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4F01A0)
#define RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F01E0)
#define RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C__ISVALID_B__3_0_OFFSET UNITYSDK_OFFSET(0xB4F01F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeAutoSettleResult___c_TypeDefinitionIndex = 59048;

	class ChallengeAutoSettleResult___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChallengeAutoSettleResult___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengeAutoSettleResult___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeAutoSettleResult___c_TypeDefinitionIndex)->GetStaticField(0x5B140);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeAutoSettleResult___c_TypeDefinitionIndex)->GetStaticField(0x5B148);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsValid_b__3_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C__ISVALID_B__3_0_OFFSET))(this, a1);
		}
	};
}
