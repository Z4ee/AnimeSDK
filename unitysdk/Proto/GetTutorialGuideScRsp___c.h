#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class GetTutorialGuideScRsp; }

#define PROTO_GETTUTORIALGUIDESCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0F3550)
#define PROTO_GETTUTORIALGUIDESCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F3580)
#define PROTO_GETTUTORIALGUIDESCRSP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A0F3590)

namespace Proto
{
	inline static constexpr unsigned int GetTutorialGuideScRsp___c_TypeDefinitionIndex = 33250;

	class GetTutorialGuideScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::GetTutorialGuideScRsp___c** StaticGet___9()
		{
			return (::Proto::GetTutorialGuideScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(GetTutorialGuideScRsp___c_TypeDefinitionIndex)->GetStaticField(0x43970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::GetTutorialGuideScRsp* __cctor_b__28_0()
		{
			return ((::Proto::GetTutorialGuideScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
