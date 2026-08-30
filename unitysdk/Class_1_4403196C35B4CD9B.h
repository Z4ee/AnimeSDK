#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AttachPointMapping; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_4403196C35B4CD9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7C4320)
#define CLASS_1_4403196C35B4CD9B_METHOD_1_25FFB847C318CCEC_OFFSET UNITYSDK_OFFSET(0x1A7C4370)
#define CLASS_1_4403196C35B4CD9B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C42C0)

inline static constexpr unsigned int Class_1_4403196C35B4CD9B_TypeDefinitionIndex = 75498;

class Class_1_4403196C35B4CD9B : public ::System::Object
{
public:
	::RPG::Client::AttachPointMapping* MDOMBPFNPGB; // 0x10

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_4403196C35B4CD9B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4403196C35B4CD9B_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_25FFB847C318CCEC(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4403196C35B4CD9B_METHOD_1_25FFB847C318CCEC_OFFSET))(this, a1);
	}
};
