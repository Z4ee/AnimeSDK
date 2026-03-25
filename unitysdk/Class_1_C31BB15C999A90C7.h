#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace RPG::GameCore { class MissionCondition; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_C31BB15C999A90C7_METHOD_1_057FA0CDA833F1E7_OFFSET UNITYSDK_OFFSET(0x8CD2590)
#define CLASS_1_C31BB15C999A90C7_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x8CD2710)
#define CLASS_1_C31BB15C999A90C7_METHOD_1_60764731E43C7CBB_OFFSET UNITYSDK_OFFSET(0x8CD1FA0)
#define CLASS_1_C31BB15C999A90C7_METHOD_1_9F2E6C28EBE466FC_OFFSET UNITYSDK_OFFSET(0x8CD3230)
#define CLASS_1_C31BB15C999A90C7_METHOD_1_DD108D89A8D6BFB9_OFFSET UNITYSDK_OFFSET(0x8CD2780)
#define CLASS_1_C31BB15C999A90C7_METHOD_1_F97D854D36281104_OFFSET UNITYSDK_OFFSET(0x8CD1D10)
#define CLASS_1_C31BB15C999A90C7_METHOD_1_FBCBA237F3D8F6A2_OFFSET UNITYSDK_OFFSET(0x8CD2E50)
#define CLASS_1_C31BB15C999A90C7__CTOR_OFFSET UNITYSDK_OFFSET(0x8CD1D00)

inline static constexpr unsigned int Class_1_C31BB15C999A90C7_TypeDefinitionIndex = 53734;

class Class_1_C31BB15C999A90C7 : public ::System::Object
{
public:
	::RPG::Client::MissionChronicleBasePathData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::MissionChronicleBasePathData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F97D854D36281104(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7_METHOD_1_F97D854D36281104_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_057FA0CDA833F1E7(::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7_METHOD_1_057FA0CDA833F1E7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	static ::System::Void Method_1_60764731E43C7CBB(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7_METHOD_1_60764731E43C7CBB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DD108D89A8D6BFB9(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>* a1, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>*, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7_METHOD_1_DD108D89A8D6BFB9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FBCBA237F3D8F6A2(::System::UInt32 a1, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7_METHOD_1_FBCBA237F3D8F6A2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9F2E6C28EBE466FC(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C31BB15C999A90C7_METHOD_1_9F2E6C28EBE466FC_OFFSET))(a1);
	}
};
