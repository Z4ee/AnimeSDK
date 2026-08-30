#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }

#define MIHOYO_SDK_SDKUTIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAD29C0)
#define MIHOYO_SDK_SDKUTIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD29F0)
#define MIHOYO_SDK_SDKUTIL___C__GETQUERYSTRING_B__10_0_OFFSET UNITYSDK_OFFSET(0x1BAD2AA0)
#define MIHOYO_SDK_SDKUTIL___C__SIGNCOMBOBODY_B__8_0_OFFSET UNITYSDK_OFFSET(0x1BAD2A50)
#define MIHOYO_SDK_SDKUTIL___C__SIGNMDKBODY_B__7_0_OFFSET UNITYSDK_OFFSET(0x1BAD2A00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKUtil___c_TypeDefinitionIndex = 8137;

	class SDKUtil___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::String*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SDKUtil___c_TypeDefinitionIndex)->GetStaticField(0x26260);
		}
		static ::System::Comparison_1<::System::String*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SDKUtil___c_TypeDefinitionIndex)->GetStaticField(0x26268);
		}
		static ::System::Comparison_1<::System::String*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SDKUtil___c_TypeDefinitionIndex)->GetStaticField(0x26270);
		}
		static ::MiHoYo::SDK::SDKUtil___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::SDKUtil___c**)Il2CppClass::FromTypeDefinitionIndex(SDKUtil___c_TypeDefinitionIndex)->GetStaticField(0x26278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SignMdkBody_b__7_0(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL___C__SIGNMDKBODY_B__7_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _SignComboBody_b__8_0(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL___C__SIGNCOMBOBODY_B__8_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetQueryString_b__10_0(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL___C__GETQUERYSTRING_B__10_0_OFFSET))(this, a1, a2);
		}
	};
}
