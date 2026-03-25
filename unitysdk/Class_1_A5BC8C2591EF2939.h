#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define CLASS_1_A5BC8C2591EF2939_METHOD_1_1C2B1546CF18AF4D_OFFSET UNITYSDK_OFFSET(0x109EA060)
#define CLASS_1_A5BC8C2591EF2939_METHOD_1_D1BD24C9D64EB7E3_OFFSET UNITYSDK_OFFSET(0x109E9F50)
#define CLASS_1_A5BC8C2591EF2939__CTOR_OFFSET UNITYSDK_OFFSET(0x109E9F40)

inline static constexpr unsigned int Class_1_A5BC8C2591EF2939_TypeDefinitionIndex = 53733;

class Class_1_A5BC8C2591EF2939 : public ::System::Object
{
public:
	::RPG::Client::MissionChronicleBasePathData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::MissionChronicleBasePathData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + CLASS_1_A5BC8C2591EF2939__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D1BD24C9D64EB7E3(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A5BC8C2591EF2939_METHOD_1_D1BD24C9D64EB7E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1C2B1546CF18AF4D(::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + CLASS_1_A5BC8C2591EF2939_METHOD_1_1C2B1546CF18AF4D_OFFSET))(this, a1);
	}
};
