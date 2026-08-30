#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BabelfishConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_TRANSLATESERVICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD44910)
#define MIHOYO_SDK_TRANSLATESERVICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD44950)
#define MIHOYO_SDK_TRANSLATESERVICE___C__INIT_B__33_0_OFFSET UNITYSDK_OFFSET(0x1CD44960)
#define MIHOYO_SDK_TRANSLATESERVICE___C__INIT_B__33_1_OFFSET UNITYSDK_OFFSET(0x1CD44A10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TranslateService___c_TypeDefinitionIndex = 47043;

	class TranslateService___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::Int32, ::System::String*>** StaticGet___9__33_1()
		{
			return (::System::Action_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TranslateService___c_TypeDefinitionIndex)->GetStaticField(0x5E190);
		}
		static ::MiHoYo::SDK::TranslateService___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::TranslateService___c**)Il2CppClass::FromTypeDefinitionIndex(TranslateService___c_TypeDefinitionIndex)->GetStaticField(0x5E198);
		}
		static ::System::Action_1<::MiHoYo::SDK::BabelfishConfig*>** StaticGet___9__33_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::BabelfishConfig*>**)Il2CppClass::FromTypeDefinitionIndex(TranslateService___c_TypeDefinitionIndex)->GetStaticField(0x5E1A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__33_0(::MiHoYo::SDK::BabelfishConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::BabelfishConfig*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__INIT_B__33_0_OFFSET))(this, a1);
		}

		::System::Void _Init_b__33_1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__INIT_B__33_1_OFFSET))(this, a1, a2);
		}
	};
}
