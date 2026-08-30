#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_198;
class Class_2_E2910CE9CBBA0DE5;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_35A3ACD0801E7FAC_CLEAR_OFFSET UNITYSDK_OFFSET(0xBB30B50)
#define CLASS_1_35A3ACD0801E7FAC_METHOD_1_0D7D95DDBF071E2B_OFFSET UNITYSDK_OFFSET(0xBB30C50)
#define CLASS_1_35A3ACD0801E7FAC_METHOD_1_0E72B12FCD9FB8F6_OFFSET UNITYSDK_OFFSET(0xBB30BF0)
#define CLASS_1_35A3ACD0801E7FAC_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xBB30AC0)
#define CLASS_1_35A3ACD0801E7FAC_METHOD_1_243DF990BF47EEFB_OFFSET UNITYSDK_OFFSET(0xBB30E20)
#define CLASS_1_35A3ACD0801E7FAC_METHOD_1_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0xBB30DA0)
#define CLASS_1_35A3ACD0801E7FAC_METHOD_1_5C7DABD97F895860_OFFSET UNITYSDK_OFFSET(0xBB30CC0)
#define CLASS_1_35A3ACD0801E7FAC_METHOD_1_725EC7A0DC1D6958_OFFSET UNITYSDK_OFFSET(0xBB30A20)
#define CLASS_1_35A3ACD0801E7FAC_METHOD_1_85BCB649B4B59640_OFFSET UNITYSDK_OFFSET(0xBB30D40)
#define CLASS_1_35A3ACD0801E7FAC_METHOD_1_A13DCFE0DBAD0B52_OFFSET UNITYSDK_OFFSET(0xBB310C0)
#define CLASS_1_35A3ACD0801E7FAC_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xBB30DE0)
#define CLASS_1_35A3ACD0801E7FAC__CTOR_OFFSET UNITYSDK_OFFSET(0xBB31650)

inline static constexpr unsigned int Class_1_35A3ACD0801E7FAC_TypeDefinitionIndex = 76056;

class Class_1_35A3ACD0801E7FAC : public ::System::Object
{
public:
	::Class_2_E2910CE9CBBA0DE5* HDMEPPFFIDK; // 0x10
	::System::String* FOMHLLCANPB; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::GameEntity* EHIFMPNLNON; // 0x28
	::Class_0_16E4307DCC419505_198* KAKEIDJDNHJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35A3ACD0801E7FAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_725EC7A0DC1D6958(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_35A3ACD0801E7FAC_METHOD_1_725EC7A0DC1D6958_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35A3ACD0801E7FAC_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35A3ACD0801E7FAC_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_0E72B12FCD9FB8F6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35A3ACD0801E7FAC_METHOD_1_0E72B12FCD9FB8F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D7D95DDBF071E2B(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_35A3ACD0801E7FAC_METHOD_1_0D7D95DDBF071E2B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5C7DABD97F895860(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_35A3ACD0801E7FAC_METHOD_1_5C7DABD97F895860_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AIVariable* Method_1_85BCB649B4B59640(::System::String* a1)
	{
		return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35A3ACD0801E7FAC_METHOD_1_85BCB649B4B59640_OFFSET))(this, a1);
	}

	::Class_2_E2910CE9CBBA0DE5* Method_1_457717A0CF438A7C()
	{
		return ((::Class_2_E2910CE9CBBA0DE5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35A3ACD0801E7FAC_METHOD_1_457717A0CF438A7C_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35A3ACD0801E7FAC_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_243DF990BF47EEFB(::RPG::GameCore::GameEntity* a1, ::Class_0_16E4307DCC419505_198* a2, ::System::String* a3, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_198*, ::System::String*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_35A3ACD0801E7FAC_METHOD_1_243DF990BF47EEFB_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_1_A13DCFE0DBAD0B52(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35A3ACD0801E7FAC_METHOD_1_A13DCFE0DBAD0B52_OFFSET))(a1, a2);
	}
};
