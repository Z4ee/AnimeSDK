#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/BattleComboGear.h"

class Class_2_02F79AB6A3BA3DCA;
namespace RPG::GameCore { class LevelComboChangeEvent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_6FA64DA172FF7850_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA8F6270)
#define CLASS_2_6FA64DA172FF7850_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA8F6360)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_3EBDDB8CB2E1257C_OFFSET UNITYSDK_OFFSET(0xA8F5D00)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_53FC71A0CDC95BC5_OFFSET UNITYSDK_OFFSET(0xA8F59F0)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA8F64F0)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_C9312916D3A31323_OFFSET UNITYSDK_OFFSET(0xA8F59A0)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_E8DC972172C77691_OFFSET UNITYSDK_OFFSET(0xA8F5950)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xA8F6170)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xA8F5C60)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_FF8AB72E6ABB8C7A_OFFSET UNITYSDK_OFFSET(0xA8F5D70)
#define CLASS_2_6FA64DA172FF7850__CTOR_OFFSET UNITYSDK_OFFSET(0xA8F6430)
#define CLASS_2_6FA64DA172FF7850__ONBIND_OFFSET UNITYSDK_OFFSET(0xA8F5500)
#define CLASS_2_6FA64DA172FF7850___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA8F6550)
#define CLASS_2_6FA64DA172FF7850___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA8F65B0)
#define CLASS_2_6FA64DA172FF7850___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA8F6490)

inline static constexpr unsigned int Class_2_6FA64DA172FF7850_TypeDefinitionIndex = 66892;

class Class_2_6FA64DA172FF7850 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_0 = 0x5; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::Il2CppArray<::Class_2_02F79AB6A3BA3DCA*>* Field_2_3; // 0x60
	::UnityEngine::Animation* Field_2_4; // 0x68
	::System::Boolean Field_2_5; // 0x70
	::System::Boolean Field_2_6; // 0x71
	::RPG::Client::BattleComboGear Field_2_7; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C9312916D3A31323()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_C9312916D3A31323_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EBDDB8CB2E1257C(::RPG::GameCore::LevelComboChangeEvent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelComboChangeEvent*))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_3EBDDB8CB2E1257C_OFFSET))(this, a1);
	}

	::System::Void Method_2_53FC71A0CDC95BC5(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_53FC71A0CDC95BC5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FF8AB72E6ABB8C7A(::RPG::Client::BattleComboGear a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleComboGear))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_FF8AB72E6ABB8C7A_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_E8DC972172C77691(::RPG::Client::BattleComboGear a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::BattleComboGear))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_E8DC972172C77691_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
