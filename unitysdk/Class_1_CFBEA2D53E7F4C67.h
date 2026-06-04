#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CFBEA2D53E7F4C67_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA41FB80)
#define CLASS_1_CFBEA2D53E7F4C67__CTOR_OFFSET UNITYSDK_OFFSET(0xA41FB70)

inline static constexpr unsigned int Class_1_CFBEA2D53E7F4C67_TypeDefinitionIndex = 57923;

class Class_1_CFBEA2D53E7F4C67 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18
	::RPG::Client::SwordTrainingPerformanceType Field_1_2; // 0x20

	::System::Void _ctor(::RPG::Client::SwordTrainingPerformanceType a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CFBEA2D53E7F4C67__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFBEA2D53E7F4C67_DISPOSE_OFFSET))(this);
	}
};
