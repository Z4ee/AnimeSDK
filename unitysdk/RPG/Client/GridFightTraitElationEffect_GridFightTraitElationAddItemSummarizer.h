#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_8844A4E6AE686D5C_6;
class Class_1_D17272E82AE804C2_457;
namespace RPG::Client { class GridFightTraitElationEffect; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1A609EF0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x1A60A1E0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER_UPDATEORB_OFFSET UNITYSDK_OFFSET(0x1A60A050)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A609C20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitElationEffect_GridFightTraitElationAddItemSummarizer_TypeDefinitionIndex = 62459;

	class GridFightTraitElationEffect_GridFightTraitElationAddItemSummarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::RPG::Client::GridFightTraitElationEffect* _TraitEffect; // 0x10

		::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateOrb(::Class_1_D17272E82AE804C2_457* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_457*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER_UPDATEORB_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::Class_1_8844A4E6AE686D5C_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER_UPDATEADDITEM_OFFSET))(this, a1);
		}
	};
}
