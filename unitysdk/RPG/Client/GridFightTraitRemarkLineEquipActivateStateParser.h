#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA5BE050)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xA5BE060)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5BDC40)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER__GETISACTIVE_OFFSET UNITYSDK_OFFSET(0xA5BDC90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineEquipActivateStateParser_TypeDefinitionIndex = 60284;

	class GridFightTraitRemarkLineEquipActivateStateParser : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _equipIDs; // 0x10
		::RPG::Client::GridFightTrait* _Trait; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::UInt32>* equipIDs, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER__CTOR_OFFSET))(this, equipIDs, trait);
		}

		::System::Boolean _GetIsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER__GETISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER_GET_ISSHOW_OFFSET))(this);
		}
	};
}
