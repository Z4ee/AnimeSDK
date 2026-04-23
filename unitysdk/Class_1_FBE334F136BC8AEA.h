#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimGarbageBinBakedMoveConfig; }
namespace UnityEngine { class BoxCollider; }

#define CLASS_1_FBE334F136BC8AEA_METHOD_1_FA2ADAF54EB4292D_OFFSET UNITYSDK_OFFSET(0x11894FE0)

inline static constexpr unsigned int Class_1_FBE334F136BC8AEA_TypeDefinitionIndex = 70883;

class Class_1_FBE334F136BC8AEA : public ::System::Object
{
public:
	static ::System::Void Method_1_FA2ADAF54EB4292D(::UnityEngine::BoxCollider* a1, ::System::Single a2, ::System::Boolean a3, ::RPG::GameCore::FiveDimGarbageBinBakedMoveConfig* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::UnityEngine::BoxCollider*, ::System::Single, ::System::Boolean, ::RPG::GameCore::FiveDimGarbageBinBakedMoveConfig*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FBE334F136BC8AEA_METHOD_1_FA2ADAF54EB4292D_OFFSET))(a1, a2, a3, a4, a5);
	}
};
