#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE_METHOD_4_337F67224CFB6F59_OFFSET UNITYSDK_OFFSET(0x1DEC07E0)
#define RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE_METHOD_4_683CD471AC5199BC_OFFSET UNITYSDK_OFFSET(0x1DEC0790)
#define RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC07D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueTournExhibitionBoothUpdate_TypeDefinitionIndex = 21868;

	class WaitRogueTournExhibitionBoothUpdate : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_683CD471AC5199BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE_METHOD_4_683CD471AC5199BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_337F67224CFB6F59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE_METHOD_4_337F67224CFB6F59_OFFSET))(a1, a2);
		}
	};
}
