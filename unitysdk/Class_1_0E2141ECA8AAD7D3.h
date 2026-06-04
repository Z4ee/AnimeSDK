#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_1_CBEDA6B2CE02E7FF;
class Class_2_B66C1067C0468FBB;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0E2141ECA8AAD7D3_METHOD_1_12E285D34561EB62_OFFSET UNITYSDK_OFFSET(0x143EAF30)
#define CLASS_1_0E2141ECA8AAD7D3_METHOD_1_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x143EAED0)
#define CLASS_1_0E2141ECA8AAD7D3_METHOD_1_92D708A31940D500_OFFSET UNITYSDK_OFFSET(0x143EB000)
#define CLASS_1_0E2141ECA8AAD7D3__CTOR_OFFSET UNITYSDK_OFFSET(0x143EB4A0)

inline static constexpr unsigned int Class_1_0E2141ECA8AAD7D3_TypeDefinitionIndex = 72065;

class Class_1_0E2141ECA8AAD7D3 : public ::System::Object
{
public:
	::Class_1_CBEDA6B2CE02E7FF* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3_METHOD_1_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_12E285D34561EB62(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3_METHOD_1_12E285D34561EB62_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* Method_1_92D708A31940D500(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::ChimeraDuelTeamSelectorType a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelTeamSelectorType))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3_METHOD_1_92D708A31940D500_OFFSET))(this, a1, a2);
	}
};
