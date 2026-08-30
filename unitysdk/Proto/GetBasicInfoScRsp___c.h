#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class GetBasicInfoScRsp; }

#define PROTO_GETBASICINFOSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD372F0)
#define PROTO_GETBASICINFOSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD37320)
#define PROTO_GETBASICINFOSCRSP___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1DD37330)

namespace Proto
{
	inline static constexpr unsigned int GetBasicInfoScRsp___c_TypeDefinitionIndex = 31399;

	class GetBasicInfoScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::GetBasicInfoScRsp___c** StaticGet___9()
		{
			return (::Proto::GetBasicInfoScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(GetBasicInfoScRsp___c_TypeDefinitionIndex)->GetStaticField(0x5AAB0);
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
