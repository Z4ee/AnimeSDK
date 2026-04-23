#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_04D989D0F2C438C4___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF2CC1A0)
#define CLASS_1_04D989D0F2C438C4___C__DISPLAYCLASS57_0__ISTASKRESCOMPLETED_B__0_OFFSET UNITYSDK_OFFSET(0xF2CC460)
#define CLASS_1_04D989D0F2C438C4___C__DISPLAYCLASS57_0__ISTASKRESCOMPLETED_B__1_OFFSET UNITYSDK_OFFSET(0xF2CC480)

inline static constexpr unsigned int Class_1_04D989D0F2C438C4___c__DisplayClass57_0_TypeDefinitionIndex = 55008;

class Class_1_04D989D0F2C438C4___c__DisplayClass57_0 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* taskIds; // 0x10
	::System::Predicate_1<::System::UInt32>* __9__1; // 0x18
	::System::Predicate_1<::System::UInt32>* __9__0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsTaskResCompleted_b__0(::System::UInt32 e)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4___C__DISPLAYCLASS57_0__ISTASKRESCOMPLETED_B__0_OFFSET))(this, e);
	}

	::System::Boolean _IsTaskResCompleted_b__1(::System::UInt32 e)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4___C__DISPLAYCLASS57_0__ISTASKRESCOMPLETED_B__1_OFFSET))(this, e);
	}
};
