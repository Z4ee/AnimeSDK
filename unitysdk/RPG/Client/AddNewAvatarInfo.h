#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemList; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ADDNEWAVATARINFO_CREATEADDNEWAVATARINFO_OFFSET UNITYSDK_OFFSET(0xC6AB910)
#define RPG_CLIENT_ADDNEWAVATARINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC6ABCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int AddNewAvatarInfo_TypeDefinitionIndex = 62546;

	class AddNewAvatarInfo : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* NewAvatar; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* AdditionalItemList; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* ConvertItemList; // 0x20
		::System::Boolean IsNew; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDNEWAVATARINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AddNewAvatarInfo* CreateAddNewAvatarInfo(::RPG::AvatarSystem::IAvatar* a1, ::Proto::ItemList* a2, ::Proto::ItemList* a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::AddNewAvatarInfo*(*)(::RPG::AvatarSystem::IAvatar*, ::Proto::ItemList*, ::Proto::ItemList*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDNEWAVATARINFO_CREATEADDNEWAVATARINFO_OFFSET))(a1, a2, a3, a4);
		}
	};
}
