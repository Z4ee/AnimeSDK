#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
class Class_1_AC6C63F15E9794D3;
class Class_1_D8AE373904B194A5;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_OPERATIONMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDA0B8A0)
#define RPG_CLIENT_OPERATIONMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDA0B8E0)
#define RPG_CLIENT_OPERATIONMODULE___C__SENDUSECDKEYHTTPREQ_B__54_0_OFFSET UNITYSDK_OFFSET(0xDA0B8F0)
#define RPG_CLIENT_OPERATIONMODULE___C__SENDUSECDKEYHTTPREQ_B__54_1_OFFSET UNITYSDK_OFFSET(0xDA0B920)

namespace RPG::Client
{
	inline static constexpr unsigned int OperationModule___c_TypeDefinitionIndex = 66448;

	class OperationModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::OperationModule___c** StaticGet___9()
		{
			return (::RPG::Client::OperationModule___c**)Il2CppClass::FromTypeDefinitionIndex(OperationModule___c_TypeDefinitionIndex)->GetStaticField(0x42A20);
		}
		static ::System::Func_2<::Class_1_296A7AC90F028539*, ::Class_1_D8AE373904B194A5*>** StaticGet___9__54_1()
		{
			return (::System::Func_2<::Class_1_296A7AC90F028539*, ::Class_1_D8AE373904B194A5*>**)Il2CppClass::FromTypeDefinitionIndex(OperationModule___c_TypeDefinitionIndex)->GetStaticField(0x42A28);
		}
		static ::System::Func_2<::Class_1_AC6C63F15E9794D3*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::Class_1_AC6C63F15E9794D3*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>**)Il2CppClass::FromTypeDefinitionIndex(OperationModule___c_TypeDefinitionIndex)->GetStaticField(0x42A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* _SendUseCDKeyHttpReq_b__54_0(::Class_1_AC6C63F15E9794D3* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID, ::Class_1_AC6C63F15E9794D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__SENDUSECDKEYHTTPREQ_B__54_0_OFFSET))(this, a1);
		}

		::Class_1_D8AE373904B194A5* _SendUseCDKeyHttpReq_b__54_1(::Class_1_296A7AC90F028539* a1)
		{
			return ((::Class_1_D8AE373904B194A5*(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__SENDUSECDKEYHTTPREQ_B__54_1_OFFSET))(this, a1);
		}
	};
}
