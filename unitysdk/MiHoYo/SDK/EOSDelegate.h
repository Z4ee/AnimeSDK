#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class EOSDelegate_CheckEntitlementsDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_GetProductListDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_InitDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_IsEOSChannelDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_LogReportEpicDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_LoginDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_PayDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_QueryEOSProductDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_SetCmdLineDelegate; }

#define MIHOYO_SDK_EOSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B0150)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_TypeDefinitionIndex = 19821;

	class EOSDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::EOSDelegate_LogReportEpicDelegate** StaticGet_LogReportEOS()
		{
			return (::MiHoYo::SDK::EOSDelegate_LogReportEpicDelegate**)Il2CppClass::FromTypeDefinitionIndex(EOSDelegate_TypeDefinitionIndex)->GetStaticField(0xA9D0);
		}
		static ::MiHoYo::SDK::EOSDelegate_SetCmdLineDelegate** StaticGet_SetCmdLine()
		{
			return (::MiHoYo::SDK::EOSDelegate_SetCmdLineDelegate**)Il2CppClass::FromTypeDefinitionIndex(EOSDelegate_TypeDefinitionIndex)->GetStaticField(0xA9D8);
		}
		static ::MiHoYo::SDK::EOSDelegate_CheckEntitlementsDelegate** StaticGet_CheckEntitlements()
		{
			return (::MiHoYo::SDK::EOSDelegate_CheckEntitlementsDelegate**)Il2CppClass::FromTypeDefinitionIndex(EOSDelegate_TypeDefinitionIndex)->GetStaticField(0xA9E0);
		}
		static ::MiHoYo::SDK::EOSDelegate_LoginDelegate** StaticGet_Login()
		{
			return (::MiHoYo::SDK::EOSDelegate_LoginDelegate**)Il2CppClass::FromTypeDefinitionIndex(EOSDelegate_TypeDefinitionIndex)->GetStaticField(0xA9E8);
		}
		static ::MiHoYo::SDK::EOSDelegate_GetProductListDelegate** StaticGet_GetProductList()
		{
			return (::MiHoYo::SDK::EOSDelegate_GetProductListDelegate**)Il2CppClass::FromTypeDefinitionIndex(EOSDelegate_TypeDefinitionIndex)->GetStaticField(0xA9F0);
		}
		static ::MiHoYo::SDK::EOSDelegate_IsEOSChannelDelegate** StaticGet_IsEOSChannel()
		{
			return (::MiHoYo::SDK::EOSDelegate_IsEOSChannelDelegate**)Il2CppClass::FromTypeDefinitionIndex(EOSDelegate_TypeDefinitionIndex)->GetStaticField(0xA9F8);
		}
		static ::MiHoYo::SDK::EOSDelegate_PayDelegate** StaticGet_Pay()
		{
			return (::MiHoYo::SDK::EOSDelegate_PayDelegate**)Il2CppClass::FromTypeDefinitionIndex(EOSDelegate_TypeDefinitionIndex)->GetStaticField(0xAA00);
		}
		static ::MiHoYo::SDK::EOSDelegate_InitDelegate** StaticGet_Init()
		{
			return (::MiHoYo::SDK::EOSDelegate_InitDelegate**)Il2CppClass::FromTypeDefinitionIndex(EOSDelegate_TypeDefinitionIndex)->GetStaticField(0xAA08);
		}
		static ::MiHoYo::SDK::EOSDelegate_QueryEOSProductDelegate** StaticGet_QueryEOSProduct()
		{
			return (::MiHoYo::SDK::EOSDelegate_QueryEOSProductDelegate**)Il2CppClass::FromTypeDefinitionIndex(EOSDelegate_TypeDefinitionIndex)->GetStaticField(0xAA10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE__CTOR_OFFSET))(this);
		}
	};
}
