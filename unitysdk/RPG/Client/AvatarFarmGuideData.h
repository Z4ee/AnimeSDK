#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARFARMGUIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x193DCFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarFarmGuideData_TypeDefinitionIndex = 65706;

	class AvatarFarmGuideData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* NeedMaterialList; // 0x10
		::System::UInt32 GuideID; // 0x18
		::System::Boolean ExistingInvalidItem; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARFARMGUIDEDATA__CTOR_OFFSET))(this);
		}
	};
}
