#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define CLASS_1_3E359368FE6FB852_METHOD_1_9F2E6C28EBE466FC_OFFSET UNITYSDK_OFFSET(0x15737540)
#define CLASS_1_3E359368FE6FB852_METHOD_1_A98E115203527638_OFFSET UNITYSDK_OFFSET(0x15736900)
#define CLASS_1_3E359368FE6FB852_METHOD_1_D6FCEF563263539D_OFFSET UNITYSDK_OFFSET(0x15736450)
#define CLASS_1_3E359368FE6FB852__CTOR_OFFSET UNITYSDK_OFFSET(0x15736440)

inline static constexpr unsigned int Class_1_3E359368FE6FB852_TypeDefinitionIndex = 66157;

class Class_1_3E359368FE6FB852 : public ::System::Object
{
public:
	::RPG::Client::MissionChronicleBasePathData* DDPCPAHNLCL; // 0x10

	::System::Void _ctor(::RPG::Client::MissionChronicleBasePathData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + CLASS_1_3E359368FE6FB852__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D6FCEF563263539D(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3E359368FE6FB852_METHOD_1_D6FCEF563263539D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A98E115203527638(::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + CLASS_1_3E359368FE6FB852_METHOD_1_A98E115203527638_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_9F2E6C28EBE466FC(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E359368FE6FB852_METHOD_1_9F2E6C28EBE466FC_OFFSET))(a1);
	}
};
