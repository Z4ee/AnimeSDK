#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x180912C0)
#define RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18091330)
#define RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x18091190)
#define RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x18091400)

namespace RPG::Client::Debugging
{
	inline static constexpr unsigned int CharacterVisionScopeDebug_TypeDefinitionIndex = 76708;

	class CharacterVisionScopeDebug : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Angle; // 0x18
		::System::Single Distance; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG__CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
