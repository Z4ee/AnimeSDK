#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define STRUCT_2_E95FEAD4DB04D741_METHOD_2_6BCCD96CA5DBC362_OFFSET UNITYSDK_OFFSET(0x3AF5540)
#define STRUCT_2_E95FEAD4DB04D741_METHOD_2_B8D78066278407A6_OFFSET UNITYSDK_OFFSET(0x3AF5490)
#define STRUCT_2_E95FEAD4DB04D741_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x3AF54F0)

inline static constexpr unsigned int Struct_2_E95FEAD4DB04D741_TypeDefinitionIndex = 60414;

struct alignas(8) Struct_2_E95FEAD4DB04D741
{
	::UnityEngine::Vector3 CEOCJBPLDOG; // 0x10
	::UnityEngine::Quaternion GFFPECJEGAG; // 0x1C
	::UnityEngine::Vector3 GOINMCEPJLA; // 0x2C
	::UnityEngine::Quaternion GPOAGGCILMF; // 0x38
	::System::Single IEHPFADHJFD; // 0x48
	::System::Action_1<::System::Boolean>* IMDLGFPMPEK; // 0x50
	::System::Action* HKHDLACNBOK; // 0x58

	::System::Void Method_2_B8D78066278407A6(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Single a4, ::System::Action_1<::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + STRUCT_2_E95FEAD4DB04D741_METHOD_2_B8D78066278407A6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E95FEAD4DB04D741_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_6BCCD96CA5DBC362(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + STRUCT_2_E95FEAD4DB04D741_METHOD_2_6BCCD96CA5DBC362_OFFSET))(this, a1, a2, a3);
	}
};
