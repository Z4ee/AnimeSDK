#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHPREVIEWUPDATE_METHOD_4_ED254606BC15CAC8_OFFSET UNITYSDK_OFFSET(0x19E5F840)
#define RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHPREVIEWUPDATE_METHOD_4_F240B587F730E15E_OFFSET UNITYSDK_OFFSET(0x19E5F920)
#define RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHPREVIEWUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E5F8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueTournCollectionBoothPreviewUpdate_TypeDefinitionIndex = 20888;

	class WaitRogueTournCollectionBoothPreviewUpdate : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHPREVIEWUPDATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ED254606BC15CAC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHPREVIEWUPDATE_METHOD_4_ED254606BC15CAC8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F240B587F730E15E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHPREVIEWUPDATE_METHOD_4_F240B587F730E15E_OFFSET))(a1, a2);
		}
	};
}
