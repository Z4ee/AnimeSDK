#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3FF63E3B49DB868D;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8DC9433EC1929986_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x9148110)
#define CLASS_1_8DC9433EC1929986_METHOD_1_58E33D3710C1312F_OFFSET UNITYSDK_OFFSET(0x91485D0)
#define CLASS_1_8DC9433EC1929986_METHOD_1_7900DB25C44BBC9B_OFFSET UNITYSDK_OFFSET(0x9147F70)
#define CLASS_1_8DC9433EC1929986_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x9148460)
#define CLASS_1_8DC9433EC1929986_METHOD_1_93597A8AFEF9C86C_OFFSET UNITYSDK_OFFSET(0x91482C0)
#define CLASS_1_8DC9433EC1929986_METHOD_1_FEACA58079A1D4DA_OFFSET UNITYSDK_OFFSET(0x9147FC0)
#define CLASS_1_8DC9433EC1929986__CTOR_OFFSET UNITYSDK_OFFSET(0x9148790)

inline static constexpr unsigned int Class_1_8DC9433EC1929986_TypeDefinitionIndex = 66651;

class Class_1_8DC9433EC1929986 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_3FF63E3B49DB868D*>* Field_1_1; // 0x10
	::UnityEngine::Transform* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7900DB25C44BBC9B(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986_METHOD_1_7900DB25C44BBC9B_OFFSET))(this, a1);
	}

	::Class_1_3FF63E3B49DB868D* Method_1_FEACA58079A1D4DA(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_3FF63E3B49DB868D*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986_METHOD_1_FEACA58079A1D4DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_93597A8AFEF9C86C(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986_METHOD_1_93597A8AFEF9C86C_OFFSET))(this, a1);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Int32 Method_1_58E33D3710C1312F(::Class_1_3FF63E3B49DB868D* a1, ::Class_1_3FF63E3B49DB868D* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3FF63E3B49DB868D*, ::Class_1_3FF63E3B49DB868D*))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986_METHOD_1_58E33D3710C1312F_OFFSET))(this, a1, a2);
	}
};
