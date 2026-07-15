#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_48488E8DBD9F6BCE.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_2_AEE59ED8DADEC1A1;
class Class_4_38B51614211CBC7D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F65294BF89CA0784_METHOD_3_76070F52A73738F6_OFFSET UNITYSDK_OFFSET(0x17AFC4E0)
#define CLASS_3_F65294BF89CA0784__CTOR_OFFSET UNITYSDK_OFFSET(0x17AFC450)

inline static constexpr unsigned int Class_3_F65294BF89CA0784_TypeDefinitionIndex = 34851;

class Class_3_F65294BF89CA0784 : public ::Class_2_48488E8DBD9F6BCE
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x48
	::System::Boolean Field_3_1; // 0x50
	::System::Single Field_3_2; // 0x54
	::System::Int32 Field_3_3; // 0x58

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_AEE59ED8DADEC1A1* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3, ::Il2CppArray<::RPG::GameCore::FixPoint>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_AEE59ED8DADEC1A1*, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_3_F65294BF89CA0784__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_76070F52A73738F6(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_3_F65294BF89CA0784_METHOD_3_76070F52A73738F6_OFFSET))(this, a1);
	}
};
