#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class TakeQuestRewardScRsp; }

#define PROTO_TAKEQUESTREWARDSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEF99A0)
#define PROTO_TAKEQUESTREWARDSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEF99E0)
#define PROTO_TAKEQUESTREWARDSCRSP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1BEF99F0)

namespace Proto
{
	inline static constexpr unsigned int TakeQuestRewardScRsp___c_TypeDefinitionIndex = 30952;

	class TakeQuestRewardScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::TakeQuestRewardScRsp___c** StaticGet___9()
		{
			return (::Proto::TakeQuestRewardScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(TakeQuestRewardScRsp___c_TypeDefinitionIndex)->GetStaticField(0x40EB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::TakeQuestRewardScRsp* __cctor_b__38_0()
		{
			return ((::Proto::TakeQuestRewardScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP___C___CCTOR_B__38_0_OFFSET))(this);
		}
	};
}
