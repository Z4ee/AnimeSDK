#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define RPG_CLIENT_PROP_ORACLEPUZZLESOLUTIONITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16613310)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzleSolutionItem_TypeDefinitionIndex = 78263;

	class OraclePuzzleSolutionItem : public ::System::Object
	{
	public:
		::System::Int32 ID; // 0x10
		::UnityEngine::Vector2Int GridPos; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLESOLUTIONITEM__CTOR_OFFSET))(this);
		}
	};
}
