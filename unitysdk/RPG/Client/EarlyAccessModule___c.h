#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EarlyAccessContent; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_EARLYACCESSMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1AF6A0)
#define RPG_CLIENT_EARLYACCESSMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA1AF6D0)
#define RPG_CLIENT_EARLYACCESSMODULE___C__GETDOINGCONTENT_B__14_0_OFFSET UNITYSDK_OFFSET(0xA1AF700)
#define RPG_CLIENT_EARLYACCESSMODULE___C__SENDEARLYACCESSDATA_B__9_0_OFFSET UNITYSDK_OFFSET(0xA1AF6E0)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessModule___c_TypeDefinitionIndex = 58642;

	class EarlyAccessModule___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::EarlyAccessContent*>** StaticGet___9__14_0()
		{
			return (::System::Predicate_1<::RPG::Client::EarlyAccessContent*>**)Il2CppClass::FromTypeDefinitionIndex(EarlyAccessModule___c_TypeDefinitionIndex)->GetStaticField(0x678F0);
		}
		static ::RPG::Client::EarlyAccessModule___c** StaticGet___9()
		{
			return (::RPG::Client::EarlyAccessModule___c**)Il2CppClass::FromTypeDefinitionIndex(EarlyAccessModule___c_TypeDefinitionIndex)->GetStaticField(0x678F8);
		}
		static ::System::Func_2<::RPG::Client::EarlyAccessContent*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::EarlyAccessContent*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(EarlyAccessModule___c_TypeDefinitionIndex)->GetStaticField(0x67900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _SendEarlyAccessData_b__9_0(::RPG::Client::EarlyAccessContent* content)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::EarlyAccessContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__SENDEARLYACCESSDATA_B__9_0_OFFSET))(this, content);
		}

		::System::Boolean _GetDoingContent_b__14_0(::RPG::Client::EarlyAccessContent* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EarlyAccessContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__GETDOINGCONTENT_B__14_0_OFFSET))(this, x);
		}
	};
}
