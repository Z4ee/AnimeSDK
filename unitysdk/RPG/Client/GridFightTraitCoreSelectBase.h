#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"

namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCORESELECTBASE_GETCOREROLEUIDS_OFFSET UNITYSDK_OFFSET(0x98CF7A0)
#define RPG_CLIENT_GRIDFIGHTTRAITCORESELECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x98CF280)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitCoreSelectBase_TypeDefinitionIndex = 53081;

	class GridFightTraitCoreSelectBase : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Void _ctor(::System::UInt32 id, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCORESELECTBASE__CTOR_OFFSET))(this, id, trait);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCoreRoleUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCORESELECTBASE_GETCOREROLEUIDS_OFFSET))(this);
		}
	};
}
