#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitRemarkLineTraitStateParserBase.h"

namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITLARGEEQUALSTATEPARSER_CHECKLAYERCONDITION_OFFSET UNITYSDK_OFFSET(0x98D66F0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITLARGEEQUALSTATEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x98D62F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineTraitLargeEqualStateParser_TypeDefinitionIndex = 53173;

	class GridFightTraitRemarkLineTraitLargeEqualStateParser : public ::RPG::Client::GridFightTraitRemarkLineTraitStateParserBase
	{
	public:
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* layers, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITLARGEEQUALSTATEPARSER__CTOR_OFFSET))(this, layers, trait);
		}

		::System::Boolean CheckLayerCondition(::System::UInt32 traitLayer, ::System::UInt32 targetLayer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITLARGEEQUALSTATEPARSER_CHECKLAYERCONDITION_OFFSET))(this, traitLayer, targetLayer);
		}
	};
}
