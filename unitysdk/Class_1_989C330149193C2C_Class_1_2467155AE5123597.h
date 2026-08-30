#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_989C330149193C2C_CLASS_1_2467155AE5123597_CLEAR_OFFSET UNITYSDK_OFFSET(0x160E3300)
#define CLASS_1_989C330149193C2C_CLASS_1_2467155AE5123597_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x160E21E0)
#define CLASS_1_989C330149193C2C_CLASS_1_2467155AE5123597_METHOD_1_5915AF106ADC73EB_OFFSET UNITYSDK_OFFSET(0x160E2FF0)
#define CLASS_1_989C330149193C2C_CLASS_1_2467155AE5123597_METHOD_1_7B5E3B36CA129EB3_OFFSET UNITYSDK_OFFSET(0x160E2800)
#define CLASS_1_989C330149193C2C_CLASS_1_2467155AE5123597__CTOR_OFFSET UNITYSDK_OFFSET(0x160E3350)

inline static constexpr unsigned int Class_1_989C330149193C2C_Class_1_2467155AE5123597_TypeDefinitionIndex = 60843;

class Class_1_989C330149193C2C_Class_1_2467155AE5123597 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::UnityEngine::Transform* NNHJMGCALHP; // 0x18
	::System::String* GFNAPNFFGPJ; // 0x20
	::System::Int32 EIBNDELGJCK; // 0x28
	::System::Boolean DEFDAIHJLAK; // 0x2C
	::System::Single MFAFKCOAPKO; // 0x30
	::RPG::GameCore::NPCSubType EPFHBGNGBBK; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_989C330149193C2C_CLASS_1_2467155AE5123597__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_989C330149193C2C_CLASS_1_2467155AE5123597_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_1_5915AF106ADC73EB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_989C330149193C2C_CLASS_1_2467155AE5123597_METHOD_1_5915AF106ADC73EB_OFFSET))(this);
	}

	::System::Void Method_1_7B5E3B36CA129EB3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_989C330149193C2C_CLASS_1_2467155AE5123597_METHOD_1_7B5E3B36CA129EB3_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_989C330149193C2C_CLASS_1_2467155AE5123597_CLEAR_OFFSET))(this);
	}
};
