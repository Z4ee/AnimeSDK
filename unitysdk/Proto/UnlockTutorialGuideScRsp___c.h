#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class UnlockTutorialGuideScRsp; }

#define PROTO_UNLOCKTUTORIALGUIDESCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A131150)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A131180)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A131190)

namespace Proto
{
	inline static constexpr unsigned int UnlockTutorialGuideScRsp___c_TypeDefinitionIndex = 33258;

	class UnlockTutorialGuideScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::UnlockTutorialGuideScRsp___c** StaticGet___9()
		{
			return (::Proto::UnlockTutorialGuideScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(UnlockTutorialGuideScRsp___c_TypeDefinitionIndex)->GetStaticField(0x467A0);
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
