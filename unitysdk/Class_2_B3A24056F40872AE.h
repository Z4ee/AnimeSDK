#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/OpenWorldSimpleTriggerBatchBase_1.h"
#include "unitysdk/Struct_2_17FA9C0BB542BFA8.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_B3A24056F40872AE_ISPOINTINSIDELOCAL_OFFSET UNITYSDK_OFFSET(0x1091C410)
#define CLASS_2_B3A24056F40872AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1091C4C0)

inline static constexpr unsigned int Class_2_B3A24056F40872AE_TypeDefinitionIndex = 60627;

class Class_2_B3A24056F40872AE : public ::RPG::Client::OpenWorld::OpenWorldSimpleTriggerBatchBase_1<::Struct_2_17FA9C0BB542BFA8>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3A24056F40872AE__CTOR_OFFSET))(this);
	}

	::System::Boolean IsPointInsideLocal(::UnityEngine::Vector3 a1, ::Struct_2_17FA9C0BB542BFA8& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Struct_2_17FA9C0BB542BFA8&))((::PBYTE)hIl2Cpp + CLASS_2_B3A24056F40872AE_ISPOINTINSIDELOCAL_OFFSET))(this, a1, a2);
	}
};
