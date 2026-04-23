#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/StoryLightCharacterGroup.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B0269E82570986BC_METHOD_1_076FB2D495859930_OFFSET UNITYSDK_OFFSET(0x969BC90)
#define CLASS_1_B0269E82570986BC_METHOD_1_38D3664786168628_OFFSET UNITYSDK_OFFSET(0x969C620)
#define CLASS_1_B0269E82570986BC_METHOD_1_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x969C430)
#define CLASS_1_B0269E82570986BC__CTOR_OFFSET UNITYSDK_OFFSET(0x969BBE0)

inline static constexpr unsigned int Class_1_B0269E82570986BC_TypeDefinitionIndex = 55982;

class Class_1_B0269E82570986BC : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x10
	::RPG::Client::PerformanceManager* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + CLASS_1_B0269E82570986BC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_076FB2D495859930(::System::Boolean a1, ::System::Collections::Generic::List_1<::RPGTools::Timeline::StoryLightCharacterGroup>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::RPGTools::Timeline::StoryLightCharacterGroup>*))((::PBYTE)hIl2Cpp + CLASS_1_B0269E82570986BC_METHOD_1_076FB2D495859930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0269E82570986BC_METHOD_1_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_38D3664786168628(::RPGTools::Timeline::StoryLightCharacterGroup a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPGTools::Timeline::StoryLightCharacterGroup))((::PBYTE)hIl2Cpp + CLASS_1_B0269E82570986BC_METHOD_1_38D3664786168628_OFFSET))(this, a1);
	}
};
