#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDAA81F0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDAA8880)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDAA87C0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDAA88F0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDAA8830)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDAA87E0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAA8080)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0xDAA8060)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xDAA80C0)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int BlindBoxPetTypeFactory__CreateAll_d__1_TypeDefinitionIndex = 75738;

	class BlindBoxPetTypeFactory__CreateAll_d__1 : public ::System::Object
	{
	public:
		::System::Collections::IEnumerator* __7__wrap1; // 0x10
		::RPG::Client::Pet::BlindBox::BlindBoxPetType __2__current; // 0x18
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1___M__FINALLY1_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::BlindBoxPetType System_Collections_Generic_IEnumerator_RPG_Client_Pet_BlindBox_BlindBoxPetType__get_Current()
		{
			return ((::RPG::Client::Pet::BlindBox::BlindBoxPetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::Pet::BlindBox::BlindBoxPetType>* System_Collections_Generic_IEnumerable_RPG_Client_Pet_BlindBox_BlindBoxPetType__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::Pet::BlindBox::BlindBoxPetType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
