#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNodeState.h"
#include "unitysdk/System/Object.h"

class Class_1_520B187A8F3E7005;
namespace System { class String; }

#define CLASS_1_24138E5CF160FADD_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x9227230)
#define CLASS_1_24138E5CF160FADD_METHOD_1_82FC3DD4D6F6CDC1_OFFSET UNITYSDK_OFFSET(0x9226ED0)
#define CLASS_1_24138E5CF160FADD_METHOD_1_A89032E04A0FB800_OFFSET UNITYSDK_OFFSET(0x9226F60)
#define CLASS_1_24138E5CF160FADD_METHOD_1_AB79E61760339454_OFFSET UNITYSDK_OFFSET(0x9226E40)
#define CLASS_1_24138E5CF160FADD_METHOD_1_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x9226FE0)
#define CLASS_1_24138E5CF160FADD_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x92271F0)
#define CLASS_1_24138E5CF160FADD__CTOR_OFFSET UNITYSDK_OFFSET(0x9227310)

inline static constexpr unsigned int Class_1_24138E5CF160FADD_TypeDefinitionIndex = 56301;

class Class_1_24138E5CF160FADD : public ::System::Object
{
public:
	::Class_1_520B187A8F3E7005* Field_1_1; // 0x10
	::System::String* Field_1_4; // 0x18
	::Il2CppArray<::RPG::Client::WorkNodeState>* Field_1_6; // 0x20
	::Class_1_520B187A8F3E7005* Field_1_0; // 0x28
	::System::Boolean Field_1_5; // 0x30
	::System::Boolean Field_1_2; // 0x31
	::System::Single Field_1_7; // 0x34
	::System::Single Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AB79E61760339454(::Class_1_520B187A8F3E7005* a1, ::System::String* a2, ::Il2CppArray<::RPG::Client::WorkNodeState>* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_520B187A8F3E7005*, ::System::String*, ::Il2CppArray<::RPG::Client::WorkNodeState>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_AB79E61760339454_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_82FC3DD4D6F6CDC1(::Class_1_520B187A8F3E7005* a1, ::Class_1_520B187A8F3E7005* a2, ::Il2CppArray<::RPG::Client::WorkNodeState>* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_520B187A8F3E7005*, ::Class_1_520B187A8F3E7005*, ::Il2CppArray<::RPG::Client::WorkNodeState>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_82FC3DD4D6F6CDC1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A89032E04A0FB800(::Class_1_520B187A8F3E7005* a1, ::Il2CppArray<::RPG::Client::WorkNodeState>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_520B187A8F3E7005*, ::Il2CppArray<::RPG::Client::WorkNodeState>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_A89032E04A0FB800_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}
};
