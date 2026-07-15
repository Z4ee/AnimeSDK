#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class StrongChallengeAvatar; }

#define PROTO_STRONGCHALLENGEAVATAR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEF5760)
#define PROTO_STRONGCHALLENGEAVATAR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEF57A0)
#define PROTO_STRONGCHALLENGEAVATAR___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1BEF57B0)

namespace Proto
{
	inline static constexpr unsigned int StrongChallengeAvatar___c_TypeDefinitionIndex = 32846;

	class StrongChallengeAvatar___c : public ::System::Object
	{
	public:
		static ::Proto::StrongChallengeAvatar___c** StaticGet___9()
		{
			return (::Proto::StrongChallengeAvatar___c**)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeAvatar___c_TypeDefinitionIndex)->GetStaticField(0x40830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR___C__CTOR_OFFSET))(this);
		}

		::Proto::StrongChallengeAvatar* __cctor_b__28_0()
		{
			return ((::Proto::StrongChallengeAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
