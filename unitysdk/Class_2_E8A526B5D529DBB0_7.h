#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_863;
namespace RPG::Client { class LocalizedTextSDF; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_E8A526B5D529DBB0_7_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x875A950)
#define CLASS_2_E8A526B5D529DBB0_7_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x875AAA0)
#define CLASS_2_E8A526B5D529DBB0_7_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x8758EE0)
#define CLASS_2_E8A526B5D529DBB0_7_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x8758F00)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_1CF3A1D1A4FE9772_OFFSET UNITYSDK_OFFSET(0x8759080)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_2EE5451A8927066E_OFFSET UNITYSDK_OFFSET(0x8759D70)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x8759B50)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x8758F60)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x8759B00)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x87591B0)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x875ACB0)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x875AC50)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_6186BC7D14E43A99_OFFSET UNITYSDK_OFFSET(0x87595F0)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x8759380)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0x875A010)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_8567163545CAF181_OFFSET UNITYSDK_OFFSET(0x8759640)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x8759550)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_92809A86EE51AAC3_OFFSET UNITYSDK_OFFSET(0x875A320)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x875A810)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x875A8C0)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x875A760)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_C19086960A1B88E8_OFFSET UNITYSDK_OFFSET(0x8759960)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0x875A660)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_C6F34BFC46A6A114_OFFSET UNITYSDK_OFFSET(0x8759910)
#define CLASS_2_E8A526B5D529DBB0_7_METHOD_2_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0x87595A0)
#define CLASS_2_E8A526B5D529DBB0_7_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x8758EF0)
#define CLASS_2_E8A526B5D529DBB0_7__CTOR_OFFSET UNITYSDK_OFFSET(0x875ABC0)
#define CLASS_2_E8A526B5D529DBB0_7__ONBIND_OFFSET UNITYSDK_OFFSET(0x87584A0)
#define CLASS_2_E8A526B5D529DBB0_7__ONTICK_OFFSET UNITYSDK_OFFSET(0x8759E90)
#define CLASS_2_E8A526B5D529DBB0_7___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x875AD80)
#define CLASS_2_E8A526B5D529DBB0_7___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x875ADE0)
#define CLASS_2_E8A526B5D529DBB0_7___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x875ABF0)
#define CLASS_2_E8A526B5D529DBB0_7___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x875AD10)

inline static constexpr unsigned int Class_2_E8A526B5D529DBB0_7_TypeDefinitionIndex = 59064;

class Class_2_E8A526B5D529DBB0_7 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_7 = 0xE; // 0x0
	// static const ::System::Int64 Field_2_8 = 0x5AF3107A3FFF; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	// static const ::System::String* Field_2_13; // 0x0
	// static const ::System::String* Field_2_14; // 0x0
	// static const ::System::String* Field_2_15; // 0x0
	// static const ::System::String* Field_2_16; // 0x0
	// static const ::System::String* Field_2_17; // 0x0
	// static const ::System::String* Field_2_18; // 0x0
	// static const ::System::String* Field_2_19; // 0x0
	// static const ::System::String* Field_2_20; // 0x0
	// static const ::System::String* Field_2_21; // 0x0
	// static const ::System::String* Field_2_22; // 0x0
	// static const ::System::String* Field_2_25; // 0x0
	// static const ::System::String* Field_2_26; // 0x0
	// static const ::System::String* Field_2_27; // 0x0
	::RPG::GameCore::BattleInstance* Field_2_24; // 0x60
	::Class_0_16E4307DCC419505_863* Field_2_28; // 0x68
	::Il2CppArray<::RPG::Client::LocalizedTextSDF*>* Field_2_5; // 0x70
	::UnityEngine::Animation* Field_2_2; // 0x78
	::UnityEngine::RectTransform* Field_2_6; // 0x80
	::UnityEngine::AnimationState* Field_2_3; // 0x88
	::UnityEngine::Transform* Field_2_4; // 0x90
	::UnityEngine::Animation* Field_2_1; // 0x98
	::System::Int32 _Index_k__BackingField; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_863* Method_2_1CF3A1D1A4FE9772()
	{
		return ((::Class_0_16E4307DCC419505_863*(*)())((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_1CF3A1D1A4FE9772_OFFSET))();
	}

	static ::System::Boolean Method_2_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_4AADAF19CDCB660E_OFFSET))();
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_2_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_2_CD37BA088172EEF7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_CD37BA088172EEF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_6186BC7D14E43A99(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_6186BC7D14E43A99_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6F34BFC46A6A114(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_C6F34BFC46A6A114_OFFSET))(this, a1);
	}

	::System::Void Method_2_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Void Method_2_8567163545CAF181(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_8567163545CAF181_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2EE5451A8927066E(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_2EE5451A8927066E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C19086960A1B88E8(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_C19086960A1B88E8_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_810DD818C57F797D_OFFSET))(this);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_2_92809A86EE51AAC3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_92809A86EE51AAC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_7___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
