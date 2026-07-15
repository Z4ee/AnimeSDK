#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_1A05043E9AD1C5D3;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_UNLOCKROLEIDS_OFFSET UNITYSDK_OFFSET(0x18FAEDC0)
#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_UNLOCKTRAITID_OFFSET UNITYSDK_OFFSET(0x18FAED20)
#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18FAECD0)
#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FAECC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUnlockTraitMember_TypeDefinitionIndex = 62111;

	class GridFightUnlockTraitMember : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_1A05043E9AD1C5D3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_UPDATE_OFFSET))(this, a1);
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
