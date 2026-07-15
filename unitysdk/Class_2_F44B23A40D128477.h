#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_F44B23A40D128477_TweenAnimState.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_1E32D594CE469049;
class Class_2_0F19373B970769FA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_F44B23A40D128477_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B68F00)
#define CLASS_2_F44B23A40D128477_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18B68FD0)
#define CLASS_2_F44B23A40D128477_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x18B67300)
#define CLASS_2_F44B23A40D128477_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x18B68A50)
#define CLASS_2_F44B23A40D128477_METHOD_2_119F4F6316E05BE5_OFFSET UNITYSDK_OFFSET(0x18B680A0)
#define CLASS_2_F44B23A40D128477_METHOD_2_16A7A838275A61AE_OFFSET UNITYSDK_OFFSET(0x18B68C20)
#define CLASS_2_F44B23A40D128477_METHOD_2_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x18B67570)
#define CLASS_2_F44B23A40D128477_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x18B68BC0)
#define CLASS_2_F44B23A40D128477_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x18B67510)
#define CLASS_2_F44B23A40D128477_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x18B67A60)
#define CLASS_2_F44B23A40D128477_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x18B685C0)
#define CLASS_2_F44B23A40D128477_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x18B681C0)
#define CLASS_2_F44B23A40D128477_METHOD_2_4CB7528418C085FD_OFFSET UNITYSDK_OFFSET(0x18B68230)
#define CLASS_2_F44B23A40D128477_METHOD_2_513F9E76BC6A0A88_OFFSET UNITYSDK_OFFSET(0x18B68D60)
#define CLASS_2_F44B23A40D128477_METHOD_2_7240807274B59CCB_OFFSET UNITYSDK_OFFSET(0x18B67CF0)
#define CLASS_2_F44B23A40D128477_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x18B68420)
#define CLASS_2_F44B23A40D128477_METHOD_2_73938235ABCD2D76_OFFSET UNITYSDK_OFFSET(0x18B68360)
#define CLASS_2_F44B23A40D128477_METHOD_2_7CB79123E3F0EF3E_1_OFFSET UNITYSDK_OFFSET(0x18B688F0)
#define CLASS_2_F44B23A40D128477_METHOD_2_7CB79123E3F0EF3E_OFFSET UNITYSDK_OFFSET(0x18B68890)
#define CLASS_2_F44B23A40D128477_METHOD_2_893814ED967AF5E7_OFFSET UNITYSDK_OFFSET(0x18B68950)
#define CLASS_2_F44B23A40D128477_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x18B689C0)
#define CLASS_2_F44B23A40D128477_METHOD_2_94D9A25D55F4AED0_OFFSET UNITYSDK_OFFSET(0x18B68AA0)
#define CLASS_2_F44B23A40D128477_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x18B68DD0)
#define CLASS_2_F44B23A40D128477_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x18B686A0)
#define CLASS_2_F44B23A40D128477_METHOD_2_A5871F72382880B6_OFFSET UNITYSDK_OFFSET(0x18B68550)
#define CLASS_2_F44B23A40D128477_METHOD_2_B3AE6F32204AC5DE_OFFSET UNITYSDK_OFFSET(0x18B68CC0)
#define CLASS_2_F44B23A40D128477_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x18B67C70)
#define CLASS_2_F44B23A40D128477_METHOD_2_BD6A3C745D127D79_OFFSET UNITYSDK_OFFSET(0x18B68B60)
#define CLASS_2_F44B23A40D128477_METHOD_2_DA617170501A4094_OFFSET UNITYSDK_OFFSET(0x18B68AF0)
#define CLASS_2_F44B23A40D128477_METHOD_2_DF1C0FC46B60C2C9_1_OFFSET UNITYSDK_OFFSET(0x18B687B0)
#define CLASS_2_F44B23A40D128477_METHOD_2_DF1C0FC46B60C2C9_2_OFFSET UNITYSDK_OFFSET(0x18B68820)
#define CLASS_2_F44B23A40D128477_METHOD_2_DF1C0FC46B60C2C9_OFFSET UNITYSDK_OFFSET(0x18B68740)
#define CLASS_2_F44B23A40D128477_METHOD_2_DF91EF4F0ABA5381_OFFSET UNITYSDK_OFFSET(0x18B67EE0)
#define CLASS_2_F44B23A40D128477_METHOD_2_F26CE4FC4BEDB222_OFFSET UNITYSDK_OFFSET(0x18B67230)
#define CLASS_2_F44B23A40D128477_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x18B676E0)
#define CLASS_2_F44B23A40D128477_METHOD_2_FCAE20CD32D19671_OFFSET UNITYSDK_OFFSET(0x18B682C0)
#define CLASS_2_F44B23A40D128477__CTOR_OFFSET UNITYSDK_OFFSET(0x18B69070)
#define CLASS_2_F44B23A40D128477__ONBIND_OFFSET UNITYSDK_OFFSET(0x18B671A0)
#define CLASS_2_F44B23A40D128477__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x18B67C20)
#define CLASS_2_F44B23A40D128477__ONTICK_OFFSET UNITYSDK_OFFSET(0x18B679F0)

