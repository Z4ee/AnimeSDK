#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitRemarkLineTraitStateParserBase.h"

namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITLARGEEQUALSTATEPARSER_CHECKLAYERCONDITION_OFFSET UNITYSDK_OFFSET(0xBC31AA0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITLARGEEQUALSTATEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0xBC316C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineTraitLargeEqualStateParser_TypeDefinitionIndex = 61231;

	class GridFightTraitRemarkLineTraitLargeEqualStateParser : public ::RPG::Client::GridFightTraitRemarkLineTraitStateParserBase
	{
	public:
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITLARGEEQUALSTATEPARSER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckLayerCondition(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITLARGEEQUALSTATEPARSER_CHECKLAYERCONDITION_OFFSET))(this, a1, a2);
		}
	};
}
