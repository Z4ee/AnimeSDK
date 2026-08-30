#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_0C16D5ADCDB42EF4_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x152D6760)
#define CLASS_1_0C16D5ADCDB42EF4_METHOD_1_E3B02BE32AB5173E_OFFSET UNITYSDK_OFFSET(0x152D67A0)
#define CLASS_1_0C16D5ADCDB42EF4__CTOR_OFFSET UNITYSDK_OFFSET(0x152D6870)

inline static constexpr unsigned int Class_1_0C16D5ADCDB42EF4_TypeDefinitionIndex = 77043;

class Class_1_0C16D5ADCDB42EF4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C16D5ADCDB42EF4__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C16D5ADCDB42EF4_METHOD_1_128774387667156B_OFFSET))();
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_E3B02BE32AB5173E(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0C16D5ADCDB42EF4_METHOD_1_E3B02BE32AB5173E_OFFSET))(this, a1, a2);
	}
};
