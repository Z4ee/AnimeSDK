#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class PetShowSuppressorSet; }
namespace System { template <typename T> class WeakReference_1; }

#define RPG_CLIENT_PET_PETSHOWSUPPRESSORSET_SUPPRESSOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAC2B10)
#define RPG_CLIENT_PET_PETSHOWSUPPRESSORSET_SUPPRESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC2900)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetShowSuppressorSet_Suppressor_TypeDefinitionIndex = 75707;

	class PetShowSuppressorSet_Suppressor : public ::System::Object
	{
	public:
		::System::WeakReference_1<::RPG::Client::Pet::PetShowSuppressorSet*>* _OwnerRef; // 0x10
		::System::Guid _Id; // 0x18
		::System::Boolean _Released; // 0x28

		::System::Void _ctor(::RPG::Client::Pet::PetShowSuppressorSet* a1, ::System::Guid a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::PetShowSuppressorSet*, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETSHOWSUPPRESSORSET_SUPPRESSOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETSHOWSUPPRESSORSET_SUPPRESSOR_DISPOSE_OFFSET))(this);
		}
	};
}
