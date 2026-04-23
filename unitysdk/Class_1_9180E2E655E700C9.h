#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateAffixInsertMonsterPhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_36E3880E987172D7_1;
class Class_1_45BB92167AED63A0_6;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9180E2E655E700C9_METHOD_1_3DB54BF3B1645FAD_OFFSET UNITYSDK_OFFSET(0x95300F0)
#define CLASS_1_9180E2E655E700C9_METHOD_1_984F7A742D677316_OFFSET UNITYSDK_OFFSET(0x952FB40)
#define CLASS_1_9180E2E655E700C9__CTOR_OFFSET UNITYSDK_OFFSET(0x9530060)

inline static constexpr unsigned int Class_1_9180E2E655E700C9_TypeDefinitionIndex = 51686;

class Class_1_9180E2E655E700C9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateAffixInsertMonsterPhaseType, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9180E2E655E700C9__CTOR_OFFSET))(this);
	}

	static ::Class_1_9180E2E655E700C9* Method_1_984F7A742D677316(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_6*>* a1)
	{
		return ((::Class_1_9180E2E655E700C9*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_6*>*))((::PBYTE)hIl2Cpp + CLASS_1_9180E2E655E700C9_METHOD_1_984F7A742D677316_OFFSET))(a1);
	}

	::System::Void Method_1_3DB54BF3B1645FAD(::Class_1_36E3880E987172D7_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36E3880E987172D7_1*))((::PBYTE)hIl2Cpp + CLASS_1_9180E2E655E700C9_METHOD_1_3DB54BF3B1645FAD_OFFSET))(this, a1);
	}
};
