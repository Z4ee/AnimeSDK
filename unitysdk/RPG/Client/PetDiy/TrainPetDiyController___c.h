#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PetDiy { class PetDiyAreaInfo; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAC3DC0)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC3DF0)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER___C___INITAREAS_B__6_0_OFFSET UNITYSDK_OFFSET(0xDAC3E00)

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int TrainPetDiyController___c_TypeDefinitionIndex = 74489;

	class TrainPetDiyController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::PetDiy::PetDiyAreaInfo*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::RPG::Client::PetDiy::PetDiyAreaInfo*>**)Il2CppClass::FromTypeDefinitionIndex(TrainPetDiyController___c_TypeDefinitionIndex)->GetStaticField(0x16DE0);
		}
		static ::RPG::Client::PetDiy::TrainPetDiyController___c** StaticGet___9()
		{
			return (::RPG::Client::PetDiy::TrainPetDiyController___c**)Il2CppClass::FromTypeDefinitionIndex(TrainPetDiyController___c_TypeDefinitionIndex)->GetStaticField(0x16DE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitAreas_b__6_0(::RPG::Client::PetDiy::PetDiyAreaInfo* a1, ::RPG::Client::PetDiy::PetDiyAreaInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyAreaInfo*, ::RPG::Client::PetDiy::PetDiyAreaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER___C___INITAREAS_B__6_0_OFFSET))(this, a1, a2);
		}
	};
}
