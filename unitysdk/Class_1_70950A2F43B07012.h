#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CLASS_1_70950A2F43B07012_METHOD_1_30FA428D12D403DC_OFFSET UNITYSDK_OFFSET(0x14AC8140)
#define CLASS_1_70950A2F43B07012_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x14AC7D50)
#define CLASS_1_70950A2F43B07012_METHOD_1_9CB7B0D0E05C11DB_OFFSET UNITYSDK_OFFSET(0x14AC7E60)
#define CLASS_1_70950A2F43B07012_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x14AC8070)
#define CLASS_1_70950A2F43B07012__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC7D40)

inline static constexpr unsigned int Class_1_70950A2F43B07012_TypeDefinitionIndex = 41540;

class Class_1_70950A2F43B07012 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::UnityEngine::Animator* Field_1_2; // 0x18
	::MoleMole::Battle::Entity* Field_1_0; // 0x20
	::UnityEngine::GameObject* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70950A2F43B07012__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_70950A2F43B07012_METHOD_1_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_9CB7B0D0E05C11DB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_70950A2F43B07012_METHOD_1_9CB7B0D0E05C11DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70950A2F43B07012_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_30FA428D12D403DC(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_70950A2F43B07012_METHOD_1_30FA428D12D403DC_OFFSET))(this, a1);
	}
};
