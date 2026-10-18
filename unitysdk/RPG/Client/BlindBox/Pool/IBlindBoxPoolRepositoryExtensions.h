#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Pool { class IBlindBoxPool; }
namespace RPG::Client::BlindBox::Pool { class IBlindBoxPoolRepository; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLREPOSITORYEXTENSIONS_GETALLOPEN_OFFSET UNITYSDK_OFFSET(0xC886370)
#define RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLREPOSITORYEXTENSIONS_GETFIRSTOPEN_OFFSET UNITYSDK_OFFSET(0xC883E00)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int IBlindBoxPoolRepositoryExtensions_TypeDefinitionIndex = 74949;

	class IBlindBoxPoolRepositoryExtensions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Pool::IBlindBoxPool*>* GetAllOpen(::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepository* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Pool::IBlindBoxPool*>*(*)(::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepository*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLREPOSITORYEXTENSIONS_GETALLOPEN_OFFSET))(a1);
		}

		static ::RPG::Client::BlindBox::Pool::IBlindBoxPool* GetFirstOpen(::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepository* a1)
		{
			return ((::RPG::Client::BlindBox::Pool::IBlindBoxPool*(*)(::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepository*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLREPOSITORYEXTENSIONS_GETFIRSTOPEN_OFFSET))(a1);
		}
	};
}
