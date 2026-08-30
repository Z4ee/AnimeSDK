#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_7AB88D713F5121B3_50;
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

#define CLASS_2_0F48B0E9D886E4A8_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x162959B0)
#define CLASS_2_0F48B0E9D886E4A8_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16295BF0)
#define CLASS_2_0F48B0E9D886E4A8_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x16295120)
#define CLASS_2_0F48B0E9D886E4A8_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x16295140)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x16295410)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_1819F61782D2A3EA_OFFSET UNITYSDK_OFFSET(0x16295860)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_2705868B3834B3D2_OFFSET UNITYSDK_OFFSET(0x16295700)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_62CBBC7B5FBD6613_OFFSET UNITYSDK_OFFSET(0x162955C0)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x16295660)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_AAC638B71443B320_OFFSET UNITYSDK_OFFSET(0x16295300)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x162951F0)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x162958F0)
#define CLASS_2_0F48B0E9D886E4A8_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x16295180)
#define CLASS_2_0F48B0E9D886E4A8_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x16295130)
#define CLASS_2_0F48B0E9D886E4A8__CTOR_OFFSET UNITYSDK_OFFSET(0x16295DF0)
#define CLASS_2_0F48B0E9D886E4A8__ONBIND_OFFSET UNITYSDK_OFFSET(0x16295030)

inline static constexpr unsigned int Class_2_0F48B0E9D886E4A8_TypeDefinitionIndex = 71513;

class Class_2_0F48B0E9D886E4A8 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::Single AKENNOMLLCA; // 0x0
	// static const ::System::String* EBHMOFDKJJH; // 0x0
	::Class_1_7AB88D713F5121B3_50* KIHEGPGEBDI; // 0x60
	::UnityEngine::UI::Text* BLGECNINILD; // 0x68
	::UnityEngine::Animation* ACKKKDFMIJA; // 0x70
	::RPG::Client::AnimatorButton* ABKODHGNKAA; // 0x78
	::Class_2_C7E4836FE12CD44B* MMOFGJMGMEM; // 0x80
	::System::Single KKPEIMJKION; // 0x88
	::System::Int32 _Index_k__BackingField; // 0x8C
	::System::Boolean PPIPLNPPEHF; // 0x90
	::System::Boolean AKBPNMEFGAO; // 0x91
	::System::Boolean KAECGFMHLFB; // 0x92
	::System::Single COCJDAKNIAP; // 0x94
	::System::Int32 GCDPLINDCNI; // 0x98
	::System::UInt32 IMPLMKBEFFE; // 0x9C

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

	static ::Class_1_7AB88D713F5121B3_50* Method_2_62CBBC7B5FBD6613(::RPG::Client::BattleCollegeAimData* a1)
	{
		return ((::Class_1_7AB88D713F5121B3_50*(*)(::RPG::Client::BattleCollegeAimData*))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_METHOD_2_62CBBC7B5FBD6613_OFFSET))(a1);
	}

	::RPG::Client::BattleCollegeModule* Method_2_1819F61782D2A3EA()
	{
		return ((::RPG::Client::BattleCollegeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_METHOD_2_1819F61782D2A3EA_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F48B0E9D886E4A8_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
