#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DCEE691286F89A;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_9F1E2C5450F3429A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DAFA90)
#define CLASS_2_9F1E2C5450F3429A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAFAD0)
#define CLASS_2_9F1E2C5450F3429A___C__SYNCMOTIONINFO_B__3_1_OFFSET UNITYSDK_OFFSET(0x17DAFAE0)

inline static constexpr unsigned int Class_2_9F1E2C5450F3429A___c_TypeDefinitionIndex = 66428;

class Class_2_9F1E2C5450F3429A___c : public ::System::Object
{
public:
	static ::Class_2_9F1E2C5450F3429A___c** StaticGet___9()
	{
		return (::Class_2_9F1E2C5450F3429A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9F1E2C5450F3429A___c_TypeDefinitionIndex)->GetStaticField(0x7350);
	}
	static ::System::Comparison_1<::Class_1_52DCEE691286F89A*>** StaticGet___9__3_1()
	{
		return (::System::Comparison_1<::Class_1_52DCEE691286F89A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9F1E2C5450F3429A___c_TypeDefinitionIndex)->GetStaticField(0x7358);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9F1E2C5450F3429A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F1E2C5450F3429A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SyncMotionInfo_b__3_1(::Class_1_52DCEE691286F89A* a1, ::Class_1_52DCEE691286F89A* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_52DCEE691286F89A*, ::Class_1_52DCEE691286F89A*))((::PBYTE)hIl2Cpp + CLASS_2_9F1E2C5450F3429A___C__SYNCMOTIONINFO_B__3_1_OFFSET))(this, a1, a2);
	}
};
