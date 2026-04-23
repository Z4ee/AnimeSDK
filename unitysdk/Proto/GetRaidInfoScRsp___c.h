#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class GetRaidInfoScRsp; }

#define PROTO_GETRAIDINFOSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1933E450)
#define PROTO_GETRAIDINFOSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1933E480)
#define PROTO_GETRAIDINFOSCRSP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1933E490)

namespace Proto
{
	inline static constexpr unsigned int GetRaidInfoScRsp___c_TypeDefinitionIndex = 30363;

	class GetRaidInfoScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::GetRaidInfoScRsp___c** StaticGet___9()
		{
			return (::Proto::GetRaidInfoScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(GetRaidInfoScRsp___c_TypeDefinitionIndex)->GetStaticField(0x63CD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::GetRaidInfoScRsp* __cctor_b__38_0()
		{
			return ((::Proto::GetRaidInfoScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP___C___CCTOR_B__38_0_OFFSET))(this);
		}
	};
}
