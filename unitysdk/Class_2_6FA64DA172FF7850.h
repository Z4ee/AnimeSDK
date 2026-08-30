#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/BattleComboGear.h"

class Class_2_4A4A4FC674682470;
namespace RPG::GameCore { class LevelComboChangeEvent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_6FA64DA172FF7850_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x170546A0)
#define CLASS_2_6FA64DA172FF7850_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17054790)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_3EBDDB8CB2E1257C_OFFSET UNITYSDK_OFFSET(0x17054110)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_53FC71A0CDC95BC5_OFFSET UNITYSDK_OFFSET(0x17053E00)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x17054580)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_C9312916D3A31323_OFFSET UNITYSDK_OFFSET(0x17053DB0)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_E8DC972172C77691_OFFSET UNITYSDK_OFFSET(0x17053D60)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x17054070)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_FF8AB72E6ABB8C7A_OFFSET UNITYSDK_OFFSET(0x17054180)
#define CLASS_2_6FA64DA172FF7850__CTOR_OFFSET UNITYSDK_OFFSET(0x17054860)
#define CLASS_2_6FA64DA172FF7850__ONBIND_OFFSET UNITYSDK_OFFSET(0x17053910)

inline static constexpr unsigned int Class_2_6FA64DA172FF7850_TypeDefinitionIndex = 71515;

class Class_2_6FA64DA172FF7850 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Int32 NDBNGFLJJAL = 0x5; // 0x0
	// static const ::System::String* FDHODEPLFKL; // 0x0
	// static const ::System::String* BKFNPDMBKJN; // 0x0
	::UnityEngine::Animation* FNAOHBLCEIO; // 0x60
	::Il2CppArray<::Class_2_4A4A4FC674682470*>* NLINGFCACGM; // 0x68
	::RPG::Client::BattleComboGear JNJIBBOHBFB; // 0x70
	::System::Boolean EINNACFPAEN; // 0x74
	::System::Boolean HPDPEGMLLCF; // 0x75

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

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
