#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_7AB88D713F5121B3_39;
class Class_2_2B074D6D05EC015E;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class BattleCollegeAimData; }
namespace RPG::Client { class BattleCollegeModule; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_E8A526B5D529DBB0_2_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x111C93F0)
#define CLASS_2_E8A526B5D529DBB0_2_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x111C9620)
#define CLASS_2_E8A526B5D529DBB0_2_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x111C8B80)
#define CLASS_2_E8A526B5D529DBB0_2_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x111C8BA0)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x111C9910)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x111C98B0)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_62CBBC7B5FBD6613_OFFSET UNITYSDK_OFFSET(0x111C8FD0)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x111C9060)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x111C8C20)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x111C9300)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_AAC638B71443B320_OFFSET UNITYSDK_OFFSET(0x111C8D10)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x111C9100)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x111C8E20)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_EDD61C49D04D16B6_OFFSET UNITYSDK_OFFSET(0x111C92A0)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x111C8BB0)
#define CLASS_2_E8A526B5D529DBB0_2_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x111C8B90)
#define CLASS_2_E8A526B5D529DBB0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x111C9810)
#define CLASS_2_E8A526B5D529DBB0_2__ONBIND_OFFSET UNITYSDK_OFFSET(0x111C8980)
#define CLASS_2_E8A526B5D529DBB0_2___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x111C9970)
#define CLASS_2_E8A526B5D529DBB0_2___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x111C99D0)
#define CLASS_2_E8A526B5D529DBB0_2___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x111C9850)

inline static constexpr unsigned int Class_2_E8A526B5D529DBB0_2_TypeDefinitionIndex = 58637;

class Class_2_E8A526B5D529DBB0_2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::Single Field_2_14; // 0x0
	// static const ::System::String* Field_2_15; // 0x0
	::Class_2_2B074D6D05EC015E* Field_2_2; // 0x60
	::UnityEngine::Animation* Field_2_3; // 0x68
	::UnityEngine::UI::Text* Field_2_1; // 0x70
	::RPG::Client::AnimatorButton* Field_2_0; // 0x78
	::Class_1_7AB88D713F5121B3_39* Field_2_12; // 0x80
	::System::Int32 Field_2_9; // 0x88
	::System::Int32 _Index_k__BackingField; // 0x8C
	::System::UInt32 Field_2_8; // 0x90
	::System::Single Field_2_10; // 0x94
	::System::Boolean Field_2_6; // 0x98
	::System::Boolean Field_2_13; // 0x99
	::System::Boolean Field_2_7; // 0x9A
	::System::Single Field_2_11; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B92C44D5842AA8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_9B92C44D5842AA8A_OFFSET))(this);
	}

	::System::Void Method_2_AAC638B71443B320(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_AAC638B71443B320_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	static ::Class_1_7AB88D713F5121B3_39* Method_2_62CBBC7B5FBD6613(::RPG::Client::BattleCollegeAimData* a1)
	{
		return ((::Class_1_7AB88D713F5121B3_39*(*)(::RPG::Client::BattleCollegeAimData*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_62CBBC7B5FBD6613_OFFSET))(a1);
	}

	::RPG::Client::BattleCollegeModule* Method_2_EDD61C49D04D16B6()
	{
		return ((::RPG::Client::BattleCollegeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_EDD61C49D04D16B6_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
