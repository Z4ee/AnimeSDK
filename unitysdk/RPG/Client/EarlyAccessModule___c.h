#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EarlyAccessContent; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_EARLYACCESSMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17726EA0)
#define RPG_CLIENT_EARLYACCESSMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17726ED0)
#define RPG_CLIENT_EARLYACCESSMODULE___C__GETDOINGCONTENT_B__17_0_OFFSET UNITYSDK_OFFSET(0x17726F00)
#define RPG_CLIENT_EARLYACCESSMODULE___C__SENDEARLYACCESSDATA_B__9_0_OFFSET UNITYSDK_OFFSET(0x17726EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessModule___c_TypeDefinitionIndex = 60856;

	class EarlyAccessModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::EarlyAccessModule___c** StaticGet___9()
		{
			return (::RPG::Client::EarlyAccessModule___c**)Il2CppClass::FromTypeDefinitionIndex(EarlyAccessModule___c_TypeDefinitionIndex)->GetStaticField(0x6B6A0);
		}
		static ::System::Func_2<::RPG::Client::EarlyAccessContent*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::EarlyAccessContent*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(EarlyAccessModule___c_TypeDefinitionIndex)->GetStaticField(0x6B6A8);
		}
		static ::System::Predicate_1<::RPG::Client::EarlyAccessContent*>** StaticGet___9__17_0()
		{
			return (::System::Predicate_1<::RPG::Client::EarlyAccessContent*>**)Il2CppClass::FromTypeDefinitionIndex(EarlyAccessModule___c_TypeDefinitionIndex)->GetStaticField(0x6B6B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _SendEarlyAccessData_b__9_0(::RPG::Client::EarlyAccessContent* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::EarlyAccessContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__SENDEARLYACCESSDATA_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetDoingContent_b__17_0(::RPG::Client::EarlyAccessContent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EarlyAccessContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__GETDOINGCONTENT_B__17_0_OFFSET))(this, a1);
		}
	};
}
