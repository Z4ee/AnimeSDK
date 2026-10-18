#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PetDiy { class PetDiyData; }
namespace RPG::Client::PetDiy { class PetSlotInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PETDIY_PETDIYAREAINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAC8AB0)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC8AF0)
#define RPG_CLIENT_PETDIY_PETDIYAREAINFO___C__GETPLACEDPETDIYDATALIST_B__7_0_OFFSET UNITYSDK_OFFSET(0xDAC8B00)

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int PetDiyAreaInfo___c_TypeDefinitionIndex = 74481;

	class PetDiyAreaInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PetDiy::PetDiyAreaInfo___c** StaticGet___9()
		{
			return (::RPG::Client::PetDiy::PetDiyAreaInfo___c**)Il2CppClass::FromTypeDefinitionIndex(PetDiyAreaInfo___c_TypeDefinitionIndex)->GetStaticField(0x16530);
		}
		static ::System::Func_2<::RPG::Client::PetDiy::PetSlotInfo*, ::RPG::Client::PetDiy::PetDiyData*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::PetDiy::PetSlotInfo*, ::RPG::Client::PetDiy::PetDiyData*>**)Il2CppClass::FromTypeDefinitionIndex(PetDiyAreaInfo___c_TypeDefinitionIndex)->GetStaticField(0x16538);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::PetDiy::PetDiyData* _GetPlacedPetDiyDataList_b__7_0(::RPG::Client::PetDiy::PetSlotInfo* a1)
		{
			return ((::RPG::Client::PetDiy::PetDiyData*(*)(::PVOID, ::RPG::Client::PetDiy::PetSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYAREAINFO___C__GETPLACEDPETDIYDATALIST_B__7_0_OFFSET))(this, a1);
		}
	};
}
