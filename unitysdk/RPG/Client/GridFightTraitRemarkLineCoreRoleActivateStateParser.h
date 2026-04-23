#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECOREROLEACTIVATESTATEPARSER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA5BD250)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECOREROLEACTIVATESTATEPARSER_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xA5BD260)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECOREROLEACTIVATESTATEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5BCE00)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECOREROLEACTIVATESTATEPARSER__GETISACTIVE_OFFSET UNITYSDK_OFFSET(0xA5BCE40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineCoreRoleActivateStateParser_TypeDefinitionIndex = 60282;

	class GridFightTraitRemarkLineCoreRoleActivateStateParser : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _IDs; // 0x10
		::RPG::Client::GridFightTrait* _Trait; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::UInt32>* IDs, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECOREROLEACTIVATESTATEPARSER__CTOR_OFFSET))(this, IDs, trait);
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
