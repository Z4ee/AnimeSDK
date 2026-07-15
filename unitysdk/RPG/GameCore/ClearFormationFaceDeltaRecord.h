#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARFORMATIONFACEDELTARECORD_METHOD_3_1196FF6763756FDB_OFFSET UNITYSDK_OFFSET(0x1C2540F0)
#define RPG_GAMECORE_CLEARFORMATIONFACEDELTARECORD_METHOD_3_E873E901D158D932_OFFSET UNITYSDK_OFFSET(0x1C254190)
#define RPG_GAMECORE_CLEARFORMATIONFACEDELTARECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C254150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearFormationFaceDeltaRecord_TypeDefinitionIndex = 21639;

	class ClearFormationFaceDeltaRecord : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PerformerType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARFORMATIONFACEDELTARECORD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1196FF6763756FDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearFormationFaceDeltaRecord*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearFormationFaceDeltaRecord*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARFORMATIONFACEDELTARECORD_METHOD_3_1196FF6763756FDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E873E901D158D932(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearFormationFaceDeltaRecord* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearFormationFaceDeltaRecord*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARFORMATIONFACEDELTARECORD_METHOD_3_E873E901D158D932_OFFSET))(a1, a2);
		}
	};
}
