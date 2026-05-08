#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_74CBA0CF575D390A.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"

class Class_2_9573422533703399;
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_E4281EB9F7700496_METHOD_2_12998504E894F45B_OFFSET UNITYSDK_OFFSET(0x11AE4300)
#define CLASS_2_E4281EB9F7700496_SPAWN_OFFSET UNITYSDK_OFFSET(0x11AE4310)
#define CLASS_2_E4281EB9F7700496__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE4450)

inline static constexpr unsigned int Class_2_E4281EB9F7700496_TypeDefinitionIndex = 57319;

class Class_2_E4281EB9F7700496 : public ::Class_1_74CBA0CF575D390A
{
public:
	::System::Void _ctor(::MoleMole::Config::ConfigHollowChessboard* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_E4281EB9F7700496__CTOR_OFFSET))(this, a1, a2);
	}

	::MoleMole::HollowChessPieceSizeType Method_2_12998504E894F45B()
	{
		return ((::MoleMole::HollowChessPieceSizeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4281EB9F7700496_METHOD_2_12998504E894F45B_OFFSET))(this);
	}

	::Class_2_9573422533703399* Spawn(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::Class_2_9573422533703399*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_E4281EB9F7700496_SPAWN_OFFSET))(this, a1, a2);
	}
};
