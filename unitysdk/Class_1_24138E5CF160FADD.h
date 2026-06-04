#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNodeState.h"
#include "unitysdk/System/Object.h"

class Class_1_D844B2DE6BA41D76;
namespace System { class String; }

#define CLASS_1_24138E5CF160FADD_METHOD_1_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0xA799E80)
#define CLASS_1_24138E5CF160FADD_METHOD_1_82FC3DD4D6F6CDC1_OFFSET UNITYSDK_OFFSET(0xA799D70)
#define CLASS_1_24138E5CF160FADD_METHOD_1_A89032E04A0FB800_OFFSET UNITYSDK_OFFSET(0xA799E00)
#define CLASS_1_24138E5CF160FADD_METHOD_1_AB79E61760339454_OFFSET UNITYSDK_OFFSET(0xA799CE0)
#define CLASS_1_24138E5CF160FADD_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA79A0C0)
#define CLASS_1_24138E5CF160FADD_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0xA79A100)
#define CLASS_1_24138E5CF160FADD__CTOR_OFFSET UNITYSDK_OFFSET(0xA79A230)

inline static constexpr unsigned int Class_1_24138E5CF160FADD_TypeDefinitionIndex = 57063;

class Class_1_24138E5CF160FADD : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_D844B2DE6BA41D76* Field_1_1; // 0x18
	::Class_1_D844B2DE6BA41D76* Field_1_2; // 0x20
	::Il2CppArray<::RPG::Client::WorkNodeState>* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x31
	::System::Single Field_1_6; // 0x34
	::System::Single Field_1_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AB79E61760339454(::Class_1_D844B2DE6BA41D76* a1, ::System::String* a2, ::Il2CppArray<::RPG::Client::WorkNodeState>* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D844B2DE6BA41D76*, ::System::String*, ::Il2CppArray<::RPG::Client::WorkNodeState>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_AB79E61760339454_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_82FC3DD4D6F6CDC1(::Class_1_D844B2DE6BA41D76* a1, ::Class_1_D844B2DE6BA41D76* a2, ::Il2CppArray<::RPG::Client::WorkNodeState>* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D844B2DE6BA41D76*, ::Class_1_D844B2DE6BA41D76*, ::Il2CppArray<::RPG::Client::WorkNodeState>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_82FC3DD4D6F6CDC1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A89032E04A0FB800(::Class_1_D844B2DE6BA41D76* a1, ::Il2CppArray<::RPG::Client::WorkNodeState>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D844B2DE6BA41D76*, ::Il2CppArray<::RPG::Client::WorkNodeState>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_A89032E04A0FB800_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24138E5CF160FADD_METHOD_1_464B80C09A37526F_OFFSET))(this);
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
