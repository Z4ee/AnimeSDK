#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A1A8840B8D273722_Struct_2_B4A3FFF4BA57C3E5.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"

#define CLASS_3_A1A8840B8D273722_STRUCT_2_34DF267045B3A54B_EXECUTE_OFFSET UNITYSDK_OFFSET(0x819C90)
#define CLASS_3_A1A8840B8D273722_STRUCT_2_34DF267045B3A54B__CTOR_OFFSET UNITYSDK_OFFSET(0x819C80)

inline static constexpr unsigned int Class_3_A1A8840B8D273722_Struct_2_34DF267045B3A54B_TypeDefinitionIndex = 48966;

struct alignas(8) Class_3_A1A8840B8D273722_Struct_2_34DF267045B3A54B
{
	::UnityEngine::PhysicsScene Field_2_0; // 0x10
	::Unity::Collections::NativeArray_1<::Class_3_A1A8840B8D273722_Struct_2_B4A3FFF4BA57C3E5> Field_2_7; // 0x18

	::System::Void _ctor(::Unity::Collections::NativeArray_1<::Class_3_A1A8840B8D273722_Struct_2_B4A3FFF4BA57C3E5>& a1, ::UnityEngine::PhysicsScene& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::Class_3_A1A8840B8D273722_Struct_2_B4A3FFF4BA57C3E5>&, ::UnityEngine::PhysicsScene&))((::PBYTE)hIl2Cpp + CLASS_3_A1A8840B8D273722_STRUCT_2_34DF267045B3A54B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A1A8840B8D273722_STRUCT_2_34DF267045B3A54B_EXECUTE_OFFSET))(this, a1);
	}
};
