#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_D9F45321791FD87C_METHOD_1_09453FAC335D7ED8_OFFSET UNITYSDK_OFFSET(0x13AEE720)
#define CLASS_1_D9F45321791FD87C_METHOD_1_A4FB266DF08FD80F_OFFSET UNITYSDK_OFFSET(0x13AEE500)
#define CLASS_1_D9F45321791FD87C_METHOD_1_D54638B3E7F98931_OFFSET UNITYSDK_OFFSET(0x13AEE6B0)

inline static constexpr unsigned int Class_1_D9F45321791FD87C_TypeDefinitionIndex = 46272;

class Class_1_D9F45321791FD87C : public ::System::Object
{
public:
	static ::Struct_2_49ABC235CB23B56F Method_1_A4FB266DF08FD80F(::System::Action* a1, ::System::Int64 a2, ::System::Int32 a3)
	{
		return ((::Struct_2_49ABC235CB23B56F(*)(::System::Action*, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D9F45321791FD87C_METHOD_1_A4FB266DF08FD80F_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_49ABC235CB23B56F Method_1_D54638B3E7F98931(::System::Action* a1)
	{
		return ((::Struct_2_49ABC235CB23B56F(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D9F45321791FD87C_METHOD_1_D54638B3E7F98931_OFFSET))(a1);
	}

	static ::Struct_2_49ABC235CB23B56F Method_1_09453FAC335D7ED8(::System::Action* a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::Struct_2_49ABC235CB23B56F(*)(::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D9F45321791FD87C_METHOD_1_09453FAC335D7ED8_OFFSET))(a1, a2, a3);
	}
};
