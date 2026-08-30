#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class GetMissionStatusScRsp; }

#define PROTO_GETMISSIONSTATUSSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9605C0)
#define PROTO_GETMISSIONSTATUSSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9605F0)
#define PROTO_GETMISSIONSTATUSSCRSP___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1D960600)

namespace Proto
{
	inline static constexpr unsigned int GetMissionStatusScRsp___c_TypeDefinitionIndex = 30385;

	class GetMissionStatusScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::GetMissionStatusScRsp___c** StaticGet___9()
		{
			return (::Proto::GetMissionStatusScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(GetMissionStatusScRsp___c_TypeDefinitionIndex)->GetStaticField(0x59520);
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
