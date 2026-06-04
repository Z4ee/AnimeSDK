#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
class Class_1_6BD41257D23618B4_1;
class Class_1_F1E9B9712CF54AB3_Class_1_E8282DEBA07C090F;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_F1E9B9712CF54AB3_METHOD_1_5BA46E6F50E27624_OFFSET UNITYSDK_OFFSET(0xCED98E0)
#define CLASS_1_F1E9B9712CF54AB3_METHOD_1_6A23A4142CF7DAE1_OFFSET UNITYSDK_OFFSET(0xCED9660)
#define CLASS_1_F1E9B9712CF54AB3_METHOD_1_7F6E6FB511D9D7F7_OFFSET UNITYSDK_OFFSET(0xCEDA010)
#define CLASS_1_F1E9B9712CF54AB3_METHOD_1_8426575CBC596E17_OFFSET UNITYSDK_OFFSET(0xCED9820)
#define CLASS_1_F1E9B9712CF54AB3_METHOD_1_889EB58632C9F1E8_OFFSET UNITYSDK_OFFSET(0xCED9D30)
#define CLASS_1_F1E9B9712CF54AB3_METHOD_1_B01AA385432F9E85_OFFSET UNITYSDK_OFFSET(0xCED9880)
#define CLASS_1_F1E9B9712CF54AB3_METHOD_1_CD83D3683BE00464_OFFSET UNITYSDK_OFFSET(0xCED9E70)
#define CLASS_1_F1E9B9712CF54AB3__CTOR_OFFSET UNITYSDK_OFFSET(0xCEDA0A0)

inline static constexpr unsigned int Class_1_F1E9B9712CF54AB3_TypeDefinitionIndex = 59071;

class Class_1_F1E9B9712CF54AB3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChallengeGroupType, ::Class_1_F1E9B9712CF54AB3_Class_1_E8282DEBA07C090F*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B9712CF54AB3__CTOR_OFFSET))(this);
	}

	::Class_1_F1E9B9712CF54AB3_Class_1_E8282DEBA07C090F* Method_1_6A23A4142CF7DAE1(::RPG::GameCore::ChallengeGroupType a1)
	{
		return ((::Class_1_F1E9B9712CF54AB3_Class_1_E8282DEBA07C090F*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B9712CF54AB3_METHOD_1_6A23A4142CF7DAE1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_8426575CBC596E17(::RPG::GameCore::ChallengeGroupType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B9712CF54AB3_METHOD_1_8426575CBC596E17_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B01AA385432F9E85(::RPG::GameCore::ChallengeGroupType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B9712CF54AB3_METHOD_1_B01AA385432F9E85_OFFSET))(this, a1);
	}

	::System::Void Method_1_5BA46E6F50E27624(::System::Collections::Generic::IEnumerable_1<::Class_1_6BD41257D23618B4_1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_6BD41257D23618B4_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B9712CF54AB3_METHOD_1_5BA46E6F50E27624_OFFSET))(this, a1);
	}

	::System::Void Method_1_889EB58632C9F1E8(::RPG::Client::ChallengeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B9712CF54AB3_METHOD_1_889EB58632C9F1E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD83D3683BE00464(::Class_1_06E38C65842C3B24* a1, ::RPG::Client::ChallengeGroupData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_06E38C65842C3B24*, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B9712CF54AB3_METHOD_1_CD83D3683BE00464_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7F6E6FB511D9D7F7(::RPG::GameCore::ChallengeGroupType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B9712CF54AB3_METHOD_1_7F6E6FB511D9D7F7_OFFSET))(this, a1);
	}
};
