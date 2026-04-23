#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE_METHOD_4_337F67224CFB6F59_OFFSET UNITYSDK_OFFSET(0x19107680)
#define RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE_METHOD_4_D74E9117AE22CC87_OFFSET UNITYSDK_OFFSET(0x191075A0)
#define RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19107620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueTournExhibitionBoothUpdate_TypeDefinitionIndex = 20981;

	class WaitRogueTournExhibitionBoothUpdate : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D74E9117AE22CC87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE_METHOD_4_D74E9117AE22CC87_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_337F67224CFB6F59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE_METHOD_4_337F67224CFB6F59_OFFSET))(a1, a2);
		}
	};
}
