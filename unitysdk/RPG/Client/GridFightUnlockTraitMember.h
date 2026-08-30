#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_UNLOCKROLEIDS_OFFSET UNITYSDK_OFFSET(0x1BB026A0)
#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_UNLOCKTRAITID_OFFSET UNITYSDK_OFFSET(0x1BB02740)
#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BB1DC50)
#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB1DC40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUnlockTraitMember_TypeDefinitionIndex = 65095;

	class GridFightUnlockTraitMember : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_UNLOCKTRAITID_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* get_UnlockRoleIDs()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_UNLOCKROLEIDS_OFFSET))(this);
		}
	};
}
