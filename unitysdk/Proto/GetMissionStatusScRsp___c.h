#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class GetMissionStatusScRsp; }

#define PROTO_GETMISSIONSTATUSSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1933D5C0)
#define PROTO_GETMISSIONSTATUSSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1933D5F0)
#define PROTO_GETMISSIONSTATUSSCRSP___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1933D600)

namespace Proto
{
	inline static constexpr unsigned int GetMissionStatusScRsp___c_TypeDefinitionIndex = 29135;

	class GetMissionStatusScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::GetMissionStatusScRsp___c** StaticGet___9()
		{
			return (::Proto::GetMissionStatusScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(GetMissionStatusScRsp___c_TypeDefinitionIndex)->GetStaticField(0x63BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::GetMissionStatusScRsp* __cctor_b__53_0()
		{
			return ((::Proto::GetMissionStatusScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP___C___CCTOR_B__53_0_OFFSET))(this);
		}
	};
}
