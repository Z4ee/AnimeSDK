#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNodeState.h"
#include "unitysdk/System/Object.h"

class Class_1_E9521D589CA4AB8B;
namespace System { class String; }

#define CLASS_1_24138E5CF160FADD_METHOD_1_82FC3DD4D6F6CDC1_OFFSET UNITYSDK_OFFSET(0x19AB48F0)
#define CLASS_1_24138E5CF160FADD_METHOD_1_A89032E04A0FB800_OFFSET UNITYSDK_OFFSET(0x19AB4980)
#define CLASS_1_24138E5CF160FADD_METHOD_1_AB79E61760339454_OFFSET UNITYSDK_OFFSET(0x19AB4860)
#define CLASS_1_24138E5CF160FADD_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19AB4BF0)
#define CLASS_1_24138E5CF160FADD_METHOD_1_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x19AB4A00)
#define CLASS_1_24138E5CF160FADD_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x19AB4C30)
#define CLASS_1_24138E5CF160FADD__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB4D60)

inline static constexpr unsigned int Class_1_24138E5CF160FADD_TypeDefinitionIndex = 61148;

class Class_1_24138E5CF160FADD : public ::System::Object
{
public:
	::Class_1_E9521D589CA4AB8B* LBADEFLCBGM; // 0x10
	::Class_1_E9521D589CA4AB8B* POBLIBAJEOK; // 0x18
	::Il2CppArray<::RPG::Client::WorkNodeState>* OAAHBFFOKAA; // 0x20
	::System::String* DLLDLAJJOMM; // 0x28
	::System::Single GNEEMGIJEPJ; // 0x30
	::System::Single BKDDBPLNKEJ; // 0x34
	::System::Boolean FCELADAOCCM; // 0x38
	::System::Boolean FOJBENNMKLL; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AB79E61760339454(::Class_1_E9521D589CA4AB8B* a1, ::System::String* a2, ::Il2CppArray<::RPG::Client::WorkNodeState>* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9521D589CA4AB8B*, ::System::String*, ::Il2CppArray<::RPG::Client::WorkNodeState>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_AB79E61760339454_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_82FC3DD4D6F6CDC1(::Class_1_E9521D589CA4AB8B* a1, ::Class_1_E9521D589CA4AB8B* a2, ::Il2CppArray<::RPG::Client::WorkNodeState>* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9521D589CA4AB8B*, ::Class_1_E9521D589CA4AB8B*, ::Il2CppArray<::RPG::Client::WorkNodeState>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_82FC3DD4D6F6CDC1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A89032E04A0FB800(::Class_1_E9521D589CA4AB8B* a1, ::Il2CppArray<::RPG::Client::WorkNodeState>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9521D589CA4AB8B*, ::Il2CppArray<::RPG::Client::WorkNodeState>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_A89032E04A0FB800_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_E5695720AB0F6E98_OFFSET))(this);
	}
};
