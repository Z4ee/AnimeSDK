#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROGUEROOMCONTENTUPDATEFINISH_METHOD_3_08DD46527C11EEFE_OFFSET UNITYSDK_OFFSET(0x1D6AAE60)
#define RPG_GAMECORE_WAITROGUEROOMCONTENTUPDATEFINISH_METHOD_3_0FE51C3D1A5882BA_OFFSET UNITYSDK_OFFSET(0x1D6AAEB0)
#define RPG_GAMECORE_WAITROGUEROOMCONTENTUPDATEFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AAEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueRoomContentUpdateFinish_TypeDefinitionIndex = 20576;

	class WaitRogueRoomContentUpdateFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEROOMCONTENTUPDATEFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_08DD46527C11EEFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueRoomContentUpdateFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueRoomContentUpdateFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEROOMCONTENTUPDATEFINISH_METHOD_3_08DD46527C11EEFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0FE51C3D1A5882BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueRoomContentUpdateFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueRoomContentUpdateFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEROOMCONTENTUPDATEFINISH_METHOD_3_0FE51C3D1A5882BA_OFFSET))(a1, a2);
		}
	};
}
