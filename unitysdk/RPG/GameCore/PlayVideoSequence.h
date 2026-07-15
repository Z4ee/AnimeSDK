#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VideoSequenceItem; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYVIDEOSEQUENCE_METHOD_3_2EFF72E9BF68731E_OFFSET UNITYSDK_OFFSET(0x1BA08C80)
#define RPG_GAMECORE_PLAYVIDEOSEQUENCE_METHOD_3_D0FAA631BE306B22_OFFSET UNITYSDK_OFFSET(0x1BA08CC0)
#define RPG_GAMECORE_PLAYVIDEOSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA08CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayVideoSequence_TypeDefinitionIndex = 21117;

	class PlayVideoSequence : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BlockAlias; // 0x18
		::System::String* PrefabAlias; // 0x20
		::System::Boolean GotoNext; // 0x28
		::System::Boolean GotoNextImmediately; // 0x29
		::Il2CppArray<::RPG::GameCore::VideoSequenceItem*>* VideoList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVIDEOSEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2EFF72E9BF68731E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayVideoSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayVideoSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVIDEOSEQUENCE_METHOD_3_2EFF72E9BF68731E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D0FAA631BE306B22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayVideoSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVIDEOSEQUENCE_METHOD_3_D0FAA631BE306B22_OFFSET))(a1, a2);
		}
	};
}
