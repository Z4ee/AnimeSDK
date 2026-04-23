#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_939BEFF3A1EAE7F7_Struct_2_86083371450A3659.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"

class Class_2_FE060A211AF9E9E7;
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_939BEFF3A1EAE7F7_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x111BA280)
#define CLASS_2_939BEFF3A1EAE7F7_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x111BA2A0)
#define CLASS_2_939BEFF3A1EAE7F7_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x111BA2B0)
#define CLASS_2_939BEFF3A1EAE7F7_METHOD_2_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x111BB350)
#define CLASS_2_939BEFF3A1EAE7F7_METHOD_2_3C98CA656474384D_OFFSET UNITYSDK_OFFSET(0x111BB1F0)
#define CLASS_2_939BEFF3A1EAE7F7_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x111BB3A0)
#define CLASS_2_939BEFF3A1EAE7F7_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x111BB9E0)
#define CLASS_2_939BEFF3A1EAE7F7_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x111BBA40)
#define CLASS_2_939BEFF3A1EAE7F7_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x111BB980)
#define CLASS_2_939BEFF3A1EAE7F7_METHOD_2_9AFCA18B112F248A_OFFSET UNITYSDK_OFFSET(0x111BB7B0)
#define CLASS_2_939BEFF3A1EAE7F7_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x111BB550)
#define CLASS_2_939BEFF3A1EAE7F7_METHOD_2_AF769CD15806BD66_OFFSET UNITYSDK_OFFSET(0x111BB640)
#define CLASS_2_939BEFF3A1EAE7F7_METHOD_2_D24C4A2B6F179260_OFFSET UNITYSDK_OFFSET(0x111BB5F0)
#define CLASS_2_939BEFF3A1EAE7F7_METHOD_2_E94EA76DD62C72A9_OFFSET UNITYSDK_OFFSET(0x111BB760)
#define CLASS_2_939BEFF3A1EAE7F7_METHOD_2_F0880AD023811E29_OFFSET UNITYSDK_OFFSET(0x111BBAA0)
#define CLASS_2_939BEFF3A1EAE7F7_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x111BB6D0)
#define CLASS_2_939BEFF3A1EAE7F7_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x111BA290)
#define CLASS_2_939BEFF3A1EAE7F7__CTOR_OFFSET UNITYSDK_OFFSET(0x111BB840)
#define CLASS_2_939BEFF3A1EAE7F7__ONBIND_OFFSET UNITYSDK_OFFSET(0x111BA080)
#define CLASS_2_939BEFF3A1EAE7F7___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x111BB920)
#define CLASS_2_939BEFF3A1EAE7F7___INITVARONCE_G___COMPAREDISPLAYDATA_15_0_OFFSET UNITYSDK_OFFSET(0x111BB870)

inline static constexpr unsigned int Class_2_939BEFF3A1EAE7F7_TypeDefinitionIndex = 66630;

class Class_2_939BEFF3A1EAE7F7 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_12 = 0x3; // 0x0
	::RPG::Client::NodeListViewPanel_1<::Class_2_FE060A211AF9E9E7*>* Field_2_5; // 0x60
	::RPG::GameCore::LevelUIComponent* Field_2_8; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueTitanType, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_2_9; // 0x70
	::UnityEngine::UI::Button* Field_2_1; // 0x78
	::UnityEngine::Animation* Field_2_6; // 0x80
	::System::Collections::Generic::List_1<::Class_2_939BEFF3A1EAE7F7_Struct_2_86083371450A3659>* Field_2_11; // 0x88
	::UnityEngine::Transform* Field_2_3; // 0x90
	::System::Collections::Generic::List_1<::Class_2_939BEFF3A1EAE7F7_Struct_2_86083371450A3659>* Field_2_10; // 0x98
	::UnityEngine::Transform* Field_2_2; // 0xA0
	::UnityEngine::Transform* Field_2_4; // 0xA8
	::System::Int32 _Index_k__BackingField; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_2_3C98CA656474384D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_METHOD_2_3C98CA656474384D_OFFSET))(this);
	}

	::System::Void Method_2_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_METHOD_2_2C825E716CE9F2F9_OFFSET))(this);
	}

	::System::Void Method_2_D24C4A2B6F179260(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_METHOD_2_D24C4A2B6F179260_OFFSET))(this, a1);
	}

	::System::Void Method_2_AF769CD15806BD66(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_METHOD_2_AF769CD15806BD66_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E94EA76DD62C72A9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_METHOD_2_E94EA76DD62C72A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_9AFCA18B112F248A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_METHOD_2_9AFCA18B112F248A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	static ::System::Int32 __InitVarOnce_g___CompareDisplayData_15_0(::Class_2_939BEFF3A1EAE7F7_Struct_2_86083371450A3659 a, ::Class_2_939BEFF3A1EAE7F7_Struct_2_86083371450A3659 b)
	{
		return ((::System::Int32(*)(::Class_2_939BEFF3A1EAE7F7_Struct_2_86083371450A3659, ::Class_2_939BEFF3A1EAE7F7_Struct_2_86083371450A3659))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7___INITVARONCE_G___COMPAREDISPLAYDATA_15_0_OFFSET))(a, b);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_2_F0880AD023811E29(::InControl::InputDeviceClass P0)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7_METHOD_2_F0880AD023811E29_OFFSET))(this, P0);
	}
};
