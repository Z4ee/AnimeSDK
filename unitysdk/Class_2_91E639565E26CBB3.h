#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_D4B8A1380C1BB35B_Struct_2_6A43528D46EC4127.h"

class Class_2_C7EEDB5FF998BD38;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_91E639565E26CBB3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16EE5730)
#define CLASS_2_91E639565E26CBB3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16EE5820)
#define CLASS_2_91E639565E26CBB3_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x16EE4280)
#define CLASS_2_91E639565E26CBB3_METHOD_2_11AA304FD084CE18_OFFSET UNITYSDK_OFFSET(0x16EE4F40)
#define CLASS_2_91E639565E26CBB3_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x16EE4110)
#define CLASS_2_91E639565E26CBB3_METHOD_2_42ABC95DF9B1DD49_OFFSET UNITYSDK_OFFSET(0x16EE4710)
#define CLASS_2_91E639565E26CBB3_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x16EE4440)
#define CLASS_2_91E639565E26CBB3_METHOD_2_464F9487BF0D77F8_OFFSET UNITYSDK_OFFSET(0x16EE5600)
#define CLASS_2_91E639565E26CBB3_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16EE4900)
#define CLASS_2_91E639565E26CBB3_METHOD_2_A20AE65185C94696_OFFSET UNITYSDK_OFFSET(0x16EE46B0)
#define CLASS_2_91E639565E26CBB3_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x16EE5540)
#define CLASS_2_91E639565E26CBB3_METHOD_2_E07ADB0D66C09B7A_OFFSET UNITYSDK_OFFSET(0x16EE4DC0)
#define CLASS_2_91E639565E26CBB3_METHOD_2_E83D3547A9015657_OFFSET UNITYSDK_OFFSET(0x16EE49E0)
#define CLASS_2_91E639565E26CBB3_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16EE4D30)
#define CLASS_2_91E639565E26CBB3_METHOD_2_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0x16EE5390)
#define CLASS_2_91E639565E26CBB3__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE58F0)
#define CLASS_2_91E639565E26CBB3__ONBIND_OFFSET UNITYSDK_OFFSET(0x16EE4000)
#define CLASS_2_91E639565E26CBB3__ONTICK_OFFSET UNITYSDK_OFFSET(0x16EE4980)

inline static constexpr unsigned int Class_2_91E639565E26CBB3_TypeDefinitionIndex = 68152;

class Class_2_91E639565E26CBB3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_1; // 0x60
	::RPG::GameCore::LevelUIComponent* Field_2_2; // 0x68
	::UnityEngine::UI::Text* Field_2_3; // 0x70
	::UnityEngine::UI::Button* Field_2_4; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_C7EEDB5FF998BD38*>* Field_2_5; // 0x80
	::RPG::Client::PrefabLoadMeta* Field_2_6; // 0x88
	::UnityEngine::UI::Button* Field_2_7; // 0x90
	::UnityEngine::Animator* Field_2_8; // 0x98
	::System::UInt32 Field_2_9; // 0xA0
	::System::UInt32 Field_2_10; // 0xA4
	::System::UInt32 Field_2_11; // 0xA8
	::System::Int32 Field_2_12; // 0xAC
	::System::Int32 Field_2_13; // 0xB0
	::System::Int32 Field_2_14; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_42ABC95DF9B1DD49(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3_METHOD_2_42ABC95DF9B1DD49_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E07ADB0D66C09B7A(::Class_2_D4B8A1380C1BB35B_Struct_2_6A43528D46EC4127 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D4B8A1380C1BB35B_Struct_2_6A43528D46EC4127))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3_METHOD_2_E07ADB0D66C09B7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A20AE65185C94696(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3_METHOD_2_A20AE65185C94696_OFFSET))(this, a1);
	}

	::System::Void Method_2_11AA304FD084CE18(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3_METHOD_2_11AA304FD084CE18_OFFSET))(this, a1);
	}

	::System::Void Method_2_E83D3547A9015657()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3_METHOD_2_E83D3547A9015657_OFFSET))(this);
	}

	::System::Void Method_2_FCB175EE4400634C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3_METHOD_2_FCB175EE4400634C_OFFSET))(this);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_464F9487BF0D77F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3_METHOD_2_464F9487BF0D77F8_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91E639565E26CBB3_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
