#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleLogicFourDirection.h"
#include "unitysdk/RPG/Client/Prop/SnowballPuzzleBlockType.h"
#include "unitysdk/Struct_2_505E37C57AAC7CFD.h"
#include "unitysdk/Struct_2_734323BCAC2B9ED8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client::Prop { class SnowballPuzzleBlockItem; }

#define CLASS_1_4B9DE6693E86B2D4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA689360)
#define CLASS_1_4B9DE6693E86B2D4_GET_SNOWBALLCOUNT_OFFSET UNITYSDK_OFFSET(0xA68A510)
#define CLASS_1_4B9DE6693E86B2D4_METHOD_1_169FA19EFD374550_OFFSET UNITYSDK_OFFSET(0xA68A470)
#define CLASS_1_4B9DE6693E86B2D4_METHOD_1_1D0BFD3ECECD9D78_OFFSET UNITYSDK_OFFSET(0xA6893C0)
#define CLASS_1_4B9DE6693E86B2D4_METHOD_1_1DB61EE2CA1FB45E_OFFSET UNITYSDK_OFFSET(0xA689E50)
#define CLASS_1_4B9DE6693E86B2D4_METHOD_1_643FFA1166071130_OFFSET UNITYSDK_OFFSET(0xA689CD0)
#define CLASS_1_4B9DE6693E86B2D4_METHOD_1_7C98AF16CC8117AD_OFFSET UNITYSDK_OFFSET(0xA689A40)
#define CLASS_1_4B9DE6693E86B2D4_METHOD_1_899587AF2486D80E_OFFSET UNITYSDK_OFFSET(0xA68A3B0)
#define CLASS_1_4B9DE6693E86B2D4_METHOD_1_9D5A69F8589EB9E2_OFFSET UNITYSDK_OFFSET(0xA68A170)
#define CLASS_1_4B9DE6693E86B2D4_METHOD_1_D528606B7E7336F1_OFFSET UNITYSDK_OFFSET(0xA68A040)
#define CLASS_1_4B9DE6693E86B2D4_METHOD_1_DA6135563790B7B2_1_OFFSET UNITYSDK_OFFSET(0xA68A1E0)
#define CLASS_1_4B9DE6693E86B2D4_METHOD_1_DA6135563790B7B2_OFFSET UNITYSDK_OFFSET(0xA689EE0)
#define CLASS_1_4B9DE6693E86B2D4_METHOD_1_ECC3B2F4ED8D7892_OFFSET UNITYSDK_OFFSET(0xA6898C0)
#define CLASS_1_4B9DE6693E86B2D4_METHOD_1_F6B522B422985D1A_OFFSET UNITYSDK_OFFSET(0xA68A340)
#define CLASS_1_4B9DE6693E86B2D4_SET_SNOWBALLCOUNT_OFFSET UNITYSDK_OFFSET(0xA68A520)
#define CLASS_1_4B9DE6693E86B2D4__CTOR_OFFSET UNITYSDK_OFFSET(0xA6893B0)

inline static constexpr unsigned int Class_1_4B9DE6693E86B2D4_TypeDefinitionIndex = 73387;

class Class_1_4B9DE6693E86B2D4 : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_734323BCAC2B9ED8>* Field_1_0; // 0x10
	::Il2CppArray<::Struct_2_505E37C57AAC7CFD>* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Int32 Field_1_4; // 0x28
	::System::Int32 _SnowballCount_k__BackingField; // 0x2C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1D0BFD3ECECD9D78(::Il2CppArray<::RPG::Client::Prop::SnowballPuzzleBlockItem*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::Prop::SnowballPuzzleBlockItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4_METHOD_1_1D0BFD3ECECD9D78_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_ECC3B2F4ED8D7892(::UnityEngine::Vector2Int a1, ::RPG::Client::Prop::BlockPuzzleLogicFourDirection a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::Prop::BlockPuzzleLogicFourDirection))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4_METHOD_1_ECC3B2F4ED8D7892_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_7C98AF16CC8117AD(::UnityEngine::Vector2Int a1, ::RPG::Client::Prop::BlockPuzzleLogicFourDirection a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::Prop::BlockPuzzleLogicFourDirection))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4_METHOD_1_7C98AF16CC8117AD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_643FFA1166071130()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4_METHOD_1_643FFA1166071130_OFFSET))(this);
	}

	::RPG::Client::Prop::SnowballPuzzleBlockType Method_1_1DB61EE2CA1FB45E(::UnityEngine::Vector2Int a1)
	{
		return ((::RPG::Client::Prop::SnowballPuzzleBlockType(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4_METHOD_1_1DB61EE2CA1FB45E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DA6135563790B7B2(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4_METHOD_1_DA6135563790B7B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D528606B7E7336F1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4_METHOD_1_D528606B7E7336F1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int Method_1_9D5A69F8589EB9E2(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4_METHOD_1_9D5A69F8589EB9E2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DA6135563790B7B2_1(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4_METHOD_1_DA6135563790B7B2_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F6B522B422985D1A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4_METHOD_1_F6B522B422985D1A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_899587AF2486D80E(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4_METHOD_1_899587AF2486D80E_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_169FA19EFD374550(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4_METHOD_1_169FA19EFD374550_OFFSET))(this, a1);
	}

	::System::Int32 get_SnowballCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4_GET_SNOWBALLCOUNT_OFFSET))(this);
	}

	::System::Void set_SnowballCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4B9DE6693E86B2D4_SET_SNOWBALLCOUNT_OFFSET))(this, a1);
	}
};
