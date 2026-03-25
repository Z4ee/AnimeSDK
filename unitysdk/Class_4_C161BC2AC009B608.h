#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0693CD0AFBBF2A3B.h"

class Class_2_49CAB3DE74280C58;
class Class_2_DCFF4DF692D90D03;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_4_C161BC2AC009B608_METHOD_4_259F537D2FEF1912_OFFSET UNITYSDK_OFFSET(0x10B9E370)
#define CLASS_4_C161BC2AC009B608_METHOD_4_4C27EF85256A8DCC_OFFSET UNITYSDK_OFFSET(0x10B9E7D0)
#define CLASS_4_C161BC2AC009B608_METHOD_4_BA72140EE922A8FE_OFFSET UNITYSDK_OFFSET(0x10B9E7E0)
#define CLASS_4_C161BC2AC009B608_METHOD_4_C4E6DEC94273F7E9_OFFSET UNITYSDK_OFFSET(0x10B9E6F0)
#define CLASS_4_C161BC2AC009B608__CTOR_OFFSET UNITYSDK_OFFSET(0x10B9E2F0)
#define CLASS_4_C161BC2AC009B608__SELECTENTITYIDS_B__4_2_OFFSET UNITYSDK_OFFSET(0x10B9E770)

inline static constexpr unsigned int Class_4_C161BC2AC009B608_TypeDefinitionIndex = 63185;

class Class_4_C161BC2AC009B608 : public ::Class_3_0693CD0AFBBF2A3B
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* Field_4_1; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* Field_4_0; // 0x38
	::System::Collections::Generic::Queue_1<::Class_2_DCFF4DF692D90D03*>* Field_4_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C161BC2AC009B608__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_259F537D2FEF1912(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_C161BC2AC009B608_METHOD_4_259F537D2FEF1912_OFFSET))(this, a1);
	}

	::Class_2_49CAB3DE74280C58* Method_4_C4E6DEC94273F7E9()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C161BC2AC009B608_METHOD_4_C4E6DEC94273F7E9_OFFSET))(this);
	}

	::System::Boolean _SelectEntityIDs_b__4_2(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* cache)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_4_C161BC2AC009B608__SELECTENTITYIDS_B__4_2_OFFSET))(this, cache);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_4C27EF85256A8DCC(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* P0)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_C161BC2AC009B608_METHOD_4_4C27EF85256A8DCC_OFFSET))(this, P0);
	}

	::Class_2_49CAB3DE74280C58* Method_4_BA72140EE922A8FE()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C161BC2AC009B608_METHOD_4_BA72140EE922A8FE_OFFSET))(this);
	}
};
