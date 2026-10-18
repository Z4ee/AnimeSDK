#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/BattleItemProgressPrefabType.h"

class Class_1_1AC98BCA1EF9CE86;
class Class_1_49DA0019D59F36B2;
class Class_2_22C4B636012AE7A6;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_B98ACCFDB6A3A24B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC26F2F0)
#define CLASS_2_B98ACCFDB6A3A24B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC26F410)
#define CLASS_2_B98ACCFDB6A3A24B_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xC26EBE0)
#define CLASS_2_B98ACCFDB6A3A24B_METHOD_2_7B7F0EB7229C08F9_OFFSET UNITYSDK_OFFSET(0xC26EDC0)
#define CLASS_2_B98ACCFDB6A3A24B_METHOD_2_8290F76E5BF655A5_OFFSET UNITYSDK_OFFSET(0xC26EFB0)
#define CLASS_2_B98ACCFDB6A3A24B_METHOD_2_8C8250FDCEC2AC09_OFFSET UNITYSDK_OFFSET(0xC26F020)
#define CLASS_2_B98ACCFDB6A3A24B_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0xC26F1A0)
#define CLASS_2_B98ACCFDB6A3A24B_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xC26F0B0)
#define CLASS_2_B98ACCFDB6A3A24B_METHOD_2_DFD8FD4BA7D3ACA8_OFFSET UNITYSDK_OFFSET(0xC26ED50)
#define CLASS_2_B98ACCFDB6A3A24B__CTOR_OFFSET UNITYSDK_OFFSET(0xC26F500)

inline static constexpr unsigned int Class_2_B98ACCFDB6A3A24B_TypeDefinitionIndex = 71707;

class Class_2_B98ACCFDB6A3A24B : public ::Class_1_34917908B7833130
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleItemProgressPrefabType, ::System::String*>* LGCHDBFCJLN; // 0x60
	::Class_2_22C4B636012AE7A6* GOGLDOBLLAI; // 0x68
	::System::Action_1<::Class_1_34917908B7833130*>* BJENMMLEOEC; // 0x70
	::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B98ACCFDB6A3A24B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B98ACCFDB6A3A24B_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_DFD8FD4BA7D3ACA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B98ACCFDB6A3A24B_METHOD_2_DFD8FD4BA7D3ACA8_OFFSET))(this);
	}

	::System::Void Method_2_8290F76E5BF655A5(::System::Action_1<::Class_1_34917908B7833130*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_34917908B7833130*>*))((::PBYTE)hIl2Cpp + CLASS_2_B98ACCFDB6A3A24B_METHOD_2_8290F76E5BF655A5_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B7F0EB7229C08F9(::Class_1_1AC98BCA1EF9CE86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1AC98BCA1EF9CE86*))((::PBYTE)hIl2Cpp + CLASS_2_B98ACCFDB6A3A24B_METHOD_2_7B7F0EB7229C08F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8250FDCEC2AC09(::Class_1_49DA0019D59F36B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49DA0019D59F36B2*))((::PBYTE)hIl2Cpp + CLASS_2_B98ACCFDB6A3A24B_METHOD_2_8C8250FDCEC2AC09_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B98ACCFDB6A3A24B_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B98ACCFDB6A3A24B_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B98ACCFDB6A3A24B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B98ACCFDB6A3A24B_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
