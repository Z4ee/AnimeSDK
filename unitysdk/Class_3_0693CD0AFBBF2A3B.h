#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_89234CBEACD0293F.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_0693CD0AFBBF2A3B_METHOD_3_3B75D544C040CF25_OFFSET UNITYSDK_OFFSET(0x932E280)
#define CLASS_3_0693CD0AFBBF2A3B_METHOD_3_64F101015400B7A0_OFFSET UNITYSDK_OFFSET(0x932E210)
#define CLASS_3_0693CD0AFBBF2A3B_METHOD_3_E7E4CC761F9B3489_OFFSET UNITYSDK_OFFSET(0x932E190)
#define CLASS_3_0693CD0AFBBF2A3B__CTOR_OFFSET UNITYSDK_OFFSET(0x932E110)

inline static constexpr unsigned int Class_3_0693CD0AFBBF2A3B_TypeDefinitionIndex = 71211;

class Class_3_0693CD0AFBBF2A3B : public ::Class_2_89234CBEACD0293F
{
public:
	::Class_1_C4FD36003027AC99* Field_3_0; // 0x28

	::System::Void _ctor(::Class_1_C4FD36003027AC99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_3_0693CD0AFBBF2A3B__CTOR_OFFSET))(this, a1);
	}

	::Class_2_49CAB3DE74280C58* Method_3_E7E4CC761F9B3489()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0693CD0AFBBF2A3B_METHOD_3_E7E4CC761F9B3489_OFFSET))(this);
	}

	::RPG::GameCore::ChimeraDuelTeamType Method_3_64F101015400B7A0()
	{
		return ((::RPG::GameCore::ChimeraDuelTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0693CD0AFBBF2A3B_METHOD_3_64F101015400B7A0_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_3_3B75D544C040CF25(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_3_0693CD0AFBBF2A3B_METHOD_3_3B75D544C040CF25_OFFSET))(this, a1);
	}
};
