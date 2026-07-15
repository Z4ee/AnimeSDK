#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_8FD88AEFE1E689CC;
class Class_2_0F19373B970769FA;
class Class_2_25EEB3E1B4EE5C49;
class Class_2_4798B05B1DD74BF3;
class Class_2_F5A4692A18D66A14;
class Class_2_F8382A3C50D72E6A;
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityDirtyHPChange; }
namespace RPG::GameCore { class AbilityMaxHPChange; }
namespace RPG::GameCore { class AbilityRallyHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define CLASS_2_3CA274F53E780264_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1527FE70)
#define CLASS_2_3CA274F53E780264_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15280180)
#define CLASS_2_3CA274F53E780264_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x1527EA90)
#define CLASS_2_3CA274F53E780264_METHOD_2_12CD8F956BFCC78B_OFFSET UNITYSDK_OFFSET(0x1527EED0)
#define CLASS_2_3CA274F53E780264_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1527E3E0)
#define CLASS_2_3CA274F53E780264_METHOD_2_1FBE67C108B5895B_OFFSET UNITYSDK_OFFSET(0x1527F210)
#define CLASS_2_3CA274F53E780264_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x1527DAC0)
#define CLASS_2_3CA274F53E780264_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1527D9B0)
#define CLASS_2_3CA274F53E780264_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1527E390)
#define CLASS_2_3CA274F53E780264_METHOD_2_4B5DFB9ABEB1BD88_OFFSET UNITYSDK_OFFSET(0x1527ECE0)
#define CLASS_2_3CA274F53E780264_METHOD_2_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x1527E2F0)
#define CLASS_2_3CA274F53E780264_METHOD_2_5BD6755423AFF5A2_OFFSET UNITYSDK_OFFSET(0x1527DFC0)
#define CLASS_2_3CA274F53E780264_METHOD_2_657B3A247C551E8D_OFFSET UNITYSDK_OFFSET(0x1527E9D0)
#define CLASS_2_3CA274F53E780264_METHOD_2_6AEE51845DFA6D71_OFFSET UNITYSDK_OFFSET(0x1527E7C0)
#define CLASS_2_3CA274F53E780264_METHOD_2_711D16299A52F5BC_OFFSET UNITYSDK_OFFSET(0x1527F440)
#define CLASS_2_3CA274F53E780264_METHOD_2_7D25AEBB6993B499_OFFSET UNITYSDK_OFFSET(0x1527E810)
#define CLASS_2_3CA274F53E780264_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x1527DE40)
#define CLASS_2_3CA274F53E780264_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x1527D940)
#define CLASS_2_3CA274F53E780264_METHOD_2_93190E731E31C79A_OFFSET UNITYSDK_OFFSET(0x1527E590)
#define CLASS_2_3CA274F53E780264_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x1527E460)
#define CLASS_2_3CA274F53E780264_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1527E350)
#define CLASS_2_3CA274F53E780264_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1527F2D0)
#define CLASS_2_3CA274F53E780264_METHOD_2_BD078BA2FC9D189D_OFFSET UNITYSDK_OFFSET(0x1527F370)
#define CLASS_2_3CA274F53E780264_METHOD_2_C1E9FA7A33D8D520_1_OFFSET UNITYSDK_OFFSET(0x1527EC40)
#define CLASS_2_3CA274F53E780264_METHOD_2_C1E9FA7A33D8D520_2_OFFSET UNITYSDK_OFFSET(0x1527EC90)
#define CLASS_2_3CA274F53E780264_METHOD_2_C1E9FA7A33D8D520_OFFSET UNITYSDK_OFFSET(0x1527EBF0)
#define CLASS_2_3CA274F53E780264_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x1527FA30)
#define CLASS_2_3CA274F53E780264_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1527E170)
#define CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1527F7F0)
#define CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x1527F8B0)
#define CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x1527F970)
#define CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0x1527FB20)
#define CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_5_OFFSET UNITYSDK_OFFSET(0x1527FBE0)
#define CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_6_OFFSET UNITYSDK_OFFSET(0x1527FCF0)
#define CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_7_OFFSET UNITYSDK_OFFSET(0x1527FDB0)
#define CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1527F730)
#define CLASS_2_3CA274F53E780264_METHOD_2_FBA744CE7479F95C_OFFSET UNITYSDK_OFFSET(0x1527DDA0)
#define CLASS_2_3CA274F53E780264_METHOD_2_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x1527E1B0)
#define CLASS_2_3CA274F53E780264__CTOR_OFFSET UNITYSDK_OFFSET(0x15280460)
#define CLASS_2_3CA274F53E780264__ONBIND_OFFSET UNITYSDK_OFFSET(0x1527D7C0)
#define CLASS_2_3CA274F53E780264__ONTICK_OFFSET UNITYSDK_OFFSET(0x1527E0A0)

