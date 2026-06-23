#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelConsumeResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6CAE70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CAEB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__PROCESSENTITLEMENT_B__17_1_OFFSET UNITYSDK_OFFSET(0x1B6CAED0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__VERIFYORDER_B__12_3_OFFSET UNITYSDK_OFFSET(0x1B6CAEC0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c_TypeDefinitionIndex = 20326;

	class HoYoChannelGooglePlay___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>** StaticGet___9__12_3()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGooglePlay___c_TypeDefinitionIndex)->GetStaticField(0x9D10);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelGooglePlay___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelGooglePlay___c**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGooglePlay___c_TypeDefinitionIndex)->GetStaticField(0x9D18);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>** StaticGet___9__17_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGooglePlay___c_TypeDefinitionIndex)->GetStaticField(0x9D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__CTOR_OFFSET))(this);
		}

		::System::Void _VerifyOrder_b__12_3(::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult* consumeResult)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__VERIFYORDER_B__12_3_OFFSET))(this, consumeResult);
		}

		::System::Void _ProcessEntitlement_b__17_1(::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult* consumeResult)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__PROCESSENTITLEMENT_B__17_1_OFFSET))(this, consumeResult);
		}
	};
}
