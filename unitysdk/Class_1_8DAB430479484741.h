#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define CLASS_1_8DAB430479484741_METHOD_1_623BFB70F2262F9C_OFFSET UNITYSDK_OFFSET(0x17602A30)
#define CLASS_1_8DAB430479484741_METHOD_1_D3246319EBFD849A_OFFSET UNITYSDK_OFFSET(0x17602860)
#define CLASS_1_8DAB430479484741__CTOR_OFFSET UNITYSDK_OFFSET(0x17602850)

inline static constexpr unsigned int Class_1_8DAB430479484741_TypeDefinitionIndex = 63173;

class Class_1_8DAB430479484741 : public ::System::Object
{
public:
	::RPG::Client::MissionChronicleBasePathData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::MissionChronicleBasePathData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + CLASS_1_8DAB430479484741__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3246319EBFD849A(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_8DAB430479484741_METHOD_1_D3246319EBFD849A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_623BFB70F2262F9C(::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8DAB430479484741_METHOD_1_623BFB70F2262F9C_OFFSET))(this, a1);
	}
};