inline static constexpr unsigned int Class_2_3CA274F53E780264_TypeDefinitionIndex = 69057;

class Class_2_3CA274F53E780264 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::Class_2_F8382A3C50D72E6A* Field_2_2; // 0x60
	::UnityEngine::UI::Image* Field_2_3; // 0x68
	::UnityEngine::UI::Image* Field_2_4; // 0x70
	::Class_2_0F19373B970769FA* Field_2_5; // 0x78
	::RPG::GameCore::GameEntity* Field_2_6; // 0x80
	::UnityEngine::Animation* Field_2_7; // 0x88
	::Class_2_25EEB3E1B4EE5C49* Field_2_8; // 0x90
	::Class_2_F5A4692A18D66A14* Field_2_9; // 0x98
	::UnityEngine::UI::SmoothMask* Field_2_10; // 0xA0
	::UnityEngine::Animation* Field_2_11; // 0xA8
	::UnityEngine::RectTransform* Field_2_12; // 0xB0
	::Class_2_4798B05B1DD74BF3* Field_2_13; // 0xB8
	::RPG::GameCore::GameEntity* Field_2_14; // 0xC0
	::UnityEngine::Color Field_2_15; // 0xC8
	::System::Single Field_2_16; // 0xD8
	::System::Boolean Field_2_17; // 0xDC
	::UnityEngine::Color Field_2_18; // 0xE0
	::UnityEngine::Color Field_2_19; // 0xF0
	::System::Single Field_2_20; // 0x100
	::RPG::GameCore::FixPoint Field_2_21; // 0x108
	::UnityEngine::Color Field_2_22; // 0x110
	::UnityEngine::Color Field_2_23; // 0x120
	::System::Single Field_2_24; // 0x130
	::UnityEngine::Color Field_2_25; // 0x134
	::RPG::GameCore::FixPoint Field_2_26; // 0x148
	::System::Single Field_2_27; // 0x150
	::System::Single Field_2_28; // 0x154

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_2_5BD6755423AFF5A2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_5BD6755423AFF5A2_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_93190E731E31C79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_93190E731E31C79A_OFFSET))(this);
	}

	::System::Void Method_2_7D25AEBB6993B499(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_7D25AEBB6993B499_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_657B3A247C551E8D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_657B3A247C551E8D_OFFSET))(this, a1);
	}

	::System::Void Method_2_FBA744CE7479F95C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_FBA744CE7479F95C_OFFSET))(this, a1);
	}

	::System::Void Method_2_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_0581090195E9C81F_OFFSET))(this);
	}

	::System::Void Method_2_C1E9FA7A33D8D520()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_C1E9FA7A33D8D520_OFFSET))(this);
	}

	::System::Void Method_2_C1E9FA7A33D8D520_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_C1E9FA7A33D8D520_1_OFFSET))(this);
	}

	::System::Void Method_2_C1E9FA7A33D8D520_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_C1E9FA7A33D8D520_2_OFFSET))(this);
	}

	::System::Void Method_2_4B5DFB9ABEB1BD88(::RPG::GameCore::AbilityRallyHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityRallyHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_4B5DFB9ABEB1BD88_OFFSET))(this, a1);
	}

	::System::Void Method_2_12CD8F956BFCC78B(::Class_1_8FD88AEFE1E689CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FD88AEFE1E689CC*))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_12CD8F956BFCC78B_OFFSET))(this, a1);
	}

	::System::Void Method_2_1FBE67C108B5895B(::RPG::GameCore::AbilityDirtyHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityDirtyHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_1FBE67C108B5895B_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_BD078BA2FC9D189D(::RPG::GameCore::AbilityMaxHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_BD078BA2FC9D189D_OFFSET))(this, a1);
	}

	::System::Void Method_2_711D16299A52F5BC(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_711D16299A52F5BC_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_6AEE51845DFA6D71()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_6AEE51845DFA6D71_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_METHOD_2_F37CDBD6D46274D2_7_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA274F53E780264_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