inline static constexpr unsigned int Class_2_F44B23A40D128477_TypeDefinitionIndex = 68568;

class Class_2_F44B23A40D128477 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_0 = 0x3; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	// static const ::System::Single Field_2_3; // 0x0
	// static const ::System::UInt32 Field_2_4 = 0xA; // 0x0
	::System::Action_1<::System::Single>* Field_2_5; // 0x60
	::Class_2_0F19373B970769FA* Field_2_6; // 0x68
	::Il2CppArray<::UnityEngine::Color>* Field_2_7; // 0x70
	::Class_2_0F19373B970769FA* Field_2_8; // 0x78
	::UnityEngine::Transform* Field_2_9; // 0x80
	::UnityEngine::UI::Text* Field_2_10; // 0x88
	::System::Action* Field_2_11; // 0x90
	::Class_1_1E32D594CE469049* Field_2_12; // 0x98
	::Il2CppArray<::UnityEngine::Color>* Field_2_13; // 0xA0
	::RPG::GameCore::LevelUIComponent* Field_2_14; // 0xA8
	::System::Int32 Field_2_15; // 0xB0
	::UnityEngine::Color Field_2_16; // 0xB4
	::System::Single Field_2_17; // 0xC4
	::UnityEngine::Color Field_2_18; // 0xC8
	::System::Single Field_2_19; // 0xD8
	::System::Single Field_2_20; // 0xDC
	::System::Single Field_2_21; // 0xE0
	::UnityEngine::Color Field_2_22; // 0xE4
	::Class_2_F44B23A40D128477_TweenAnimState Field_2_23; // 0xF4
	::System::Single Field_2_24; // 0xF8
	::System::Single Field_2_25; // 0xFC
	::UnityEngine::Color Field_2_26; // 0x100
	::System::Boolean Field_2_27; // 0x110
	::System::Boolean Field_2_28; // 0x111
	::System::Single Field_2_29; // 0x114
	::System::Int32 Field_2_30; // 0x118
	::System::Int32 Field_2_31; // 0x11C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_F26CE4FC4BEDB222(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_F26CE4FC4BEDB222_OFFSET))(this, a1);
	}

	::System::Void Method_2_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_1F130271093617A5_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1C409C2CC83887DC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_1C409C2CC83887DC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4CB7528418C085FD(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_4CB7528418C085FD_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5871F72382880B6(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_A5871F72382880B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_DF1C0FC46B60C2C9(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_DF1C0FC46B60C2C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF1C0FC46B60C2C9_1(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_DF1C0FC46B60C2C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF1C0FC46B60C2C9_2(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_DF1C0FC46B60C2C9_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_7CB79123E3F0EF3E(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_7CB79123E3F0EF3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_7CB79123E3F0EF3E_1(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_7CB79123E3F0EF3E_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_893814ED967AF5E7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_893814ED967AF5E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_94D9A25D55F4AED0(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_94D9A25D55F4AED0_OFFSET))(this, a1);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Int32 Method_2_DA617170501A4094(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_DA617170501A4094_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FCAE20CD32D19671(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_FCAE20CD32D19671_OFFSET))(this, a1);
	}

	::System::Void Method_2_73938235ABCD2D76(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_73938235ABCD2D76_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD6A3C745D127D79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_BD6A3C745D127D79_OFFSET))(this, a1);
	}

	::System::Void Method_2_7240807274B59CCB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_7240807274B59CCB_OFFSET))(this, a1);
	}

	::System::Void Method_2_119F4F6316E05BE5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_119F4F6316E05BE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF91EF4F0ABA5381(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_DF91EF4F0ABA5381_OFFSET))(this, a1);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_B3AE6F32204AC5DE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_B3AE6F32204AC5DE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_16A7A838275A61AE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_16A7A838275A61AE_OFFSET))(this);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_2_513F9E76BC6A0A88(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_513F9E76BC6A0A88_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F44B23A40D128477_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
