#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_WAITENTITYMUSICCUE_METHOD_3_D0D3F013B6D64E4D_OFFSET UNITYSDK_OFFSET(0x1B8A3AD0)
#define RPG_GAMECORE_WAITENTITYMUSICCUE_METHOD_3_EBDDB3BB325F1ED4_OFFSET UNITYSDK_OFFSET(0x1B8A3A80)
#define RPG_GAMECORE_WAITENTITYMUSICCUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A3AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitEntityMusicCue_TypeDefinitionIndex = 19834;

	class WaitEntityMusicCue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* MusicCueName; // 0x18
		::System::Boolean IsLoop; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCueHit; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EBDDB3BB325F1ED4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitEntityMusicCue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitEntityMusicCue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUE_METHOD_3_EBDDB3BB325F1ED4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D0D3F013B6D64E4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitEntityMusicCue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitEntityMusicCue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUE_METHOD_3_D0D3F013B6D64E4D_OFFSET))(a1, a2);
		}
	};
}
