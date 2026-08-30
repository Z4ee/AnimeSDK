#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION_METHOD_4_92E5F86395E0D76E_OFFSET UNITYSDK_OFFSET(0x1DB43530)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION_METHOD_4_C4534179AB2279B3_OFFSET UNITYSDK_OFFSET(0x1DB43490)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB434F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_SetEmotion_TypeDefinitionIndex = 21063;

	class ST_Side_Hipplen_SetEmotion : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* MeshName; // 0x18
		::System::Int32 EmotionIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C4534179AB2279B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION_METHOD_4_C4534179AB2279B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_92E5F86395E0D76E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION_METHOD_4_92E5F86395E0D76E_OFFSET))(a1, a2);
		}
	};
}
