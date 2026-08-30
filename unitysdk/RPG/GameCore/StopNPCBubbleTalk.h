#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STOPNPCBUBBLETALK_METHOD_3_544A6BB423A19E42_OFFSET UNITYSDK_OFFSET(0x1CAFD960)
#define RPG_GAMECORE_STOPNPCBUBBLETALK_METHOD_3_8621BDE3F7EE59C9_OFFSET UNITYSDK_OFFSET(0x1CAFD9A0)
#define RPG_GAMECORE_STOPNPCBUBBLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAFD990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopNPCBubbleTalk_TypeDefinitionIndex = 21352;

	class StopNPCBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* UniqueIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPNPCBUBBLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_544A6BB423A19E42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopNPCBubbleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopNPCBubbleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPNPCBUBBLETALK_METHOD_3_544A6BB423A19E42_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8621BDE3F7EE59C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopNPCBubbleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopNPCBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPNPCBUBBLETALK_METHOD_3_8621BDE3F7EE59C9_OFFSET))(a1, a2);
		}
	};
}
