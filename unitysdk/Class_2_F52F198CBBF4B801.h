#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_855;
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

#define CLASS_2_F52F198CBBF4B801_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x10B2D9E0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_1E0EA1AC7E2D9526_OFFSET UNITYSDK_OFFSET(0x10B2D890)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_32460A23F1A1DEF1_OFFSET UNITYSDK_OFFSET(0x10B2DB50)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_44196695CAF284A8_OFFSET UNITYSDK_OFFSET(0x10B2D4E0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10B2DFB0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x10B2D010)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_6E3EE215C182DE98_OFFSET UNITYSDK_OFFSET(0x10B2D690)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_875768E9C85840D0_OFFSET UNITYSDK_OFFSET(0x10B2D490)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_9094A96EEEB7AD9B_OFFSET UNITYSDK_OFFSET(0x10B2D5E0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x10B2D360)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x10B2D8E0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10B2D940)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_B2B49CDFC9F248E0_OFFSET UNITYSDK_OFFSET(0x10B2DC70)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x10B2D3B0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x10B2DA30)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x10B2DEE0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_CD390A7D8A14E39C_OFFSET UNITYSDK_OFFSET(0x10B2CCD0)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_D585DE91CF2C489D_OFFSET UNITYSDK_OFFSET(0x10B2D800)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_D5DAA0189AB561CA_OFFSET UNITYSDK_OFFSET(0x10B2D760)
#define CLASS_2_F52F198CBBF4B801_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x10B2DDA0)
#define CLASS_2_F52F198CBBF4B801__CTOR_OFFSET UNITYSDK_OFFSET(0x10B2DE50)
#define CLASS_2_F52F198CBBF4B801__ONBIND_OFFSET UNITYSDK_OFFSET(0x10B2CED0)
#define CLASS_2_F52F198CBBF4B801___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10B2DF50)

inline static constexpr unsigned int Class_2_F52F198CBBF4B801_TypeDefinitionIndex = 58958;

class Class_2_F52F198CBBF4B801 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::RPG::Client::UISkillIndex Field_2_13; // 0x0
	// static const ::RPG::Client::UISkillIndex Field_2_14; // 0x0
	::RPG::GameCore::BattleInstance* Field_2_8; // 0x60
	::UnityEngine::Animator* Field_2_0; // 0x68
	::RPG::Client::LocalizedText* Field_2_1; // 0x70
	::RPG::GameCore::GameEntity* Field_2_6; // 0x78
	::Class_2_5908A34E2E4277AD* Field_2_2; // 0x80
	::System::Collections::Generic::Dictionary_2<::RPG::Client::UISkillIndex, ::Class_0_16E4307DCC419505_855*>* Field_2_4; // 0x88
	::Class_2_5908A34E2E4277AD* Field_2_3; // 0x90
	::System::Boolean Field_2_5; // 0x98
	::System::Int32 Field_2_10; // 0x9C
	::System::Int32 Field_2_12; // 0xA0
	::System::Int32 Field_2_9; // 0xA4
	::System::Int32 Field_2_11; // 0xA8
	::System::Int32 Field_2_7; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CD390A7D8A14E39C(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_CD390A7D8A14E39C_OFFSET))(this, a1);
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

	::System::Void Method_2_9094A96EEEB7AD9B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_9094A96EEEB7AD9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E3EE215C182DE98(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_6E3EE215C182DE98_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_855*>* Method_2_D5DAA0189AB561CA(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_855*>*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_D5DAA0189AB561CA_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_855*>* Method_2_D585DE91CF2C489D()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_855*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_D585DE91CF2C489D_OFFSET))(this);
	}

	::RPG::Client::UISkillIndex Method_2_1E0EA1AC7E2D9526(::RPG::Client::UISkillIndex a1)
	{
		return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_1E0EA1AC7E2D9526_OFFSET))(this, a1);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_44196695CAF284A8(::Class_1_9CAA42EF32347EE5_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CAA42EF32347EE5_5*))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_44196695CAF284A8_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Boolean Method_2_32460A23F1A1DEF1(::Class_1_F41834AAE9ED4443* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F41834AAE9ED4443*))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_32460A23F1A1DEF1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2B49CDFC9F248E0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_B2B49CDFC9F248E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
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
