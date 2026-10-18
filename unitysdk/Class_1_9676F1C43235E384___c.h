#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_1ABDF1855FCDB08F;
class Class_1_21BD3AD2A1214F1C;
class Class_1_2860A093D0C9EE46;
namespace R3 { template <typename T> class Observable_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1; }

#define CLASS_1_9676F1C43235E384___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B87610)
#define CLASS_1_9676F1C43235E384___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B87650)
#define CLASS_1_9676F1C43235E384___C__INIT_B__58_11_OFFSET UNITYSDK_OFFSET(0x15B87740)
#define CLASS_1_9676F1C43235E384___C__INIT_B__58_6_OFFSET UNITYSDK_OFFSET(0x15B87660)

inline static constexpr unsigned int Class_1_9676F1C43235E384___c_TypeDefinitionIndex = 79540;

class Class_1_9676F1C43235E384___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_21BD3AD2A1214F1C*, ::System::Collections::Immutable::ImmutableHashSet_1<::UnityEngine::Vector2Int>*>** StaticGet___9__58_6()
	{
		return (::System::Func_2<::Class_1_21BD3AD2A1214F1C*, ::System::Collections::Immutable::ImmutableHashSet_1<::UnityEngine::Vector2Int>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9676F1C43235E384___c_TypeDefinitionIndex)->GetStaticField(0x6F1C0);
	}
	static ::Class_1_9676F1C43235E384___c** StaticGet___9()
	{
		return (::Class_1_9676F1C43235E384___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9676F1C43235E384___c_TypeDefinitionIndex)->GetStaticField(0x6F1C8);
	}
	static ::System::Func_2<::Class_1_2860A093D0C9EE46*, ::R3::Observable_1<::Class_1_1ABDF1855FCDB08F*>*>** StaticGet___9__58_11()
	{
		return (::System::Func_2<::Class_1_2860A093D0C9EE46*, ::R3::Observable_1<::Class_1_1ABDF1855FCDB08F*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9676F1C43235E384___c_TypeDefinitionIndex)->GetStaticField(0x6F1D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Immutable::ImmutableHashSet_1<::UnityEngine::Vector2Int>* _Init_b__58_6(::Class_1_21BD3AD2A1214F1C* a1)
	{
		return ((::System::Collections::Immutable::ImmutableHashSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Class_1_21BD3AD2A1214F1C*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384___C__INIT_B__58_6_OFFSET))(this, a1);
	}

	::R3::Observable_1<::Class_1_1ABDF1855FCDB08F*>* _Init_b__58_11(::Class_1_2860A093D0C9EE46* a1)
	{
		return ((::R3::Observable_1<::Class_1_1ABDF1855FCDB08F*>*(*)(::PVOID, ::Class_1_2860A093D0C9EE46*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384___C__INIT_B__58_11_OFFSET))(this, a1);
	}
};
