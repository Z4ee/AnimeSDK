#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PET_PETSHOWSUPPRESSORSET_ACQUIRE_OFFSET UNITYSDK_OFFSET(0xDAB3380)
#define RPG_CLIENT_PET_PETSHOWSUPPRESSORSET_CREATE_OFFSET UNITYSDK_OFFSET(0xDAB1EA0)
#define RPG_CLIENT_PET_PETSHOWSUPPRESSORSET_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAB21F0)
#define RPG_CLIENT_PET_PETSHOWSUPPRESSORSET_GET_ISSUPPRESSED_OFFSET UNITYSDK_OFFSET(0xDAB6FA0)
#define RPG_CLIENT_PET_PETSHOWSUPPRESSORSET__CTOR_OFFSET UNITYSDK_OFFSET(0xDAB9000)
#define RPG_CLIENT_PET_PETSHOWSUPPRESSORSET__RELEASE_OFFSET UNITYSDK_OFFSET(0xDAB9130)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetShowSuppressorSet_TypeDefinitionIndex = 75705;

	class PetShowSuppressorSet : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* _OnChanged; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::String*>* _ActiveSuppressors; // 0x18
		::System::Boolean _IsDisposed; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETSHOWSUPPRESSORSET__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::Pet::PetShowSuppressorSet* Create(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::RPG::Client::Pet::PetShowSuppressorSet*(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETSHOWSUPPRESSORSET_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETSHOWSUPPRESSORSET_DISPOSE_OFFSET))(this);
		}

		::System::IDisposable* Acquire(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETSHOWSUPPRESSORSET_ACQUIRE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _Release(::System::Guid a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETSHOWSUPPRESSORSET__RELEASE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSuppressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETSHOWSUPPRESSORSET_GET_ISSUPPRESSED_OFFSET))(this);
		}
	};
}
