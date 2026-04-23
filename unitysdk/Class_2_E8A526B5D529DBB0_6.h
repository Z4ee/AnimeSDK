#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_E8A526B5D529DBB0_6_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x99A96D0)
#define CLASS_2_E8A526B5D529DBB0_6_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x99A9810)
#define CLASS_2_E8A526B5D529DBB0_6_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x99A8350)
#define CLASS_2_E8A526B5D529DBB0_6_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x99A8370)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x99A8C10)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_3FF9C4D9874672D5_OFFSET UNITYSDK_OFFSET(0x99A9120)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x99A8380)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x99A8AD0)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x99A8A10)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x99A9450)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x99A9A40)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x99A99E0)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x99A85D0)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_8EC3255570F308C5_OFFSET UNITYSDK_OFFSET(0x99A8B60)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x99A9530)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x99A95F0)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x99A94D0)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x99A9250)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_C145705A054F47D2_OFFSET UNITYSDK_OFFSET(0x99A88D0)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x99A8FA0)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x99A8570)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_EEB7AD9AD74B5FBF_OFFSET UNITYSDK_OFFSET(0x99A8E50)
#define CLASS_2_E8A526B5D529DBB0_6_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x99A8360)
#define CLASS_2_E8A526B5D529DBB0_6__CTOR_OFFSET UNITYSDK_OFFSET(0x99A9930)
#define CLASS_2_E8A526B5D529DBB0_6__ONBIND_OFFSET UNITYSDK_OFFSET(0x99A8110)
#define CLASS_2_E8A526B5D529DBB0_6__ONTICK_OFFSET UNITYSDK_OFFSET(0x99A91A0)
#define CLASS_2_E8A526B5D529DBB0_6___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x99A9B10)
#define CLASS_2_E8A526B5D529DBB0_6___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x99A9B70)
#define CLASS_2_E8A526B5D529DBB0_6___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x99A9980)
#define CLASS_2_E8A526B5D529DBB0_6___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x99A9AA0)

inline static constexpr unsigned int Class_2_E8A526B5D529DBB0_6_TypeDefinitionIndex = 66432;

class Class_2_E8A526B5D529DBB0_6 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_16; // 0x0
	// static const ::System::Single Field_2_20; // 0x0
	::RPG::GameCore::LevelUIComponent* Field_2_9; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::UnityEngine::RectTransform* Field_2_5; // 0x70
	::UnityEngine::Animation* Field_2_7; // 0x78
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_21; // 0x80
	::RPG::Client::LocalizedText* Field_2_6; // 0x88
	::RPG::GameCore::LevelDataComponent* Field_2_10; // 0x90
	::UnityEngine::Transform* Field_2_3; // 0x98
	::UnityEngine::UI::Image* Field_2_2; // 0xA0
	::System::Single Field_2_15; // 0xA8
	::System::Single Field_2_4; // 0xAC
	::System::Boolean Field_2_17; // 0xB0
	::System::Boolean Field_2_19; // 0xB1
	::System::Boolean Field_2_18; // 0xB2
	::System::Single Field_2_13; // 0xB4
	::System::Int32 _Index_k__BackingField; // 0xB8
	::System::Single Field_2_12; // 0xBC
	::System::Single Field_2_14; // 0xC0
	::System::UInt32 Field_2_11; // 0xC4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_8EC3255570F308C5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_8EC3255570F308C5_OFFSET))(this, a1);
	}

	::System::Void Method_2_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_2_EEB7AD9AD74B5FBF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_EEB7AD9AD74B5FBF_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FF9C4D9874672D5(::RPG::GameCore::LevelEntityEscape* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_3FF9C4D9874672D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_C145705A054F47D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_C145705A054F47D2_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
