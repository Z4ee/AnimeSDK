#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class UpdateFeatureSwitchScNotify; }

#define PROTO_UPDATEFEATURESWITCHSCNOTIFY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFEE7A0)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEE7D0)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFEE7E0)

namespace Proto
{
	inline static constexpr unsigned int UpdateFeatureSwitchScNotify___c_TypeDefinitionIndex = 32097;

	class UpdateFeatureSwitchScNotify___c : public ::System::Object
	{
	public:
		static ::Proto::UpdateFeatureSwitchScNotify___c** StaticGet___9()
		{
			return (::Proto::UpdateFeatureSwitchScNotify___c**)Il2CppClass::FromTypeDefinitionIndex(UpdateFeatureSwitchScNotify___c_TypeDefinitionIndex)->GetStaticField(0x4F1F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY___C__CTOR_OFFSET))(this);
		}

		::Proto::UpdateFeatureSwitchScNotify* __cctor_b__23_0()
		{
			return ((::Proto::UpdateFeatureSwitchScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY___C___CCTOR_B__23_0_OFFSET))(this);
		}
	};
}
