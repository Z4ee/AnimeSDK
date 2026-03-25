#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_OPEUTIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EA03C0)
#define RPG_CLIENT_OPEUTIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9EA0400)
#define RPG_CLIENT_OPEUTIL___C__OPENGACHAHISTORYURL_B__55_0_OFFSET UNITYSDK_OFFSET(0x9EA0410)

namespace RPG::Client
{
	inline static constexpr unsigned int OpeUtil___c_TypeDefinitionIndex = 47962;

	class OpeUtil___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::String*>** StaticGet___9__55_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil___c_TypeDefinitionIndex)->GetStaticField(0x44A90);
		}
		static ::RPG::Client::OpeUtil___c** StaticGet___9()
		{
			return (::RPG::Client::OpeUtil___c**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil___c_TypeDefinitionIndex)->GetStaticField(0x44A98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL___C__CTOR_OFFSET))(this);
		}

		::System::String* _OpenGachaHistoryURL_b__55_0(::System::UInt32 x)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL___C__OPENGACHAHISTORYURL_B__55_0_OFFSET))(this, x);
		}
	};
}
