#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_167;
class Class_2_E2910CE9CBBA0DE5;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_7C1020CF79529CC6_CLEAR_OFFSET UNITYSDK_OFFSET(0xBEF10E0)
#define CLASS_1_7C1020CF79529CC6_METHOD_1_0513B99C9C7A91BF_OFFSET UNITYSDK_OFFSET(0xBEF13E0)
#define CLASS_1_7C1020CF79529CC6_METHOD_1_0D7D95DDBF071E2B_OFFSET UNITYSDK_OFFSET(0xBEF1210)
#define CLASS_1_7C1020CF79529CC6_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xBEF1050)
#define CLASS_1_7C1020CF79529CC6_METHOD_1_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0xBEF1360)
#define CLASS_1_7C1020CF79529CC6_METHOD_1_5C7DABD97F895860_OFFSET UNITYSDK_OFFSET(0xBEF1280)
#define CLASS_1_7C1020CF79529CC6_METHOD_1_85BCB649B4B59640_OFFSET UNITYSDK_OFFSET(0xBEF1300)
#define CLASS_1_7C1020CF79529CC6_METHOD_1_893814ED967AF5E7_OFFSET UNITYSDK_OFFSET(0xBEF0FB0)
#define CLASS_1_7C1020CF79529CC6_METHOD_1_C784934903D1CFFC_OFFSET UNITYSDK_OFFSET(0xBEF1180)
#define CLASS_1_7C1020CF79529CC6_METHOD_1_D3423CC2A44F3625_OFFSET UNITYSDK_OFFSET(0xBEF15E0)
#define CLASS_1_7C1020CF79529CC6_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xBEF13A0)
#define CLASS_1_7C1020CF79529CC6__CTOR_OFFSET UNITYSDK_OFFSET(0xBEF1AD0)

inline static constexpr unsigned int Class_1_7C1020CF79529CC6_TypeDefinitionIndex = 62291;

class Class_1_7C1020CF79529CC6 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_2; // 0x10
	::Class_0_16E4307DCC419505_167* Field_1_3; // 0x18
	::System::String* Field_1_1; // 0x20
	::RPG::GameCore::TaskContext* Field_1_4; // 0x28
	::Class_2_E2910CE9CBBA0DE5* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C1020CF79529CC6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_893814ED967AF5E7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7C1020CF79529CC6_METHOD_1_893814ED967AF5E7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C1020CF79529CC6_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C1020CF79529CC6_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_C784934903D1CFFC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7C1020CF79529CC6_METHOD_1_C784934903D1CFFC_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D7D95DDBF071E2B(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7C1020CF79529CC6_METHOD_1_0D7D95DDBF071E2B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5C7DABD97F895860(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7C1020CF79529CC6_METHOD_1_5C7DABD97F895860_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AIVariable* Method_1_85BCB649B4B59640(::System::String* a1)
	{
		return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7C1020CF79529CC6_METHOD_1_85BCB649B4B59640_OFFSET))(this, a1);
	}

	::Class_2_E2910CE9CBBA0DE5* Method_1_457717A0CF438A7C()
	{
		return ((::Class_2_E2910CE9CBBA0DE5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C1020CF79529CC6_METHOD_1_457717A0CF438A7C_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C1020CF79529CC6_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_0513B99C9C7A91BF(::RPG::GameCore::GameEntity* a1, ::Class_0_16E4307DCC419505_167* a2, ::System::String* a3, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_167*, ::System::String*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_7C1020CF79529CC6_METHOD_1_0513B99C9C7A91BF_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_1_D3423CC2A44F3625(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7C1020CF79529CC6_METHOD_1_D3423CC2A44F3625_OFFSET))(a1, a2);
	}
};
