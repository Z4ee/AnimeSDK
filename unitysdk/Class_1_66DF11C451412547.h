#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/AITargetType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_66DF11C451412547_METHOD_1_17213252DAA497AF_OFFSET UNITYSDK_OFFSET(0x109C6240)
#define CLASS_1_66DF11C451412547_METHOD_1_64BBFA83A255F928_OFFSET UNITYSDK_OFFSET(0x109C5EB0)
#define CLASS_1_66DF11C451412547_METHOD_1_BE9C644DA8128429_OFFSET UNITYSDK_OFFSET(0x109C7550)
#define CLASS_1_66DF11C451412547_METHOD_1_CA1E0FA1865267BB_OFFSET UNITYSDK_OFFSET(0x109C5D70)
#define CLASS_1_66DF11C451412547_METHOD_1_D2915152C83FC023_OFFSET UNITYSDK_OFFSET(0x109C65A0)

inline static constexpr unsigned int Class_1_66DF11C451412547_TypeDefinitionIndex = 79255;

class Class_1_66DF11C451412547 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_CA1E0FA1865267BB(::System::String* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_66DF11C451412547_METHOD_1_CA1E0FA1865267BB_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_64BBFA83A255F928(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_66DF11C451412547_METHOD_1_64BBFA83A255F928_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Battle::Entity* Method_1_17213252DAA497AF(::MoleMole::Battle::Entity* a1, ::MoleMole::AITargetType a2, ::System::String* a3)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::MoleMole::AITargetType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_66DF11C451412547_METHOD_1_17213252DAA497AF_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_D2915152C83FC023(::MoleMole::Battle::Entity* a1, ::MoleMole::AIMoveTargetType a2, ::System::Boolean& a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*, ::MoleMole::AIMoveTargetType, ::System::Boolean&, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_66DF11C451412547_METHOD_1_D2915152C83FC023_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_BE9C644DA8128429(::MoleMole::EntityHandle a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_66DF11C451412547_METHOD_1_BE9C644DA8128429_OFFSET))(a1, a2);
	}
};
