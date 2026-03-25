#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_707FD3D56A38EE9F_METHOD_1_12E285D34561EB62_OFFSET UNITYSDK_OFFSET(0x87AD080)
#define CLASS_1_707FD3D56A38EE9F_METHOD_1_4269046E2904AB0B_OFFSET UNITYSDK_OFFSET(0x87AD150)
#define CLASS_1_707FD3D56A38EE9F__CTOR_OFFSET UNITYSDK_OFFSET(0x87AD5A0)

inline static constexpr unsigned int Class_1_707FD3D56A38EE9F_TypeDefinitionIndex = 63072;

class Class_1_707FD3D56A38EE9F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_707FD3D56A38EE9F__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_12E285D34561EB62(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_707FD3D56A38EE9F_METHOD_1_12E285D34561EB62_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* Method_1_4269046E2904AB0B(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::ChimeraDuelTeamSelectorType a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelTeamSelectorType))((::PBYTE)hIl2Cpp + CLASS_1_707FD3D56A38EE9F_METHOD_1_4269046E2904AB0B_OFFSET))(this, a1, a2);
	}
};
