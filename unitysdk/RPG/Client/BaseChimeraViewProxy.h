#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_BASECHIMERAVIEWPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F0DC20)
#define RPG_CLIENT_BASECHIMERAVIEWPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x19F0DD60)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseChimeraViewProxy_TypeDefinitionIndex = 68615;

	class BaseChimeraViewProxy : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* GameObject; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* EffectUniqueIDs; // 0x18
		::System::UInt32 ID; // 0x20
		::System::Int32 HP; // 0x24
		::System::Boolean IsChimera; // 0x28
		::System::Int32 Atk; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHIMERAVIEWPROXY__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHIMERAVIEWPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
