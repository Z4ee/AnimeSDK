#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class FinishTutorialGuideScRsp; }

#define PROTO_FINISHTUTORIALGUIDESCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E060AE0)
#define PROTO_FINISHTUTORIALGUIDESCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E060B20)
#define PROTO_FINISHTUTORIALGUIDESCRSP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E060B30)

namespace Proto
{
	inline static constexpr unsigned int FinishTutorialGuideScRsp___c_TypeDefinitionIndex = 34399;

	class FinishTutorialGuideScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::FinishTutorialGuideScRsp___c** StaticGet___9()
		{
			return (::Proto::FinishTutorialGuideScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(FinishTutorialGuideScRsp___c_TypeDefinitionIndex)->GetStaticField(0x5A060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::FinishTutorialGuideScRsp* __cctor_b__33_0()
		{
			return ((::Proto::FinishTutorialGuideScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP___C___CCTOR_B__33_0_OFFSET))(this);
		}
	};
}
