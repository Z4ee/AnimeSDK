#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DDD9E1356EA4ABC3_METHOD_1_0A3300F662332600_OFFSET UNITYSDK_OFFSET(0x17AE44C0)
#define CLASS_1_DDD9E1356EA4ABC3_METHOD_1_12E285D34561EB62_OFFSET UNITYSDK_OFFSET(0x17AE43F0)
#define CLASS_1_DDD9E1356EA4ABC3__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE4AE0)

inline static constexpr unsigned int Class_1_DDD9E1356EA4ABC3_TypeDefinitionIndex = 77059;

class Class_1_DDD9E1356EA4ABC3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDD9E1356EA4ABC3__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_12E285D34561EB62(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DDD9E1356EA4ABC3_METHOD_1_12E285D34561EB62_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* Method_1_0A3300F662332600(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::ChimeraDuelTeamSelectorType a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelTeamSelectorType))((::PBYTE)hIl2Cpp + CLASS_1_DDD9E1356EA4ABC3_METHOD_1_0A3300F662332600_OFFSET))(this, a1, a2);
	}
};
