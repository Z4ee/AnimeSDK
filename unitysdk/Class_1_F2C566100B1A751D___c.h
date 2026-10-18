#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_879FB201627808AE;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_F2C566100B1A751D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1267BBC0)
#define CLASS_1_F2C566100B1A751D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1267BBF0)
#define CLASS_1_F2C566100B1A751D___C___MERGENAVNODE_B__16_0_OFFSET UNITYSDK_OFFSET(0x1267BC00)

inline static constexpr unsigned int Class_1_F2C566100B1A751D___c_TypeDefinitionIndex = 74562;

class Class_1_F2C566100B1A751D___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_879FB201627808AE*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::Class_1_879FB201627808AE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2C566100B1A751D___c_TypeDefinitionIndex)->GetStaticField(0x6F9A0);
	}
	static ::Class_1_F2C566100B1A751D___c** StaticGet___9()
	{
		return (::Class_1_F2C566100B1A751D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2C566100B1A751D___c_TypeDefinitionIndex)->GetStaticField(0x6F9A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2C566100B1A751D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C566100B1A751D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __MergeNavNode_b__16_0(::Class_1_879FB201627808AE* a1, ::Class_1_879FB201627808AE* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_879FB201627808AE*, ::Class_1_879FB201627808AE*))((::PBYTE)hIl2Cpp + CLASS_1_F2C566100B1A751D___C___MERGENAVNODE_B__16_0_OFFSET))(this, a1, a2);
	}
};
