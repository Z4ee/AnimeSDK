#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHUPDATE_METHOD_4_062E9B2EE0CFA8BC_OFFSET UNITYSDK_OFFSET(0x191073A0)
#define RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHUPDATE_METHOD_4_FDDF2901365F4CCA_OFFSET UNITYSDK_OFFSET(0x191072C0)
#define RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19107340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueTournCollectionBoothUpdate_TypeDefinitionIndex = 20975;

	class WaitRogueTournCollectionBoothUpdate : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHUPDATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FDDF2901365F4CCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueTournCollectionBoothUpdate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueTournCollectionBoothUpdate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHUPDATE_METHOD_4_FDDF2901365F4CCA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_062E9B2EE0CFA8BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueTournCollectionBoothUpdate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueTournCollectionBoothUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHUPDATE_METHOD_4_062E9B2EE0CFA8BC_OFFSET))(a1, a2);
		}
	};
}
