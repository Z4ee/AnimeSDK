#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace RPG::GameCore { class MissionCondition; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_DDBD488BDA78D556_METHOD_1_057FA0CDA833F1E7_OFFSET UNITYSDK_OFFSET(0xAA56940)
#define CLASS_1_DDBD488BDA78D556_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xAA56AD0)
#define CLASS_1_DDBD488BDA78D556_METHOD_1_30BA9E3C1A3BA8F0_OFFSET UNITYSDK_OFFSET(0xAA56B40)
#define CLASS_1_DDBD488BDA78D556_METHOD_1_60764731E43C7CBB_OFFSET UNITYSDK_OFFSET(0xAA56380)
#define CLASS_1_DDBD488BDA78D556_METHOD_1_64D981E61BDCF89E_OFFSET UNITYSDK_OFFSET(0xAA575B0)
#define CLASS_1_DDBD488BDA78D556_METHOD_1_752D9A83BCC3ED59_OFFSET UNITYSDK_OFFSET(0xAA57220)
#define CLASS_1_DDBD488BDA78D556_METHOD_1_F97D854D36281104_OFFSET UNITYSDK_OFFSET(0xAA560E0)
#define CLASS_1_DDBD488BDA78D556__CTOR_OFFSET UNITYSDK_OFFSET(0xAA560D0)

inline static constexpr unsigned int Class_1_DDBD488BDA78D556_TypeDefinitionIndex = 61812;

class Class_1_DDBD488BDA78D556 : public ::System::Object
{
public:
	::RPG::Client::MissionChronicleBasePathData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::MissionChronicleBasePathData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + CLASS_1_DDBD488BDA78D556__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F97D854D36281104(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_DDBD488BDA78D556_METHOD_1_F97D854D36281104_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_057FA0CDA833F1E7(::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + CLASS_1_DDBD488BDA78D556_METHOD_1_057FA0CDA833F1E7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDBD488BDA78D556_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	static ::System::Void Method_1_60764731E43C7CBB(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_DDBD488BDA78D556_METHOD_1_60764731E43C7CBB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_30BA9E3C1A3BA8F0(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>* a1, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>*, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + CLASS_1_DDBD488BDA78D556_METHOD_1_30BA9E3C1A3BA8F0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_752D9A83BCC3ED59(::System::UInt32 a1, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + CLASS_1_DDBD488BDA78D556_METHOD_1_752D9A83BCC3ED59_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_64D981E61BDCF89E(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DDBD488BDA78D556_METHOD_1_64D981E61BDCF89E_OFFSET))(a1);
	}
};
