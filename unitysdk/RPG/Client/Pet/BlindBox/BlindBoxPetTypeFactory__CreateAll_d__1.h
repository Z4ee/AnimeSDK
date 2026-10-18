#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDAB1A60)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDAB20F0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDAB2030)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDAB2160)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDAB20A0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDAB2050)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAB18F0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0xDAB18D0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__CREATEALL_D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xDAB1930)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int BlindBoxPetTypeFactory__CreateAll_d__1_TypeDefinitionIndex = 75739;

	class BlindBoxPetTypeFactory__CreateAll_d__1 : public ::System::Object
	{
	public:
		::System::Collections::IEnumerator* __7__wrap1; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Int32 __l__initialThreadId; // 0x1C
		::RPG::Client::Pet::BlindBox::BlindBoxPetType __2__current; // 0x20

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
