#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
class Class_1_21C7581DFE99F091_13;
class Class_1_605FE741A9014FB7_Class_1_E8282DEBA07C090F;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_605FE741A9014FB7_METHOD_1_4328608F1D0ED752_OFFSET UNITYSDK_OFFSET(0x16AAA310)
#define CLASS_1_605FE741A9014FB7_METHOD_1_55A6A86AE51588F8_OFFSET UNITYSDK_OFFSET(0x16AAA180)
#define CLASS_1_605FE741A9014FB7_METHOD_1_6A23A4142CF7DAE1_OFFSET UNITYSDK_OFFSET(0x16AA9920)
#define CLASS_1_605FE741A9014FB7_METHOD_1_7F6E6FB511D9D7F7_OFFSET UNITYSDK_OFFSET(0x16AAA530)
#define CLASS_1_605FE741A9014FB7_METHOD_1_8426575CBC596E17_OFFSET UNITYSDK_OFFSET(0x16AA9AE0)
#define CLASS_1_605FE741A9014FB7_METHOD_1_94A63DE6FEC6CBC9_OFFSET UNITYSDK_OFFSET(0x16AA9BA0)
#define CLASS_1_605FE741A9014FB7_METHOD_1_B01AA385432F9E85_OFFSET UNITYSDK_OFFSET(0x16AA9B40)
#define CLASS_1_605FE741A9014FB7__CTOR_OFFSET UNITYSDK_OFFSET(0x16AAA5C0)

inline static constexpr unsigned int Class_1_605FE741A9014FB7_TypeDefinitionIndex = 60342;

class Class_1_605FE741A9014FB7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChallengeGroupType, ::Class_1_605FE741A9014FB7_Class_1_E8282DEBA07C090F*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_605FE741A9014FB7__CTOR_OFFSET))(this);
	}

	::Class_1_605FE741A9014FB7_Class_1_E8282DEBA07C090F* Method_1_6A23A4142CF7DAE1(::RPG::GameCore::ChallengeGroupType a1)
	{
		return ((::Class_1_605FE741A9014FB7_Class_1_E8282DEBA07C090F*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + CLASS_1_605FE741A9014FB7_METHOD_1_6A23A4142CF7DAE1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_8426575CBC596E17(::RPG::GameCore::ChallengeGroupType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + CLASS_1_605FE741A9014FB7_METHOD_1_8426575CBC596E17_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B01AA385432F9E85(::RPG::GameCore::ChallengeGroupType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + CLASS_1_605FE741A9014FB7_METHOD_1_B01AA385432F9E85_OFFSET))(this, a1);
	}

	::System::Void Method_1_94A63DE6FEC6CBC9(::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_13*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_13*>*))((::PBYTE)hIl2Cpp + CLASS_1_605FE741A9014FB7_METHOD_1_94A63DE6FEC6CBC9_OFFSET))(this, a1);
	}

	::System::Void Method_1_55A6A86AE51588F8(::RPG::Client::ChallengeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + CLASS_1_605FE741A9014FB7_METHOD_1_55A6A86AE51588F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_4328608F1D0ED752(::Class_1_06E38C65842C3B24* a1, ::RPG::Client::ChallengeGroupData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_06E38C65842C3B24*, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + CLASS_1_605FE741A9014FB7_METHOD_1_4328608F1D0ED752_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7F6E6FB511D9D7F7(::RPG::GameCore::ChallengeGroupType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + CLASS_1_605FE741A9014FB7_METHOD_1_7F6E6FB511D9D7F7_OFFSET))(this, a1);
	}
};
