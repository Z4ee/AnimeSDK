#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECOREROLEACTIVATESTATEPARSER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBC2F3E0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECOREROLEACTIVATESTATEPARSER_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xBC2F3F0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECOREROLEACTIVATESTATEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0xBC2EF60)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECOREROLEACTIVATESTATEPARSER__GETISACTIVE_OFFSET UNITYSDK_OFFSET(0xBC2EFA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineCoreRoleActivateStateParser_TypeDefinitionIndex = 61217;

	class GridFightTraitRemarkLineCoreRoleActivateStateParser : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* _Trait; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _IDs; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECOREROLEACTIVATESTATEPARSER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean _GetIsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECOREROLEACTIVATESTATEPARSER__GETISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECOREROLEACTIVATESTATEPARSER_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECOREROLEACTIVATESTATEPARSER_GET_ISSHOW_OFFSET))(this);
		}
	};
}
