#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define CLASS_1_A9820D525D2F5C88_METHOD_1_2C14C45522A03B0D_OFFSET UNITYSDK_OFFSET(0x8B54BB0)
#define CLASS_1_A9820D525D2F5C88_METHOD_1_3FD9541036ADDB2D_OFFSET UNITYSDK_OFFSET(0x8B54360)
#define CLASS_1_A9820D525D2F5C88_METHOD_1_6E94184DAAE27104_OFFSET UNITYSDK_OFFSET(0x8B54060)
#define CLASS_1_A9820D525D2F5C88__CTOR_OFFSET UNITYSDK_OFFSET(0x8B54050)

inline static constexpr unsigned int Class_1_A9820D525D2F5C88_TypeDefinitionIndex = 53732;

class Class_1_A9820D525D2F5C88 : public ::System::Object
{
public:
	::RPG::Client::MissionChronicleBasePathData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::MissionChronicleBasePathData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + CLASS_1_A9820D525D2F5C88__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E94184DAAE27104(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A9820D525D2F5C88_METHOD_1_6E94184DAAE27104_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3FD9541036ADDB2D(::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + CLASS_1_A9820D525D2F5C88_METHOD_1_3FD9541036ADDB2D_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_2C14C45522A03B0D(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A9820D525D2F5C88_METHOD_1_2C14C45522A03B0D_OFFSET))(a1);
	}
};
