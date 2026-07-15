#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class UnlockTutorialGuideScRsp; }

#define PROTO_UNLOCKTUTORIALGUIDESCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2F31F0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F3220)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1D2F3230)

namespace Proto
{
	inline static constexpr unsigned int UnlockTutorialGuideScRsp___c_TypeDefinitionIndex = 33638;

	class UnlockTutorialGuideScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::UnlockTutorialGuideScRsp___c** StaticGet___9()
		{
			return (::Proto::UnlockTutorialGuideScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(UnlockTutorialGuideScRsp___c_TypeDefinitionIndex)->GetStaticField(0x8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::UnlockTutorialGuideScRsp* __cctor_b__28_0()
		{
			return ((::Proto::UnlockTutorialGuideScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
