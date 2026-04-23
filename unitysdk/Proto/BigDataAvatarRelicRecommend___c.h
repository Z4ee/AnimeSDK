#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class BigDataAvatarRelicRecommend; }

#define PROTO_BIGDATAAVATARRELICRECOMMEND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1932E690)
#define PROTO_BIGDATAAVATARRELICRECOMMEND___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1932E6D0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1932E6E0)

namespace Proto
{
	inline static constexpr unsigned int BigDataAvatarRelicRecommend___c_TypeDefinitionIndex = 30456;

	class BigDataAvatarRelicRecommend___c : public ::System::Object
	{
	public:
		static ::Proto::BigDataAvatarRelicRecommend___c** StaticGet___9()
		{
			return (::Proto::BigDataAvatarRelicRecommend___c**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend___c_TypeDefinitionIndex)->GetStaticField(0x62CD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND___C__CTOR_OFFSET))(this);
		}

		::Proto::BigDataAvatarRelicRecommend* __cctor_b__53_0()
		{
			return ((::Proto::BigDataAvatarRelicRecommend*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND___C___CCTOR_B__53_0_OFFSET))(this);
		}
	};
}
