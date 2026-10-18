#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Pool { class BlindBoxOpenResultPet; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENSETRESULT_GET_FINALPROTECTTIME_OFFSET UNITYSDK_OFFSET(0xC8876D0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENSETRESULT_GET_OBTAINEDPETS_OFFSET UNITYSDK_OFFSET(0xC887690)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENSETRESULT_GET_POOLID_OFFSET UNITYSDK_OFFSET(0xC887680)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENSETRESULT_GET_STEPPROTECTTIME_OFFSET UNITYSDK_OFFSET(0xC8876E0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENSETRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xC887500)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxOpenSetResult_TypeDefinitionIndex = 74959;

	class BlindBoxOpenSetResult : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::BlindBox::Pool::BlindBoxOpenResultPet*>* _ObtainedPets; // 0x10
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::BlindBox::Pool::BlindBoxOpenResultPet*>* _ReadOnlyObtainedPets; // 0x18
		::System::UInt32 _PoolId_k__BackingField; // 0x20
		::System::Single _FinalProtectTime_k__BackingField; // 0x24
		::System::Single _StepProtectTime_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Pool::BlindBoxOpenResultPet*>* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Pool::BlindBoxOpenResultPet*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENSETRESULT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_PoolId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENSETRESULT_GET_POOLID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BlindBox::Pool::BlindBoxOpenResultPet*>* get_ObtainedPets()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BlindBox::Pool::BlindBoxOpenResultPet*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENSETRESULT_GET_OBTAINEDPETS_OFFSET))(this);
		}

		::System::Single get_FinalProtectTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENSETRESULT_GET_FINALPROTECTTIME_OFFSET))(this);
		}

		::System::Single get_StepProtectTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXOPENSETRESULT_GET_STEPPROTECTTIME_OFFSET))(this);
		}
	};
}
