#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITMUSICRHYTHMNOTIFY_METHOD_3_44BB6C27523FFD67_OFFSET UNITYSDK_OFFSET(0x1DEBC610)
#define RPG_GAMECORE_WAITMUSICRHYTHMNOTIFY_METHOD_3_54FA83AA716FC5D0_OFFSET UNITYSDK_OFFSET(0x1DEBC5D0)
#define RPG_GAMECORE_WAITMUSICRHYTHMNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBC600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMusicRhythmNotify_TypeDefinitionIndex = 21816;

	class WaitMusicRhythmNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NotifyName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotify; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMNOTIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_54FA83AA716FC5D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMusicRhythmNotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMusicRhythmNotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMNOTIFY_METHOD_3_54FA83AA716FC5D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_44BB6C27523FFD67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMusicRhythmNotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMusicRhythmNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMNOTIFY_METHOD_3_44BB6C27523FFD67_OFFSET))(a1, a2);
		}
	};
}
