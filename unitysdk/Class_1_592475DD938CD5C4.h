#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define CLASS_1_592475DD938CD5C4_METHOD_1_028EDFE913575C94_OFFSET UNITYSDK_OFFSET(0x138FCC60)
#define CLASS_1_592475DD938CD5C4_METHOD_1_285D98BE29EEEE98_OFFSET UNITYSDK_OFFSET(0x138FCF60)
#define CLASS_1_592475DD938CD5C4_METHOD_1_2C14C45522A03B0D_OFFSET UNITYSDK_OFFSET(0x138FD7B0)
#define CLASS_1_592475DD938CD5C4__CTOR_OFFSET UNITYSDK_OFFSET(0x138FCC50)

inline static constexpr unsigned int Class_1_592475DD938CD5C4_TypeDefinitionIndex = 61810;

class Class_1_592475DD938CD5C4 : public ::System::Object
{
public:
	::RPG::Client::MissionChronicleBasePathData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::MissionChronicleBasePathData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + CLASS_1_592475DD938CD5C4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_028EDFE913575C94(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_592475DD938CD5C4_METHOD_1_028EDFE913575C94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_285D98BE29EEEE98(::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + CLASS_1_592475DD938CD5C4_METHOD_1_285D98BE29EEEE98_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_2C14C45522A03B0D(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_592475DD938CD5C4_METHOD_1_2C14C45522A03B0D_OFFSET))(a1);
	}
};
