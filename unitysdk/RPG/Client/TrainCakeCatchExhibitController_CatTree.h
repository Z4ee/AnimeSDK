#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatTreeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class TrainCakeCatchExhibitController; }
namespace RPG::Client { class TrainCakeCatchExhibitController_Cat; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x197C34C0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE_GETATTACHPOINTPOS_OFFSET UNITYSDK_OFFSET(0x197C2B30)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE_GET__CATTREEENTITY_OFFSET UNITYSDK_OFFSET(0x197C7BB0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE_SETCATTREETYPE_OFFSET UNITYSDK_OFFSET(0x197C2260)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE_SETCAT_OFFSET UNITYSDK_OFFSET(0x197C24F0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x197C3240)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE__REFRESHLOCATIONONCATTREETYPECHANGED_OFFSET UNITYSDK_OFFSET(0x197C7C40)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE__SETPREFIX_OFFSET UNITYSDK_OFFSET(0x197C7A00)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainCakeCatchExhibitController_CatTree_TypeDefinitionIndex = 60333;

	class TrainCakeCatchExhibitController_CatTree : public ::System::Object
	{
	public:
		::RPG::Client::TrainCakeCatchExhibitController* _Owner; // 0x10
		::Il2CppArray<::RPG::Client::TrainCakeCatchExhibitController_Cat*>* Cats; // 0x18
		::RPG::Client::TrainCakeCatchExhibitController_CatTreeType _CatTreeType; // 0x20

		::System::Void _ctor(::RPG::Client::TrainCakeCatchExhibitController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE_DISPOSE_OFFSET))(this);
		}

		::System::Void SetCatTreeType(::RPG::Client::TrainCakeCatchExhibitController_CatTreeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController_CatTreeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE_SETCATTREETYPE_OFFSET))(this, a1);
		}

		::System::Void _RefreshLocationOnCatTreeTypeChanged(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE__REFRESHLOCATIONONCATTREETYPECHANGED_OFFSET))(this, a1);
		}

		::System::Void SetCat(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE_SETCAT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetAttachPointPos(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE_GETATTACHPOINTPOS_OFFSET))(this, a1);
		}

		::System::Void _SetPrefix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE__SETPREFIX_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get__CatTreeEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATTREE_GET__CATTREEENTITY_OFFSET))(this);
		}
	};
}
