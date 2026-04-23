#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_1_F964FCD89F35B351;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0E2141ECA8AAD7D3_METHOD_1_12E285D34561EB62_OFFSET UNITYSDK_OFFSET(0x127E6D70)
#define CLASS_1_0E2141ECA8AAD7D3_METHOD_1_4269046E2904AB0B_OFFSET UNITYSDK_OFFSET(0x127E6E40)
#define CLASS_1_0E2141ECA8AAD7D3_METHOD_1_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x127E6D10)
#define CLASS_1_0E2141ECA8AAD7D3__CTOR_OFFSET UNITYSDK_OFFSET(0x127E7290)

inline static constexpr unsigned int Class_1_0E2141ECA8AAD7D3_TypeDefinitionIndex = 71127;

class Class_1_0E2141ECA8AAD7D3 : public ::System::Object
{
public:
	::Class_1_F964FCD89F35B351* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3_METHOD_1_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_12E285D34561EB62(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3_METHOD_1_12E285D34561EB62_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* Method_1_4269046E2904AB0B(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::ChimeraDuelTeamSelectorType a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelTeamSelectorType))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3_METHOD_1_4269046E2904AB0B_OFFSET))(this, a1, a2);
	}
};
