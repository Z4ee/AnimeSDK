#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define MIHOYO_SDK_PS_COMBOMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD11400)
#define MIHOYO_SDK_PS_COMBOMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD11440)
#define MIHOYO_SDK_PS_COMBOMANAGER___C__REQUESTREDPOINT_B__19_0_OFFSET UNITYSDK_OFFSET(0x1CD114C0)
#define MIHOYO_SDK_PS_COMBOMANAGER___C__SIGNCOMBOBODY_B__14_0_OFFSET UNITYSDK_OFFSET(0x1CD11450)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int ComboManager___c_TypeDefinitionIndex = 20998;

	class ComboManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::String*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0xA5B0);
		}
		static ::MiHoYo::SDK::PS::ComboManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PS::ComboManager___c**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0xA5B8);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__19_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0xA5C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SignComboBody_b__14_0(::System::String* x, ::System::String* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__SIGNCOMBOBODY_B__14_0_OFFSET))(this, x, y);
		}

		::System::Void _RequestRedPoint_b__19_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__REQUESTREDPOINT_B__19_0_OFFSET))(this, response);
		}
	};
}
