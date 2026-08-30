#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Product; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PAYMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDA49DA0)
#define RPG_CLIENT_PAYMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDA49DE0)
#define RPG_CLIENT_PAYMODULE___C__GET_ALLHCOINPRODUCTS_B__41_0_OFFSET UNITYSDK_OFFSET(0xDA49DF0)
#define RPG_CLIENT_PAYMODULE___C__GET_MONTHCARDPRODUCT_B__43_0_OFFSET UNITYSDK_OFFSET(0xDA49E60)

namespace RPG::Client
{
	inline static constexpr unsigned int PayModule___c_TypeDefinitionIndex = 66465;

	class PayModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::Product*, ::System::Boolean>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::RPG::Client::Product*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PayModule___c_TypeDefinitionIndex)->GetStaticField(0x49BB0);
		}
		static ::System::Func_2<::RPG::Client::Product*, ::System::Boolean>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::RPG::Client::Product*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PayModule___c_TypeDefinitionIndex)->GetStaticField(0x49BB8);
		}
		static ::RPG::Client::PayModule___c** StaticGet___9()
		{
			return (::RPG::Client::PayModule___c**)Il2CppClass::FromTypeDefinitionIndex(PayModule___c_TypeDefinitionIndex)->GetStaticField(0x49BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_AllHcoinProducts_b__41_0(::RPG::Client::Product* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Product*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__GET_ALLHCOINPRODUCTS_B__41_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_MonthCardProduct_b__43_0(::RPG::Client::Product* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Product*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__GET_MONTHCARDPRODUCT_B__43_0_OFFSET))(this, a1);
		}
	};
}
