#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_776;
namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace RPG::Client::PetDiy { class PetDiyData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE_COMPAREPET_OFFSET UNITYSDK_OFFSET(0xDACB680)
#define RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE_GETPETDIYDATALIST_OFFSET UNITYSDK_OFFSET(0xDACB4F0)
#define RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE__CLEARLOSTPETFROMDIYDATALIST_OFFSET UNITYSDK_OFFSET(0xDACBBB0)
#define RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xDACAEA0)
#define RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE__GETPETKINDORDER_OFFSET UNITYSDK_OFFSET(0xDACBB40)
#define RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE__INITPETDIYDATALIST_OFFSET UNITYSDK_OFFSET(0xDACAF00)
#define RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE__ISPETONTRADED_OFFSET UNITYSDK_OFFSET(0xDACBE30)
#define RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE__SORTPETDIYDATALIST_OFFSET UNITYSDK_OFFSET(0xDACB540)
#define RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE___SORTPETDIYDATALIST_G__SORTFUNC_6_0_OFFSET UNITYSDK_OFFSET(0xDACBEE0)

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int PetDiyEditControllerBase_TypeDefinitionIndex = 74485;

	class PetDiyEditControllerBase : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_776* _Owner; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyData*>* _PetDiyDataList; // 0x18

		::System::Void _ctor(::Class_0_16E4307DCC419505_776* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_776*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyData*>* GetPetDiyDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE_GETPETDIYDATALIST_OFFSET))(this);
		}

		static ::System::Int32 ComparePet(::RPG::Client::Pet::IPet* a1, ::RPG::Client::Pet::IPet* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Int32(*)(::RPG::Client::Pet::IPet*, ::RPG::Client::Pet::IPet*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE_COMPAREPET_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 _GetPetKindOrder(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE__GETPETKINDORDER_OFFSET))(a1);
		}

		::System::Void _InitPetDiyDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE__INITPETDIYDATALIST_OFFSET))(this);
		}

		::System::Void _ClearLostPetFromDiyDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE__CLEARLOSTPETFROMDIYDATALIST_OFFSET))(this);
		}

		::System::Void _SortPetDiyDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE__SORTPETDIYDATALIST_OFFSET))(this);
		}

		::System::Boolean _IsPetOnTraded(::RPG::Client::PetDiy::PetDiyData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE__ISPETONTRADED_OFFSET))(this, a1);
		}

		static ::System::Int32 __SortPetDiyDataList_g__SortFunc_6_0(::RPG::Client::PetDiy::PetDiyData* a1, ::RPG::Client::PetDiy::PetDiyData* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::PetDiy::PetDiyData*, ::RPG::Client::PetDiy::PetDiyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYEDITCONTROLLERBASE___SORTPETDIYDATALIST_G__SORTFUNC_6_0_OFFSET))(a1, a2);
		}
	};
}
