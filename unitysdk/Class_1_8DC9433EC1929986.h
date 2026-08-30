#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1009A685370873D6;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8DC9433EC1929986_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x16100840)
#define CLASS_1_8DC9433EC1929986_METHOD_1_58E33D3710C1312F_OFFSET UNITYSDK_OFFSET(0x16100D60)
#define CLASS_1_8DC9433EC1929986_METHOD_1_7900DB25C44BBC9B_OFFSET UNITYSDK_OFFSET(0x16100630)
#define CLASS_1_8DC9433EC1929986_METHOD_1_93597A8AFEF9C86C_OFFSET UNITYSDK_OFFSET(0x16100A10)
#define CLASS_1_8DC9433EC1929986_METHOD_1_E5B2D19C36637166_OFFSET UNITYSDK_OFFSET(0x16100BC0)
#define CLASS_1_8DC9433EC1929986_METHOD_1_FEACA58079A1D4DA_OFFSET UNITYSDK_OFFSET(0x16100680)
#define CLASS_1_8DC9433EC1929986__CTOR_OFFSET UNITYSDK_OFFSET(0x16100F20)

inline static constexpr unsigned int Class_1_8DC9433EC1929986_TypeDefinitionIndex = 72275;

class Class_1_8DC9433EC1929986 : public ::System::Object
{
public:
	::UnityEngine::Transform* GPLBPFPABPH; // 0x10
	::System::Collections::Generic::List_1<::Class_1_1009A685370873D6*>* MHLIBBOJJMF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7900DB25C44BBC9B(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986_METHOD_1_7900DB25C44BBC9B_OFFSET))(this, a1);
	}

	::Class_1_1009A685370873D6* Method_1_FEACA58079A1D4DA(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_1009A685370873D6*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986_METHOD_1_FEACA58079A1D4DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_93597A8AFEF9C86C(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986_METHOD_1_93597A8AFEF9C86C_OFFSET))(this, a1);
	}

	::System::Void Method_1_E5B2D19C36637166()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986_METHOD_1_E5B2D19C36637166_OFFSET))(this);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Int32 Method_1_58E33D3710C1312F(::Class_1_1009A685370873D6* a1, ::Class_1_1009A685370873D6* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_1009A685370873D6*, ::Class_1_1009A685370873D6*))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986_METHOD_1_58E33D3710C1312F_OFFSET))(this, a1, a2);
	}
};
