#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PetDiy { class PetDiyAreaInfo; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDABB890)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDABB8C0)
#define RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER___C___INITAREAS_B__14_0_OFFSET UNITYSDK_OFFSET(0xDABB8D0)

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int ParkPetDiyController___c_TypeDefinitionIndex = 74477;

	class ParkPetDiyController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::PetDiy::PetDiyAreaInfo*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::RPG::Client::PetDiy::PetDiyAreaInfo*>**)Il2CppClass::FromTypeDefinitionIndex(ParkPetDiyController___c_TypeDefinitionIndex)->GetStaticField(0x15AC0);
		}
		static ::RPG::Client::PetDiy::ParkPetDiyController___c** StaticGet___9()
		{
			return (::RPG::Client::PetDiy::ParkPetDiyController___c**)Il2CppClass::FromTypeDefinitionIndex(ParkPetDiyController___c_TypeDefinitionIndex)->GetStaticField(0x15AC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitAreas_b__14_0(::RPG::Client::PetDiy::PetDiyAreaInfo* a1, ::RPG::Client::PetDiy::PetDiyAreaInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyAreaInfo*, ::RPG::Client::PetDiy::PetDiyAreaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYCONTROLLER___C___INITAREAS_B__14_0_OFFSET))(this, a1, a2);
		}
	};
}
