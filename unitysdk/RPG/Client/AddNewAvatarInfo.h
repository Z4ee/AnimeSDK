#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemList; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ADDNEWAVATARINFO_CREATEADDNEWAVATARINFO_OFFSET UNITYSDK_OFFSET(0x901EE90)
#define RPG_CLIENT_ADDNEWAVATARINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x901F140)

namespace RPG::Client
{
	inline static constexpr unsigned int AddNewAvatarInfo_TypeDefinitionIndex = 50747;

	class AddNewAvatarInfo : public ::System::Object
	{
	public:
		::RPG::Client::IAvatarInfoProvider* NewAvatar; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* AdditionalItemList; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* ConvertItemList; // 0x20
		::System::Boolean IsNew; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDNEWAVATARINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AddNewAvatarInfo* CreateAddNewAvatarInfo(::RPG::Client::IAvatarInfoProvider* avatar, ::Proto::ItemList* convertItemList, ::Proto::ItemList* additionalItemList, ::System::Boolean isFirstGet)
		{
			return ((::RPG::Client::AddNewAvatarInfo*(*)(::RPG::Client::IAvatarInfoProvider*, ::Proto::ItemList*, ::Proto::ItemList*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDNEWAVATARINFO_CREATEADDNEWAVATARINFO_OFFSET))(avatar, convertItemList, additionalItemList, isFirstGet);
		}
	};
}
