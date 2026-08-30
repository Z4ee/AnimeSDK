#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define MIHOYO_SDK_PS_COMBOMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA48F30)
#define MIHOYO_SDK_PS_COMBOMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA48F70)
#define MIHOYO_SDK_PS_COMBOMANAGER___C__REQUESTREDPOINT_B__19_0_OFFSET UNITYSDK_OFFSET(0x1BA48FD0)
#define MIHOYO_SDK_PS_COMBOMANAGER___C__SIGNCOMBOBODY_B__14_0_OFFSET UNITYSDK_OFFSET(0x1BA48F80)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int ComboManager___c_TypeDefinitionIndex = 8845;

	class ComboManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::String*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x21EC0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__19_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x21EC8);
		}
		static ::MiHoYo::SDK::PS::ComboManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PS::ComboManager___c**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x21ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SignComboBody_b__14_0(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__SIGNCOMBOBODY_B__14_0_OFFSET))(this, a1, a2);
		}

		::System::Void _RequestRedPoint_b__19_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__REQUESTREDPOINT_B__19_0_OFFSET))(this, a1);
		}
	};
}
