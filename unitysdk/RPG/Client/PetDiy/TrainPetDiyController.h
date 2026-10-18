#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A99AF1699F7F17E_1;
class Class_1_7FF19F6206AF6DD7_1;
class Class_1_963E317C37FB5E9A_1;
namespace RPG::Client::PetDiy { class PetDiyAreaInfo; }
namespace RPG::Client::PetDiy { class TrainPetDiyEditController; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_GETPETDIYAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0xDACD250)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_GETPETDIYAREAINFO_OFFSET UNITYSDK_OFFSET(0xDACD440)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_GETPETDIYEDITCONTROLLER_OFFSET UNITYSDK_OFFSET(0xDACD290)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_SYNCBYSERVERINFO_1_OFFSET UNITYSDK_OFFSET(0xDACD1C0)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_SYNCBYSERVERINFO_OFFSET UNITYSDK_OFFSET(0xDACCBB0)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDACC6B0)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER__GETSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xDACD540)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER__INITAREAS_OFFSET UNITYSDK_OFFSET(0xDACC6F0)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER__SYNCBYSERVERINFO_G__GETAREAINFO_1_0_OFFSET UNITYSDK_OFFSET(0xDACCDB0)

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int TrainPetDiyController_TypeDefinitionIndex = 74489;

	class TrainPetDiyController : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyAreaInfo*>* _PetDiyAreaInfoList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SyncByServerInfo(::Class_1_0A99AF1699F7F17E_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_SYNCBYSERVERINFO_OFFSET))(this, a1);
		}

		::System::Void SyncByServerInfo_1(::System::Collections::Generic::IList_1<::Class_1_963E317C37FB5E9A_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_963E317C37FB5E9A_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_SYNCBYSERVERINFO_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyAreaInfo*>* GetPetDiyAreaInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyAreaInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_GETPETDIYAREAINFOLIST_OFFSET))(this);
		}

		::RPG::Client::PetDiy::TrainPetDiyEditController* GetPetDiyEditController()
		{
			return ((::RPG::Client::PetDiy::TrainPetDiyEditController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_GETPETDIYEDITCONTROLLER_OFFSET))(this);
		}

		::RPG::Client::PetDiy::PetDiyAreaInfo* GetPetDiyAreaInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::PetDiy::PetDiyAreaInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_GETPETDIYAREAINFO_OFFSET))(this, a1);
		}

		::System::Void _InitAreas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER__INITAREAS_OFFSET))(this);
		}

		::System::UInt32 _GetSlotCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER__GETSLOTCOUNT_OFFSET))(this, a1);
		}

		static ::Class_1_7FF19F6206AF6DD7_1* _SyncByServerInfo_g__GetAreaInfo_1_0(::Class_1_0A99AF1699F7F17E_1* a1, ::System::UInt32 a2)
		{
			return ((::Class_1_7FF19F6206AF6DD7_1*(*)(::Class_1_0A99AF1699F7F17E_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER__SYNCBYSERVERINFO_G__GETAREAINFO_1_0_OFFSET))(a1, a2);
		}
	};
}
