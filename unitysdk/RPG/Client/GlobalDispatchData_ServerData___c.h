#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD9B3B0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD9B3E0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA___C__SETDISPATCHURLS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1AD9B3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalDispatchData_ServerData___c_TypeDefinitionIndex = 69353;

	class GlobalDispatchData_ServerData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GlobalDispatchData_ServerData___c** StaticGet___9()
		{
			return (::RPG::Client::GlobalDispatchData_ServerData___c**)Il2CppClass::FromTypeDefinitionIndex(GlobalDispatchData_ServerData___c_TypeDefinitionIndex)->GetStaticField(0x1A710);
		}
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GlobalDispatchData_ServerData___c_TypeDefinitionIndex)->GetStaticField(0x1A718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetDispatchUrls_b__2_0(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA___C__SETDISPATCHURLS_B__2_0_OFFSET))(this, a1);
		}
	};
}
