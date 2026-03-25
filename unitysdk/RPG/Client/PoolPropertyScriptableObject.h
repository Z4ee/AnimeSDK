#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class PoolPropertyRecord; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_POOLPROPERTYSCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF3F00)

namespace RPG::Client
{
	inline static constexpr unsigned int PoolPropertyScriptableObject_TypeDefinitionIndex = 59520;

	class PoolPropertyScriptableObject : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PoolPropertyRecord*>* records; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLPROPERTYSCRIPTABLEOBJECT__CTOR_OFFSET))(this);
		}
	};
}
