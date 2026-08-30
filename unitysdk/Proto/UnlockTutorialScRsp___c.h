#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class UnlockTutorialScRsp; }

#define PROTO_UNLOCKTUTORIALSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFA4BF0)
#define PROTO_UNLOCKTUTORIALSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA4C30)
#define PROTO_UNLOCKTUTORIALSCRSP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EFA4C40)

namespace Proto
{
	inline static constexpr unsigned int UnlockTutorialScRsp___c_TypeDefinitionIndex = 34387;

	class UnlockTutorialScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::UnlockTutorialScRsp___c** StaticGet___9()
		{
			return (::Proto::UnlockTutorialScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(UnlockTutorialScRsp___c_TypeDefinitionIndex)->GetStaticField(0x9F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::UnlockTutorialScRsp* __cctor_b__28_0()
		{
			return ((::Proto::UnlockTutorialScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
