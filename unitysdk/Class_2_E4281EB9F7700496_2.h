#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_74CBA0CF575D390A.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"

class Class_2_9573422533703399_1;
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_E4281EB9F7700496_2_METHOD_2_12998504E894F45B_OFFSET UNITYSDK_OFFSET(0x1740E1D0)
#define CLASS_2_E4281EB9F7700496_2_SPAWN_OFFSET UNITYSDK_OFFSET(0x1740E1E0)
#define CLASS_2_E4281EB9F7700496_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1740E320)

inline static constexpr unsigned int Class_2_E4281EB9F7700496_2_TypeDefinitionIndex = 58692;

class Class_2_E4281EB9F7700496_2 : public ::Class_1_74CBA0CF575D390A
{
public:
	::System::Void _ctor(::MoleMole::Config::ConfigHollowChessboard* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_E4281EB9F7700496_2__CTOR_OFFSET))(this, a1, a2);
	}

	::MoleMole::HollowChessPieceSizeType Method_2_12998504E894F45B()
	{
		return ((::MoleMole::HollowChessPieceSizeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4281EB9F7700496_2_METHOD_2_12998504E894F45B_OFFSET))(this);
	}

	::Class_2_9573422533703399_1* Spawn(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::Class_2_9573422533703399_1*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_E4281EB9F7700496_2_SPAWN_OFFSET))(this, a1, a2);
	}
};
