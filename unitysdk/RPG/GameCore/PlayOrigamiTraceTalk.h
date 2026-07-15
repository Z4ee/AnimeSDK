#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class OrigamiTraceTalk; }

#define RPG_GAMECORE_PLAYORIGAMITRACETALK_METHOD_3_6B33563FF74DE26A_OFFSET UNITYSDK_OFFSET(0x1BA05980)
#define RPG_GAMECORE_PLAYORIGAMITRACETALK_METHOD_3_AC3213DE03C86F03_OFFSET UNITYSDK_OFFSET(0x1BA059C0)
#define RPG_GAMECORE_PLAYORIGAMITRACETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA059B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayOrigamiTraceTalk_TypeDefinitionIndex = 21064;

	class PlayOrigamiTraceTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x18
		::Il2CppArray<::RPG::GameCore::OrigamiTraceTalk*>* TalkList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYORIGAMITRACETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6B33563FF74DE26A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayOrigamiTraceTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayOrigamiTraceTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYORIGAMITRACETALK_METHOD_3_6B33563FF74DE26A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC3213DE03C86F03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayOrigamiTraceTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayOrigamiTraceTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYORIGAMITRACETALK_METHOD_3_AC3213DE03C86F03_OFFSET))(a1, a2);
		}
	};
}
