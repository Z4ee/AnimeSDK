#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateAffixInsertMonsterPhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_8;
class Class_1_4A2801D02B2BB246_3;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BAB7878C1DBCE4EF_METHOD_1_13723A944904BB41_OFFSET UNITYSDK_OFFSET(0x14E5A530)
#define CLASS_1_BAB7878C1DBCE4EF_METHOD_1_3DB54BF3B1645FAD_OFFSET UNITYSDK_OFFSET(0x14E5ABE0)
#define CLASS_1_BAB7878C1DBCE4EF__CTOR_OFFSET UNITYSDK_OFFSET(0x14E5AB50)

inline static constexpr unsigned int Class_1_BAB7878C1DBCE4EF_TypeDefinitionIndex = 53563;

class Class_1_BAB7878C1DBCE4EF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateAffixInsertMonsterPhaseType, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAB7878C1DBCE4EF__CTOR_OFFSET))(this);
	}

	static ::Class_1_BAB7878C1DBCE4EF* Method_1_13723A944904BB41(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_8*>* a1)
	{
		return ((::Class_1_BAB7878C1DBCE4EF*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_8*>*))((::PBYTE)hIl2Cpp + CLASS_1_BAB7878C1DBCE4EF_METHOD_1_13723A944904BB41_OFFSET))(a1);
	}

	::System::Void Method_1_3DB54BF3B1645FAD(::Class_1_4A2801D02B2BB246_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4A2801D02B2BB246_3*))((::PBYTE)hIl2Cpp + CLASS_1_BAB7878C1DBCE4EF_METHOD_1_3DB54BF3B1645FAD_OFFSET))(this, a1);
	}
};
