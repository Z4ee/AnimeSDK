#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define MIHOYO_SDK_PS_COMBOMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF52AC0)
#define MIHOYO_SDK_PS_COMBOMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF52B00)
#define MIHOYO_SDK_PS_COMBOMANAGER___C__REQUESTREDPOINT_B__20_0_OFFSET UNITYSDK_OFFSET(0x1BF52B60)
#define MIHOYO_SDK_PS_COMBOMANAGER___C__SIGNCOMBOBODY_B__15_0_OFFSET UNITYSDK_OFFSET(0x1BF52B10)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int ComboManager___c_TypeDefinitionIndex = 8906;

	class ComboManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::ComboManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PS::ComboManager___c**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x182C0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__20_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x182C8);
		}
		static ::System::Comparison_1<::System::String*>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x182D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SignComboBody_b__15_0(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__SIGNCOMBOBODY_B__15_0_OFFSET))(this, a1, a2);
		}

		::System::Void _RequestRedPoint_b__20_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__REQUESTREDPOINT_B__20_0_OFFSET))(this, a1);
		}
	};
}
