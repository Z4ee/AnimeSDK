#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_528;
class Class_2_0768C54531906C87;
class Class_2_78426274D727033C;
class Class_2_853611BC2A26D1D6;
class Class_2_9384BB234F2D2A88;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_2_43E10D03810BF3B5_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x188BB530)
#define CLASS_2_43E10D03810BF3B5_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x188BB620)
#define CLASS_2_43E10D03810BF3B5_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x188B9F40)
#define CLASS_2_43E10D03810BF3B5_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x188B9F60)
#define CLASS_2_43E10D03810BF3B5_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x188BA450)
#define CLASS_2_43E10D03810BF3B5_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x188BA220)
#define CLASS_2_43E10D03810BF3B5_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x188BA360)
#define CLASS_2_43E10D03810BF3B5_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x188B9FA0)
#define CLASS_2_43E10D03810BF3B5_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x188BAFA0)
#define CLASS_2_43E10D03810BF3B5_METHOD_2_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x188BA6E0)
#define CLASS_2_43E10D03810BF3B5_METHOD_2_AD1EEF8F6B87D2FC_OFFSET UNITYSDK_OFFSET(0x188BB400)
#define CLASS_2_43E10D03810BF3B5_METHOD_2_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x188BA270)
#define CLASS_2_43E10D03810BF3B5_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x188BA110)
#define CLASS_2_43E10D03810BF3B5_METHOD_2_CA20A96113B135EC_OFFSET UNITYSDK_OFFSET(0x188BB290)
#define CLASS_2_43E10D03810BF3B5_METHOD_2_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0x188BA3F0)
#define CLASS_2_43E10D03810BF3B5_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x188BB470)
#define CLASS_2_43E10D03810BF3B5_METHOD_2_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0x188BB240)
#define CLASS_2_43E10D03810BF3B5_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x188B9F50)
#define CLASS_2_43E10D03810BF3B5__CTOR_OFFSET UNITYSDK_OFFSET(0x188BB6F0)
#define CLASS_2_43E10D03810BF3B5__ONBIND_OFFSET UNITYSDK_OFFSET(0x188B9DA0)

inline static constexpr unsigned int Class_2_43E10D03810BF3B5_TypeDefinitionIndex = 68370;

class Class_2_43E10D03810BF3B5 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	::RPG::GameCore::LevelUIComponent* Field_2_6; // 0x60
	::System::String* Field_2_7; // 0x68
	::RPG::Client::AnimatorButton* Field_2_8; // 0x70
	::Class_2_853611BC2A26D1D6* Field_2_9; // 0x78
	::Class_2_9384BB234F2D2A88* Field_2_10; // 0x80
	::Class_2_0768C54531906C87* Field_2_11; // 0x88
	::RPG::Client::MonoInControlTip* Field_2_12; // 0x90
	::Class_2_78426274D727033C* Field_2_13; // 0x98
	::UnityEngine::Animator* Field_2_14; // 0xA0
	::UnityEngine::Transform* Field_2_15; // 0xA8
	::System::Int32 _Index_k__BackingField; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_METHOD_2_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_FEE7938AD36467E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_METHOD_2_FEE7938AD36467E5_OFFSET))(this);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_2_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_METHOD_2_652F3820D8B242FF_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_AD1EEF8F6B87D2FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_METHOD_2_AD1EEF8F6B87D2FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA20A96113B135EC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_METHOD_2_CA20A96113B135EC_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_528* Method_2_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_528*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_METHOD_2_D41F2EAAA87E2BFD_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43E10D03810BF3B5_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
