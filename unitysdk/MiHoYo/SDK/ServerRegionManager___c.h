#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MIHOYO_SDK_SERVERREGIONMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x199ADA00)
#define MIHOYO_SDK_SERVERREGIONMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x199ADA40)
#define MIHOYO_SDK_SERVERREGIONMANAGER___C___CTOR_B__31_0_OFFSET UNITYSDK_OFFSET(0x199ADA50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ServerRegionManager___c_TypeDefinitionIndex = 18833;

	class ServerRegionManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ServerRegionManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::ServerRegionManager___c**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager___c_TypeDefinitionIndex)->GetStaticField(0xB130);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__31_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager___c_TypeDefinitionIndex)->GetStaticField(0xB138);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__31_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER___C___CTOR_B__31_0_OFFSET))(this);
		}
	};
}
