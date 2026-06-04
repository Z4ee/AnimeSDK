#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_7AB88D713F5121B3_48;
class Class_2_C7E4836FE12CD44B;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class BattleCollegeAimData; }
namespace RPG::Client { class BattleCollegeModule; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_0F48B0E9D886E4A8_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x14320220)
#define CLASS_2_0F48B0E9D886E4A8_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x14320460)
#define CLASS_2_0F48B0E9D886E4A8_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1431FA40)
#define CLASS_2_0F48B0E9D886E4A8_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1431FA60)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1431FD00)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_2705868B3834B3D2_OFFSET UNITYSDK_OFFSET(0x1431FFD0)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x14320760)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x14320700)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_62CBBC7B5FBD6613_OFFSET UNITYSDK_OFFSET(0x1431FEA0)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x1431FF30)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x14320180)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_AAC638B71443B320_OFFSET UNITYSDK_OFFSET(0x1431FBF0)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x1431FAE0)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_EDD61C49D04D16B6_OFFSET UNITYSDK_OFFSET(0x14320130)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x1431FA70)
#define CLASS_2_0F48B0E9D886E4A8_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1431FA50)
#define CLASS_2_0F48B0E9D886E4A8__CTOR_OFFSET UNITYSDK_OFFSET(0x14320660)
#define CLASS_2_0F48B0E9D886E4A8__ONBIND_OFFSET UNITYSDK_OFFSET(0x1431F950)
#define CLASS_2_0F48B0E9D886E4A8___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x143207C0)
#define CLASS_2_0F48B0E9D886E4A8___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x14320820)
#define CLASS_2_0F48B0E9D886E4A8___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x143206A0)

inline static constexpr unsigned int Class_2_0F48B0E9D886E4A8_TypeDefinitionIndex = 66890;

class Class_2_0F48B0E9D886E4A8 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::UI::Text* Field_2_3; // 0x60
	::Class_2_C7E4836FE12CD44B* Field_2_4; // 0x68
	::UnityEngine::Animation* Field_2_5; // 0x70
	::Class_1_7AB88D713F5121B3_48* Field_2_6; // 0x78
	::RPG::Client::AnimatorButton* Field_2_7; // 0x80
	::System::Single Field_2_8; // 0x88
	::System::Int32 Field_2_9; // 0x8C
	::System::Boolean Field_2_10; // 0x90
	::System::Boolean Field_2_11; // 0x91
	::System::Boolean Field_2_12; // 0x92
	::System::UInt32 Field_2_13; // 0x94
	::System::Int32 _Index_k__BackingField; // 0x98
	::System::Single Field_2_15; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_AAC638B71443B320(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_METHOD_2_AAC638B71443B320_OFFSET))(this, a1);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_2705868B3834B3D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_METHOD_2_2705868B3834B3D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_METHOD_2_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	static ::Class_1_7AB88D713F5121B3_48* Method_2_62CBBC7B5FBD6613(::RPG::Client::BattleCollegeAimData* a1)
	{
		return ((::Class_1_7AB88D713F5121B3_48*(*)(::RPG::Client::BattleCollegeAimData*))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_METHOD_2_62CBBC7B5FBD6613_OFFSET))(a1);
	}

	::RPG::Client::BattleCollegeModule* Method_2_EDD61C49D04D16B6()
	{
		return ((::RPG::Client::BattleCollegeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_METHOD_2_EDD61C49D04D16B6_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
