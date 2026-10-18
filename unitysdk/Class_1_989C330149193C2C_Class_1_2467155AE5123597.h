#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_989C330149193C2C_CLASS_1_2467155AE5123597_CLEAR_OFFSET UNITYSDK_OFFSET(0x16486670)
#define CLASS_1_989C330149193C2C_CLASS_1_2467155AE5123597_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16485530)
#define CLASS_1_989C330149193C2C_CLASS_1_2467155AE5123597_METHOD_1_5915AF106ADC73EB_OFFSET UNITYSDK_OFFSET(0x16486340)
#define CLASS_1_989C330149193C2C_CLASS_1_2467155AE5123597_METHOD_1_7B5E3B36CA129EB3_OFFSET UNITYSDK_OFFSET(0x16485B50)
#define CLASS_1_989C330149193C2C_CLASS_1_2467155AE5123597__CTOR_OFFSET UNITYSDK_OFFSET(0x164866D0)

inline static constexpr unsigned int Class_1_989C330149193C2C_Class_1_2467155AE5123597_TypeDefinitionIndex = 60746;

class Class_1_989C330149193C2C_Class_1_2467155AE5123597 : public ::System::Object
{
public:
	::UnityEngine::Transform* NNHJMGCALHP; // 0x10
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
	::System::String* GFNAPNFFGPJ; // 0x20
	::System::Single MFAFKCOAPKO; // 0x28
	::System::Int32 EIBNDELGJCK; // 0x2C
	::System::Boolean DEFDAIHJLAK; // 0x30
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
