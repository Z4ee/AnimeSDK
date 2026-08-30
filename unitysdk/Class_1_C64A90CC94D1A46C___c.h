#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C64A90CC94D1A46C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A1A700)
#define CLASS_1_C64A90CC94D1A46C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1A740)
#define CLASS_1_C64A90CC94D1A46C___C__DEEPCOPY_B__3_0_OFFSET UNITYSDK_OFFSET(0x18A1A750)
#define CLASS_1_C64A90CC94D1A46C___C__DEEPCOPY_B__3_1_OFFSET UNITYSDK_OFFSET(0x18A1A760)

inline static constexpr unsigned int Class_1_C64A90CC94D1A46C___c_TypeDefinitionIndex = 78265;

class Class_1_C64A90CC94D1A46C___c : public ::System::Object
{
public:
	static ::Class_1_C64A90CC94D1A46C___c** StaticGet___9()
	{
		return (::Class_1_C64A90CC94D1A46C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C64A90CC94D1A46C___c_TypeDefinitionIndex)->GetStaticField(0x62DC0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>** StaticGet___9__3_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C64A90CC94D1A46C___c_TypeDefinitionIndex)->GetStaticField(0x62DC8);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>, ::System::Int32>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C64A90CC94D1A46C___c_TypeDefinitionIndex)->GetStaticField(0x62DD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _DeepCopy_b__3_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>))((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C___C__DEEPCOPY_B__3_0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* _DeepCopy_b__3_1(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*> a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>))((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C___C__DEEPCOPY_B__3_1_OFFSET))(this, a1);
	}
};
