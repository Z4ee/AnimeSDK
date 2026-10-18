#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define MIHOYO_SDK_CONSOLE_COMBOMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC5D760)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5D7A0)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER___C__REQUESTREDPOINT_B__21_0_OFFSET UNITYSDK_OFFSET(0x1BC5D800)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER___C__SIGNCOMBOBODY_B__16_0_OFFSET UNITYSDK_OFFSET(0x1BC5D7B0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ComboManager___c_TypeDefinitionIndex = 8970;

	class ComboManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::String*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x55800);
		}
		static ::MiHoYo::SDK::Console::ComboManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::ComboManager___c**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x55808);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__21_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x55810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SignComboBody_b__16_0(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER___C__SIGNCOMBOBODY_B__16_0_OFFSET))(this, a1, a2);
		}

		::System::Void _RequestRedPoint_b__21_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER___C__REQUESTREDPOINT_B__21_0_OFFSET))(this, a1);
		}
	};
}
