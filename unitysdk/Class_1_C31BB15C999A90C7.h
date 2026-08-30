#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace RPG::GameCore { class MissionCondition; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_C31BB15C999A90C7_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x17F3F9C0)
#define CLASS_1_C31BB15C999A90C7_METHOD_1_60764731E43C7CBB_OFFSET UNITYSDK_OFFSET(0x17F3EFD0)
#define CLASS_1_C31BB15C999A90C7_METHOD_1_64D981E61BDCF89E_OFFSET UNITYSDK_OFFSET(0x17F407E0)
#define CLASS_1_C31BB15C999A90C7_METHOD_1_752D9A83BCC3ED59_OFFSET UNITYSDK_OFFSET(0x17F40390)
#define CLASS_1_C31BB15C999A90C7_METHOD_1_BFA117E42B0E9BBB_OFFSET UNITYSDK_OFFSET(0x17F3FA30)
#define CLASS_1_C31BB15C999A90C7_METHOD_1_D48C6D617A7DC943_OFFSET UNITYSDK_OFFSET(0x17F3EC60)
#define CLASS_1_C31BB15C999A90C7_METHOD_1_EC2BDA3674D1519C_OFFSET UNITYSDK_OFFSET(0x17F3F7C0)
#define CLASS_1_C31BB15C999A90C7__CTOR_OFFSET UNITYSDK_OFFSET(0x17F3EC50)

inline static constexpr unsigned int Class_1_C31BB15C999A90C7_TypeDefinitionIndex = 66159;

class Class_1_C31BB15C999A90C7 : public ::System::Object
{
public:
	::RPG::Client::MissionChronicleBasePathData* DDPCPAHNLCL; // 0x10

	::System::Void _ctor(::RPG::Client::MissionChronicleBasePathData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D48C6D617A7DC943(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7_METHOD_1_D48C6D617A7DC943_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EC2BDA3674D1519C(::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7_METHOD_1_EC2BDA3674D1519C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	static ::System::Void Method_1_60764731E43C7CBB(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7_METHOD_1_60764731E43C7CBB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BFA117E42B0E9BBB(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>* a1, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>*, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7_METHOD_1_BFA117E42B0E9BBB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_752D9A83BCC3ED59(::System::UInt32 a1, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7_METHOD_1_752D9A83BCC3ED59_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_64D981E61BDCF89E(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7_METHOD_1_64D981E61BDCF89E_OFFSET))(a1);
	}
};
