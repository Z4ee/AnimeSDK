#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_D1403D5EBDB678B3_2;
class Class_2_49DD3E60D823A726;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7D8073A5EE8BF83F_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16A18E30)
#define CLASS_2_7D8073A5EE8BF83F_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16A18F20)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_126D1245D1EBB1FC_OFFSET UNITYSDK_OFFSET(0x16A17FF0)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_3923AB821AB9D6A6_OFFSET UNITYSDK_OFFSET(0x16A180C0)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x16A17DE0)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_5187D2A0E6751251_OFFSET UNITYSDK_OFFSET(0x16A18530)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_553552D8C8FC3B9E_OFFSET UNITYSDK_OFFSET(0x16A18770)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x16A18070)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16A18A90)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x16A18CC0)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_E6E0E86A3E0935A0_OFFSET UNITYSDK_OFFSET(0x16A184D0)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_E83D3547A9015657_OFFSET UNITYSDK_OFFSET(0x16A18180)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16A18D70)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0x16A18B10)
#define CLASS_2_7D8073A5EE8BF83F__CTOR_OFFSET UNITYSDK_OFFSET(0x16A18FF0)
#define CLASS_2_7D8073A5EE8BF83F__ONBIND_OFFSET UNITYSDK_OFFSET(0x16A17D20)
#define CLASS_2_7D8073A5EE8BF83F__ONTICK_OFFSET UNITYSDK_OFFSET(0x16A18120)

inline static constexpr unsigned int Class_2_7D8073A5EE8BF83F_TypeDefinitionIndex = 68886;

class Class_2_7D8073A5EE8BF83F : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Animator* Field_2_1; // 0x60
	::UnityEngine::UI::Text* Field_2_2; // 0x68
	::RPG::Client::PrefabLoadMeta* Field_2_3; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_49DD3E60D823A726*>* Field_2_4; // 0x78
	::System::Int32 Field_2_5; // 0x80
	::System::Int32 Field_2_6; // 0x84
	::System::Int32 Field_2_7; // 0x88
	::System::Int32 Field_2_8; // 0x8C
	::System::Int32 Field_2_9; // 0x90
	::System::Boolean Field_2_10; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_3923AB821AB9D6A6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_3923AB821AB9D6A6_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E6E0E86A3E0935A0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_E6E0E86A3E0935A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_5187D2A0E6751251(::Class_1_D1403D5EBDB678B3_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1403D5EBDB678B3_2*))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_5187D2A0E6751251_OFFSET))(this, a1);
	}

	::System::Void Method_2_126D1245D1EBB1FC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_126D1245D1EBB1FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_553552D8C8FC3B9E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_553552D8C8FC3B9E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E83D3547A9015657()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_E83D3547A9015657_OFFSET))(this);
	}

	::System::Void Method_2_FCB175EE4400634C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_FCB175EE4400634C_OFFSET))(this);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
