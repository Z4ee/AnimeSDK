#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1017;
class Class_1_9CAA42EF32347EE5_5;
class Class_1_F41834AAE9ED4443;
class Class_2_5908A34E2E4277AD;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_F52F198CBBF4B801_METHOD_2_0A4471CBCF67C562_OFFSET UNITYSDK_OFFSET(0xAB2F650)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0xAB2F260)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_1E0EA1AC7E2D9526_OFFSET UNITYSDK_OFFSET(0xAB2F100)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_2159370217553DCC_OFFSET UNITYSDK_OFFSET(0xAB2E5C0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xAB2F150)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_32460A23F1A1DEF1_OFFSET UNITYSDK_OFFSET(0xAB2F530)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_3CDD0248353333ED_OFFSET UNITYSDK_OFFSET(0xAB2EF00)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_44196695CAF284A8_OFFSET UNITYSDK_OFFSET(0xAB2EE00)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xAB2E850)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAB2F9A0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xAB2F8E0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_875768E9C85840D0_OFFSET UNITYSDK_OFFSET(0xAB2EDB0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_9094A96EEEB7AD9B_OFFSET UNITYSDK_OFFSET(0xAB2F2B0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xAB2EC80)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xAB2F1B0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xAB2ECD0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_D585DE91CF2C489D_OFFSET UNITYSDK_OFFSET(0xAB2F070)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_D5DAA0189AB561CA_OFFSET UNITYSDK_OFFSET(0xAB2EFD0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_E97FC8C27C810984_OFFSET UNITYSDK_OFFSET(0xAB2F350)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xAB2F7A0)
#define CLASS_2_F52F198CBBF4B801__CTOR_OFFSET UNITYSDK_OFFSET(0xAB2F850)
#define CLASS_2_F52F198CBBF4B801__ONBIND_OFFSET UNITYSDK_OFFSET(0xAB2E7D0)
#define CLASS_2_F52F198CBBF4B801___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAB2F940)

inline static constexpr unsigned int Class_2_F52F198CBBF4B801_TypeDefinitionIndex = 67268;

class Class_2_F52F198CBBF4B801 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::RPG::Client::UISkillIndex Field_2_0; // 0x0
	// static const ::RPG::Client::UISkillIndex Field_2_1; // 0x0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::UISkillIndex, ::Class_0_16E4307DCC419505_1017*>* Field_2_2; // 0x60
	::RPG::GameCore::BattleInstance* Field_2_3; // 0x68
	::UnityEngine::Animator* Field_2_4; // 0x70
	::RPG::Client::LocalizedText* Field_2_5; // 0x78
	::RPG::GameCore::GameEntity* Field_2_6; // 0x80
	::Class_2_5908A34E2E4277AD* Field_2_7; // 0x88
	::Class_2_5908A34E2E4277AD* Field_2_8; // 0x90
	::System::Boolean Field_2_9; // 0x98
	::System::Int32 Field_2_10; // 0x9C
	::System::Int32 Field_2_11; // 0xA0
	::System::Int32 Field_2_12; // 0xA4
	::System::Int32 Field_2_13; // 0xA8
	::System::Int32 Field_2_14; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2159370217553DCC(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_2159370217553DCC_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_875768E9C85840D0(::Class_1_9CAA42EF32347EE5_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CAA42EF32347EE5_5*))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_875768E9C85840D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CDD0248353333ED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_3CDD0248353333ED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1017*>* Method_2_D5DAA0189AB561CA(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1017*>*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_D5DAA0189AB561CA_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1017*>* Method_2_D585DE91CF2C489D()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1017*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_D585DE91CF2C489D_OFFSET))(this);
	}

	::RPG::Client::UISkillIndex Method_2_1E0EA1AC7E2D9526(::RPG::Client::UISkillIndex a1)
	{
		return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_1E0EA1AC7E2D9526_OFFSET))(this, a1);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_44196695CAF284A8(::Class_1_9CAA42EF32347EE5_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CAA42EF32347EE5_5*))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_44196695CAF284A8_OFFSET))(this, a1);
	}

	::System::Void Method_2_9094A96EEEB7AD9B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_9094A96EEEB7AD9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E97FC8C27C810984(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_E97FC8C27C810984_OFFSET))(this, a1);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Boolean Method_2_32460A23F1A1DEF1(::Class_1_F41834AAE9ED4443* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F41834AAE9ED4443*))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_32460A23F1A1DEF1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A4471CBCF67C562(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_0A4471CBCF67C562_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
