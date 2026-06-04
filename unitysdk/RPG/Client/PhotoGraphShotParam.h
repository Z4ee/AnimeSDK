#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PHOTOGRAPHSHOTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC382B30)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphShotParam_TypeDefinitionIndex = 56952;

	class PhotoGraphShotParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* TargetEntityList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* ShotAims; // 0x18
		::System::Boolean SkipPhotoPreviewDialog; // 0x20

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSHOTPARAM__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
