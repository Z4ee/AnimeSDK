#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAA7420)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDAA7460)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY___C__HASCHROMAAPPEARANCE_B__3_1_OFFSET UNITYSDK_OFFSET(0xDAA7470)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int BlindBoxPetRepository___c_TypeDefinitionIndex = 75732;

	class BlindBoxPetRepository___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::System::Boolean>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BlindBoxPetRepository___c_TypeDefinitionIndex)->GetStaticField(0x14B60);
		}
		static ::RPG::Client::Pet::BlindBox::BlindBoxPetRepository___c** StaticGet___9()
		{
			return (::RPG::Client::Pet::BlindBox::BlindBoxPetRepository___c**)Il2CppClass::FromTypeDefinitionIndex(BlindBoxPetRepository___c_TypeDefinitionIndex)->GetStaticField(0x14B68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasChromaAppearance_b__3_1(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY___C__HASCHROMAAPPEARANCE_B__3_1_OFFSET))(this, a1);
		}
	};
}
