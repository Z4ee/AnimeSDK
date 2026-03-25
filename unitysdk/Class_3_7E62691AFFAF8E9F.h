#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_843468DEB2C89684.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_2_569DE47525C5FD32;
class Class_4_25476C0ECCF1BB17;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7E62691AFFAF8E9F_METHOD_3_76070F52A73738F6_OFFSET UNITYSDK_OFFSET(0x16633580)
#define CLASS_3_7E62691AFFAF8E9F__CTOR_OFFSET UNITYSDK_OFFSET(0x166334A0)

inline static constexpr unsigned int Class_3_7E62691AFFAF8E9F_TypeDefinitionIndex = 28504;

class Class_3_7E62691AFFAF8E9F : public ::Class_2_843468DEB2C89684
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x40
	::System::Single Field_3_1; // 0x48
	::System::Boolean Field_3_3; // 0x4C
	::System::Int32 Field_3_2; // 0x50

	::System::Void _ctor(::Class_4_25476C0ECCF1BB17* a1, ::Class_2_569DE47525C5FD32* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3, ::Il2CppArray<::RPG::GameCore::FixPoint>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_25476C0ECCF1BB17*, ::Class_2_569DE47525C5FD32*, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_3_7E62691AFFAF8E9F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_76070F52A73738F6(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_3_7E62691AFFAF8E9F_METHOD_3_76070F52A73738F6_OFFSET))(this, a1);
	}
};
