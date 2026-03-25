#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C9755E532821B8B5;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_7E4A59331ABE9D92___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x117A89A0)
#define CLASS_1_7E4A59331ABE9D92___C__CTOR_OFFSET UNITYSDK_OFFSET(0x117A89D0)
#define CLASS_1_7E4A59331ABE9D92___C___MERGENAVNODE_B__16_0_OFFSET UNITYSDK_OFFSET(0x117A89E0)

inline static constexpr unsigned int Class_1_7E4A59331ABE9D92___c_TypeDefinitionIndex = 61294;

class Class_1_7E4A59331ABE9D92___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_C9755E532821B8B5*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::Class_1_C9755E532821B8B5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E4A59331ABE9D92___c_TypeDefinitionIndex)->GetStaticField(0x451D0);
	}
	static ::Class_1_7E4A59331ABE9D92___c** StaticGet___9()
	{
		return (::Class_1_7E4A59331ABE9D92___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E4A59331ABE9D92___c_TypeDefinitionIndex)->GetStaticField(0x451D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E4A59331ABE9D92___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E4A59331ABE9D92___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __MergeNavNode_b__16_0(::Class_1_C9755E532821B8B5* left, ::Class_1_C9755E532821B8B5* right)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_C9755E532821B8B5*, ::Class_1_C9755E532821B8B5*))((::PBYTE)hIl2Cpp + CLASS_1_7E4A59331ABE9D92___C___MERGENAVNODE_B__16_0_OFFSET))(this, left, right);
	}
};
