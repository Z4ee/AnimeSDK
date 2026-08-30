#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/SkillUISpecialButtonType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_B71FA21BC121C2FA;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_4137EF4AEE590087_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16B52CC0)
#define CLASS_2_4137EF4AEE590087_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16B52D90)
#define CLASS_2_4137EF4AEE590087_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16B52440)
#define CLASS_2_4137EF4AEE590087_METHOD_2_29B0219C40FC918A_OFFSET UNITYSDK_OFFSET(0x16B51970)
#define CLASS_2_4137EF4AEE590087_METHOD_2_3BAF09B652485A73_OFFSET UNITYSDK_OFFSET(0x16B528D0)
#define CLASS_2_4137EF4AEE590087_METHOD_2_3F07804D8892197E_OFFSET UNITYSDK_OFFSET(0x16B52990)
#define CLASS_2_4137EF4AEE590087_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16B52B60)
#define CLASS_2_4137EF4AEE590087_METHOD_2_47C4B239AE738315_OFFSET UNITYSDK_OFFSET(0x16B52750)
#define CLASS_2_4137EF4AEE590087_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x16B526A0)
#define CLASS_2_4137EF4AEE590087_METHOD_2_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0x16B52500)
#define CLASS_2_4137EF4AEE590087_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x16B51C10)
#define CLASS_2_4137EF4AEE590087_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x16B51920)
#define CLASS_2_4137EF4AEE590087_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x16B52BC0)
#define CLASS_2_4137EF4AEE590087_METHOD_2_A93E2DF739E86EB0_OFFSET UNITYSDK_OFFSET(0x16B52260)
#define CLASS_2_4137EF4AEE590087_METHOD_2_AE1E3DA677D21BF0_OFFSET UNITYSDK_OFFSET(0x16B52810)
#define CLASS_2_4137EF4AEE590087_METHOD_2_B3979C05595F6BBF_OFFSET UNITYSDK_OFFSET(0x16B51EE0)
#define CLASS_2_4137EF4AEE590087_METHOD_2_D824C9FF720EB29B_OFFSET UNITYSDK_OFFSET(0x16B51E50)
#define CLASS_2_4137EF4AEE590087_METHOD_2_E6E0E86A3E0935A0_OFFSET UNITYSDK_OFFSET(0x16B52A60)
#define CLASS_2_4137EF4AEE590087_METHOD_2_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x16B52080)
#define CLASS_2_4137EF4AEE590087_METHOD_2_EDE104A2956E181A_1_OFFSET UNITYSDK_OFFSET(0x16B525B0)
#define CLASS_2_4137EF4AEE590087_METHOD_2_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0x16B52180)
#define CLASS_2_4137EF4AEE590087__CTOR_OFFSET UNITYSDK_OFFSET(0x16B52E30)
#define CLASS_2_4137EF4AEE590087__ONBIND_OFFSET UNITYSDK_OFFSET(0x16B51640)

inline static constexpr unsigned int Class_2_4137EF4AEE590087_TypeDefinitionIndex = 71873;

class Class_2_4137EF4AEE590087 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* LMEAEOKKCJG; // 0x0
	::UnityEngine::Animator* APPGGMLEPLN; // 0x60
	::Il2CppArray<::UnityEngine::UI::Image*>* FHMBDLMNLOI; // 0x68
	::Class_2_B71FA21BC121C2FA* HPADAGJIHAO; // 0x70
	::Il2CppArray<::UnityEngine::UI::Image*>* IABAHDPNOGD; // 0x78
	::Struct_2_96F8F0A04B900A9E PMECLILMEDH; // 0x80
	::RPG::GameCore::SkillUISpecialButtonType OCLJGOHOHEN; // 0x88
	::System::Int32 FDEALDKHCGJ; // 0x8C
	::System::Int32 HJCGEINCLPO; // 0x90
	::System::Int32 LPMAIGGPBCL; // 0x94
	::System::Int32 PHHKEAKDOKA; // 0x98
	::System::Boolean AKBPNMEFGAO; // 0x9C
	::System::Boolean HOLOCCCIKBH; // 0x9D
	::System::Boolean DMCAMAHNGPJ; // 0x9E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_29B0219C40FC918A(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_29B0219C40FC918A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE104A2956E181A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_EDE104A2956E181A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A93E2DF739E86EB0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_A93E2DF739E86EB0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_494458CA7765DC42()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_494458CA7765DC42_OFFSET))(this);
	}

	::System::Void Method_2_EDE104A2956E181A_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_EDE104A2956E181A_1_OFFSET))(this, a1);
	}

	::Class_1_34917908B7833130* Method_2_47FCE72550F759BF()
	{
		return ((::Class_1_34917908B7833130*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_47FCE72550F759BF_OFFSET))(this);
	}

	::RPG::Client::MonoInControlButton* Method_2_47C4B239AE738315()
	{
		return ((::RPG::Client::MonoInControlButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_47C4B239AE738315_OFFSET))(this);
	}

	::RPG::Client::MonoInControlTip* Method_2_AE1E3DA677D21BF0()
	{
		return ((::RPG::Client::MonoInControlTip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_AE1E3DA677D21BF0_OFFSET))(this);
	}

	::RPG::Client::LongPressEvent* Method_2_3BAF09B652485A73()
	{
		return ((::RPG::Client::LongPressEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_3BAF09B652485A73_OFFSET))(this);
	}

	::System::Void Method_2_D824C9FF720EB29B(::RPG::GameCore::SkillUISpecialButtonType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillUISpecialButtonType))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_D824C9FF720EB29B_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3979C05595F6BBF(::RPG::GameCore::SkillUISpecialButtonType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillUISpecialButtonType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_B3979C05595F6BBF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E6E0E86A3E0935A0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_E6E0E86A3E0935A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_2_3F07804D8892197E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_3F07804D8892197E_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4137EF4AEE590087_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
