#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class GetTutorialScRsp; }

#define PROTO_GETTUTORIALSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD3C800)
#define PROTO_GETTUTORIALSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3C830)
#define PROTO_GETTUTORIALSCRSP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DD3C840)

namespace Proto
{
	inline static constexpr unsigned int GetTutorialScRsp___c_TypeDefinitionIndex = 34379;

	class GetTutorialScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::GetTutorialScRsp___c** StaticGet___9()
		{
			return (::Proto::GetTutorialScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(GetTutorialScRsp___c_TypeDefinitionIndex)->GetStaticField(0x5B6C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::GetTutorialScRsp* __cctor_b__28_0()
		{
			return ((::Proto::GetTutorialScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALSCRSP___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
