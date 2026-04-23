#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_BUBBLETALK_METHOD_4_8F067FC78A273FBF_OFFSET UNITYSDK_OFFSET(0x18DF7B60)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_BUBBLETALK_METHOD_4_E57441599F027FAE_OFFSET UNITYSDK_OFFSET(0x18DF7C40)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_BUBBLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF7BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_BubbleTalk_TypeDefinitionIndex = 20282;

	class ST_Side_Hipplen_BubbleTalk : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::Client::TextID ContentTextID; // 0x18
		::System::Single Duration; // 0x28
		::RPG::MVector3 Offset; // 0x2C
		::System::Boolean InverseDirection; // 0x38
		::System::Boolean CloseBubbleOnExit; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_BUBBLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8F067FC78A273FBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_BubbleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_BubbleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_BUBBLETALK_METHOD_4_8F067FC78A273FBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E57441599F027FAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_BubbleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_BubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_BUBBLETALK_METHOD_4_E57441599F027FAE_OFFSET))(a1, a2);
		}
	};
}
