#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class GetBasicInfoScRsp; }

#define PROTO_GETBASICINFOSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF818D0)
#define PROTO_GETBASICINFOSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF81900)
#define PROTO_GETBASICINFOSCRSP___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1BF81910)

namespace Proto
{
	inline static constexpr unsigned int GetBasicInfoScRsp___c_TypeDefinitionIndex = 30658;

	class GetBasicInfoScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::GetBasicInfoScRsp___c** StaticGet___9()
		{
			return (::Proto::GetBasicInfoScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(GetBasicInfoScRsp___c_TypeDefinitionIndex)->GetStaticField(0x3C7F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::GetBasicInfoScRsp* __cctor_b__68_0()
		{
			return ((::Proto::GetBasicInfoScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP___C___CCTOR_B__68_0_OFFSET))(this);
		}
	};
}
