#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFEQUIPRECOMMEND_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1ABF5610)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEQUIPRECOMMEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABF2BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefEquipRecommend_TypeDefinitionIndex = 61819;

	class GridFightGameRefEquipRecommend : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* Role; // 0x10
		::Il2CppArray<::RPG::Client::GridFightEquipItemData*>* SecondaryEquips; // 0x18
		::Il2CppArray<::RPG::Client::GridFightEquipItemData*>* PrimaryEquips; // 0x20
		::System::Int32 Index; // 0x28
		::System::Boolean IsMain; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEQUIPRECOMMEND__CTOR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightGameRefEquipRecommend* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefEquipRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEQUIPRECOMMEND_COMPARETO_OFFSET))(this, a1);
		}
	};
}
