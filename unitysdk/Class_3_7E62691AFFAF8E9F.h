#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_843468DEB2C89684.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_2_1BB8CA1042AACD99;
class Class_4_38B51614211CBC7D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7E62691AFFAF8E9F_METHOD_3_76070F52A73738F6_OFFSET UNITYSDK_OFFSET(0x17D45A70)
#define CLASS_3_7E62691AFFAF8E9F__CTOR_OFFSET UNITYSDK_OFFSET(0x17D45990)

inline static constexpr unsigned int Class_3_7E62691AFFAF8E9F_TypeDefinitionIndex = 34187;

class Class_3_7E62691AFFAF8E9F : public ::Class_2_843468DEB2C89684
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x48
	::System::Single Field_3_1; // 0x50
	::System::Int32 Field_3_2; // 0x54
	::System::Boolean Field_3_3; // 0x58

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_1BB8CA1042AACD99* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3, ::Il2CppArray<::RPG::GameCore::FixPoint>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_1BB8CA1042AACD99*, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_3_7E62691AFFAF8E9F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_76070F52A73738F6(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_3_7E62691AFFAF8E9F_METHOD_3_76070F52A73738F6_OFFSET))(this, a1);
	}
};
