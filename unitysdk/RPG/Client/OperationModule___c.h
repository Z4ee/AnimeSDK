#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_92B1BD6FC8375724;
class Class_1_983E3C7FD339FC5A;
class Class_1_DDB796240B07BA45;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_OPERATIONMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EB66C0)
#define RPG_CLIENT_OPERATIONMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9EB6700)
#define RPG_CLIENT_OPERATIONMODULE___C__SENDUSECDKEYHTTPREQ_B__52_0_OFFSET UNITYSDK_OFFSET(0x9EB6710)
#define RPG_CLIENT_OPERATIONMODULE___C__SENDUSECDKEYHTTPREQ_B__52_1_OFFSET UNITYSDK_OFFSET(0x9EB6740)

namespace RPG::Client
{
	inline static constexpr unsigned int OperationModule___c_TypeDefinitionIndex = 54011;

	class OperationModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::Class_1_983E3C7FD339FC5A*>** StaticGet___9__52_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::Class_1_983E3C7FD339FC5A*>**)Il2CppClass::FromTypeDefinitionIndex(OperationModule___c_TypeDefinitionIndex)->GetStaticField(0x44DD0);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(OperationModule___c_TypeDefinitionIndex)->GetStaticField(0x44DD8);
		}
		static ::RPG::Client::OperationModule___c** StaticGet___9()
		{
			return (::RPG::Client::OperationModule___c**)Il2CppClass::FromTypeDefinitionIndex(OperationModule___c_TypeDefinitionIndex)->GetStaticField(0x44DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendUseCDKeyHttpReq_b__52_0(::Class_1_92B1BD6FC8375724* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__SENDUSECDKEYHTTPREQ_B__52_0_OFFSET))(this, req);
		}

		::Class_1_983E3C7FD339FC5A* _SendUseCDKeyHttpReq_b__52_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::Class_1_983E3C7FD339FC5A*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__SENDUSECDKEYHTTPREQ_B__52_1_OFFSET))(this, rsp);
		}
	};
}
