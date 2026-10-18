#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetDiy/PetDiyCameraUsage.h"
#include "unitysdk/System/Object.h"

class Class_1_0A99AF1699F7F17E_1;
class Class_1_7FF19F6206AF6DD7_1;
namespace RPG::Client::PetDiy { class ParkPetDiyEditController; }
namespace RPG::Client::PetDiy { class PetDiyAreaInfo; }
namespace RPG::Client::PetDiy { class PetDiyCameraController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_DESTROYENTRANCERANDOMPETS_OFFSET UNITYSDK_OFFSET(0xDAC4E90)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_GETPETDIYAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0xDAC3860)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_GETPETDIYAREAINFO_OFFSET UNITYSDK_OFFSET(0xDAC38A0)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_GETPETDIYEDITCONTROLLER_OFFSET UNITYSDK_OFFSET(0xDAC39A0)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_HIDEENTRANCERANDOMPETS_OFFSET UNITYSDK_OFFSET(0xDAC4E40)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_INITENTRANCERANDOMPETS_OFFSET UNITYSDK_OFFSET(0xDAC41E0)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_RELEASEPETDIYCAMERACONTROLLER_OFFSET UNITYSDK_OFFSET(0xDAC3D40)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_REQUIREPETDIYCAMERACONTROLLER_OFFSET UNITYSDK_OFFSET(0xDAC3CA0)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_SETADVENTUREALLSLOTSACTIVE_OFFSET UNITYSDK_OFFSET(0xDAC4D30)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_SHOWENTRANCERANDOMPETS_OFFSET UNITYSDK_OFFSET(0xDAC4DF0)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_SYNCBYSERVERINFO_OFFSET UNITYSDK_OFFSET(0xDAC3160)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAC5070)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER__CREATERANDOMENTRANCEPETS_OFFSET UNITYSDK_OFFSET(0xDAC46D0)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC2D10)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER__INITAREAS_OFFSET UNITYSDK_OFFSET(0xDAC2D70)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER__SETENTRANCERANDOMPETSVISIBLE_OFFSET UNITYSDK_OFFSET(0xDAC4C00)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER__SYNCBYSERVERINFO_G__GETAREAINFO_1_0_OFFSET UNITYSDK_OFFSET(0xDAC3380)

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int ParkPetDiyController_TypeDefinitionIndex = 74476;

	class ParkPetDiyController : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet__EntranceChimeraAnchorIDs()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ParkPetDiyController_TypeDefinitionIndex)->GetStaticField(0x161C0);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet__EntranceHiddenAndRaccoonAnchorIDs()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ParkPetDiyController_TypeDefinitionIndex)->GetStaticField(0x161C8);
		}
		// static const ::System::UInt32 _EntranceAnchorGroupID = 0x3A; // 0x0
		// static const ::System::String* _EntrancePetModelScaleKey; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyAreaInfo*>* _PetDiyAreaInfoList; // 0x10
		::RPG::Client::PetDiy::PetDiyCameraController* _PetDiyCameraController; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _EntrancePetEntities; // 0x20
		::RPG::Client::PetDiy::PetDiyCameraUsage _PetDiyCameraUsage; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void SyncByServerInfo(::Class_1_0A99AF1699F7F17E_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_SYNCBYSERVERINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyAreaInfo*>* GetPetDiyAreaInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyAreaInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_GETPETDIYAREAINFOLIST_OFFSET))(this);
		}

		::RPG::Client::PetDiy::PetDiyAreaInfo* GetPetDiyAreaInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::PetDiy::PetDiyAreaInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_GETPETDIYAREAINFO_OFFSET))(this, a1);
		}

		::RPG::Client::PetDiy::ParkPetDiyEditController* GetPetDiyEditController(::RPG::Client::PetDiy::PetDiyAreaInfo* a1)
		{
			return ((::RPG::Client::PetDiy::ParkPetDiyEditController*(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyAreaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_GETPETDIYEDITCONTROLLER_OFFSET))(this, a1);
		}

		::RPG::Client::PetDiy::PetDiyCameraController* RequirePetDiyCameraController(::RPG::Client::PetDiy::PetDiyCameraUsage a1)
		{
			return ((::RPG::Client::PetDiy::PetDiyCameraController*(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyCameraUsage))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_REQUIREPETDIYCAMERACONTROLLER_OFFSET))(this, a1);
		}

		::System::Void ReleasePetDiyCameraController(::RPG::Client::PetDiy::PetDiyCameraUsage a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyCameraUsage))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_RELEASEPETDIYCAMERACONTROLLER_OFFSET))(this, a1);
		}

		::System::Void InitEntranceRandomPets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_INITENTRANCERANDOMPETS_OFFSET))(this);
		}

		::System::Void SetAdventureAllSlotsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_SETADVENTUREALLSLOTSACTIVE_OFFSET))(this, a1);
		}

		::System::Void ShowEntranceRandomPets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_SHOWENTRANCERANDOMPETS_OFFSET))(this);
		}

		::System::Void _CreateRandomEntrancePets(::RPG::GameCore::GameWorld* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER__CREATERANDOMENTRANCEPETS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HideEntranceRandomPets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_HIDEENTRANCERANDOMPETS_OFFSET))(this);
		}

		::System::Void DestroyEntranceRandomPets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER_DESTROYENTRANCERANDOMPETS_OFFSET))(this);
		}

		::System::Void _SetEntranceRandomPetsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER__SETENTRANCERANDOMPETSVISIBLE_OFFSET))(this, a1);
		}

		::System::Void _InitAreas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER__INITAREAS_OFFSET))(this);
		}

		static ::Class_1_7FF19F6206AF6DD7_1* _SyncByServerInfo_g__GetAreaInfo_1_0(::Class_1_0A99AF1699F7F17E_1* a1, ::System::UInt32 a2)
		{
			return ((::Class_1_7FF19F6206AF6DD7_1*(*)(::Class_1_0A99AF1699F7F17E_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER__SYNCBYSERVERINFO_G__GETAREAINFO_1_0_OFFSET))(a1, a2);
		}
	};
}
