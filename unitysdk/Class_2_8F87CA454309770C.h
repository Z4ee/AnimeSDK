#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_8F87CA454309770C_Struct_2_86083371450A3659.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"

class Class_2_9B97BC1FA2EDDEBE;
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_8F87CA454309770C_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x158D6080)
#define CLASS_2_8F87CA454309770C_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x158D60A0)
#define CLASS_2_8F87CA454309770C_METHOD_2_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x158D71D0)
#define CLASS_2_8F87CA454309770C_METHOD_2_41CF9B9431532A25_OFFSET UNITYSDK_OFFSET(0x158D7020)
#define CLASS_2_8F87CA454309770C_METHOD_2_60BAB51FAB46DBD1_OFFSET UNITYSDK_OFFSET(0x158D74C0)
#define CLASS_2_8F87CA454309770C_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x158D60E0)
#define CLASS_2_8F87CA454309770C_METHOD_2_6FECEF220D41E8B2_OFFSET UNITYSDK_OFFSET(0x158D75E0)
#define CLASS_2_8F87CA454309770C_METHOD_2_9AFCA18B112F248A_OFFSET UNITYSDK_OFFSET(0x158D7630)
#define CLASS_2_8F87CA454309770C_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x158D73D0)
#define CLASS_2_8F87CA454309770C_METHOD_2_D24C4A2B6F179260_OFFSET UNITYSDK_OFFSET(0x158D7470)
#define CLASS_2_8F87CA454309770C_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x158D7550)
#define CLASS_2_8F87CA454309770C_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x158D7220)
#define CLASS_2_8F87CA454309770C_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x158D6090)
#define CLASS_2_8F87CA454309770C__CTOR_OFFSET UNITYSDK_OFFSET(0x158D76C0)
#define CLASS_2_8F87CA454309770C__ONBIND_OFFSET UNITYSDK_OFFSET(0x158D5E80)
#define CLASS_2_8F87CA454309770C___INITVARONCE_G___COMPAREDISPLAYDATA_15_0_OFFSET UNITYSDK_OFFSET(0x158D76F0)

inline static constexpr unsigned int Class_2_8F87CA454309770C_TypeDefinitionIndex = 69052;

class Class_2_8F87CA454309770C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x3; // 0x0
	::UnityEngine::Transform* Field_2_2; // 0x60
	::System::Collections::Generic::List_1<::Class_2_8F87CA454309770C_Struct_2_86083371450A3659>* Field_2_3; // 0x68
	::UnityEngine::UI::Button* Field_2_4; // 0x70
	::UnityEngine::Transform* Field_2_5; // 0x78
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueTitanType, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_2_6; // 0x80
	::RPG::Client::NodeListViewPanel_1<::Class_2_9B97BC1FA2EDDEBE*>* Field_2_7; // 0x88
	::RPG::GameCore::LevelUIComponent* Field_2_8; // 0x90
	::System::Collections::Generic::List_1<::Class_2_8F87CA454309770C_Struct_2_86083371450A3659>* Field_2_9; // 0x98
	::UnityEngine::Transform* Field_2_10; // 0xA0
	::UnityEngine::Animation* Field_2_11; // 0xA8
	::System::Int32 _Index_k__BackingField; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_2_41CF9B9431532A25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C_METHOD_2_41CF9B9431532A25_OFFSET))(this);
	}

	::System::Void Method_2_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C_METHOD_2_2C825E716CE9F2F9_OFFSET))(this);
	}

	::System::Void Method_2_D24C4A2B6F179260(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C_METHOD_2_D24C4A2B6F179260_OFFSET))(this, a1);
	}

	::System::Void Method_2_60BAB51FAB46DBD1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C_METHOD_2_60BAB51FAB46DBD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_6FECEF220D41E8B2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C_METHOD_2_6FECEF220D41E8B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_9AFCA18B112F248A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C_METHOD_2_9AFCA18B112F248A_OFFSET))(this, a1);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	static ::System::Int32 __InitVarOnce_g___CompareDisplayData_15_0(::Class_2_8F87CA454309770C_Struct_2_86083371450A3659 a1, ::Class_2_8F87CA454309770C_Struct_2_86083371450A3659 a2)
	{
		return ((::System::Int32(*)(::Class_2_8F87CA454309770C_Struct_2_86083371450A3659, ::Class_2_8F87CA454309770C_Struct_2_86083371450A3659))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C___INITVARONCE_G___COMPAREDISPLAYDATA_15_0_OFFSET))(a1, a2);
	}
};
