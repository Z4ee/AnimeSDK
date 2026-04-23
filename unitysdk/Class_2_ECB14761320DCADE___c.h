#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DCEE691286F89A;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_ECB14761320DCADE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1000F950)
#define CLASS_2_ECB14761320DCADE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1000F990)
#define CLASS_2_ECB14761320DCADE___C__SYNCMOTIONINFO_B__3_1_OFFSET UNITYSDK_OFFSET(0x1000F9A0)

inline static constexpr unsigned int Class_2_ECB14761320DCADE___c_TypeDefinitionIndex = 61154;

class Class_2_ECB14761320DCADE___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_52DCEE691286F89A*>** StaticGet___9__3_1()
	{
		return (::System::Comparison_1<::Class_1_52DCEE691286F89A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ECB14761320DCADE___c_TypeDefinitionIndex)->GetStaticField(0xDB60);
	}
	static ::Class_2_ECB14761320DCADE___c** StaticGet___9()
	{
		return (::Class_2_ECB14761320DCADE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ECB14761320DCADE___c_TypeDefinitionIndex)->GetStaticField(0xDB68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SyncMotionInfo_b__3_1(::Class_1_52DCEE691286F89A* a, ::Class_1_52DCEE691286F89A* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_52DCEE691286F89A*, ::Class_1_52DCEE691286F89A*))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE___C__SYNCMOTIONINFO_B__3_1_OFFSET))(this, a, b);
	}
};
