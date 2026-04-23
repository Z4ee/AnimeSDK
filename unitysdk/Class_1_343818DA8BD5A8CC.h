#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleLogicFourDirection.h"
#include "unitysdk/RPG/Client/Prop/SnowballPuzzleBlockType.h"
#include "unitysdk/Struct_2_505E37C57AAC7CFD.h"
#include "unitysdk/Struct_2_734323BCAC2B9ED8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client::Prop { class SnowballPuzzleBlockItem; }

#define CLASS_1_343818DA8BD5A8CC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A545F0)
#define CLASS_1_343818DA8BD5A8CC_GET_SNOWBALLCOUNT_OFFSET UNITYSDK_OFFSET(0x11A55A10)
#define CLASS_1_343818DA8BD5A8CC_METHOD_1_169FA19EFD374550_OFFSET UNITYSDK_OFFSET(0x11A55950)
#define CLASS_1_343818DA8BD5A8CC_METHOD_1_1D0BFD3ECECD9D78_OFFSET UNITYSDK_OFFSET(0x11A54650)
#define CLASS_1_343818DA8BD5A8CC_METHOD_1_1DB61EE2CA1FB45E_OFFSET UNITYSDK_OFFSET(0x11A55280)
#define CLASS_1_343818DA8BD5A8CC_METHOD_1_37AB8D98903CFA25_OFFSET UNITYSDK_OFFSET(0x11A54C20)
#define CLASS_1_343818DA8BD5A8CC_METHOD_1_899587AF2486D80E_OFFSET UNITYSDK_OFFSET(0x11A55870)
#define CLASS_1_343818DA8BD5A8CC_METHOD_1_9D5A69F8589EB9E2_OFFSET UNITYSDK_OFFSET(0x11A55600)
#define CLASS_1_343818DA8BD5A8CC_METHOD_1_B0AC193625C78C56_OFFSET UNITYSDK_OFFSET(0x11A54DE0)
#define CLASS_1_343818DA8BD5A8CC_METHOD_1_B15C78DCB8B2B821_OFFSET UNITYSDK_OFFSET(0x11A550F0)
#define CLASS_1_343818DA8BD5A8CC_METHOD_1_D528606B7E7336F1_OFFSET UNITYSDK_OFFSET(0x11A55490)
#define CLASS_1_343818DA8BD5A8CC_METHOD_1_DA6135563790B7B2_1_OFFSET UNITYSDK_OFFSET(0x11A55680)
#define CLASS_1_343818DA8BD5A8CC_METHOD_1_DA6135563790B7B2_OFFSET UNITYSDK_OFFSET(0x11A55320)
#define CLASS_1_343818DA8BD5A8CC_METHOD_1_F6B522B422985D1A_OFFSET UNITYSDK_OFFSET(0x11A557F0)
#define CLASS_1_343818DA8BD5A8CC_SET_SNOWBALLCOUNT_OFFSET UNITYSDK_OFFSET(0x11A55A20)
#define CLASS_1_343818DA8BD5A8CC__CTOR_OFFSET UNITYSDK_OFFSET(0x11A54640)

inline static constexpr unsigned int Class_1_343818DA8BD5A8CC_TypeDefinitionIndex = 72365;

class Class_1_343818DA8BD5A8CC : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_505E37C57AAC7CFD>* Field_1_4; // 0x10
	::Il2CppArray<::Struct_2_734323BCAC2B9ED8>* Field_1_5; // 0x18
	::System::Int32 _SnowballCount_k__BackingField; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::System::Int32 Field_1_2; // 0x28
	::System::Int32 Field_1_3; // 0x2C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1D0BFD3ECECD9D78(::Il2CppArray<::RPG::Client::Prop::SnowballPuzzleBlockItem*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::Prop::SnowballPuzzleBlockItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC_METHOD_1_1D0BFD3ECECD9D78_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_37AB8D98903CFA25(::UnityEngine::Vector2Int a1, ::RPG::Client::Prop::BlockPuzzleLogicFourDirection a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::Prop::BlockPuzzleLogicFourDirection))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC_METHOD_1_37AB8D98903CFA25_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_B0AC193625C78C56(::UnityEngine::Vector2Int a1, ::RPG::Client::Prop::BlockPuzzleLogicFourDirection a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::Prop::BlockPuzzleLogicFourDirection))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC_METHOD_1_B0AC193625C78C56_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B15C78DCB8B2B821()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC_METHOD_1_B15C78DCB8B2B821_OFFSET))(this);
	}

	::RPG::Client::Prop::SnowballPuzzleBlockType Method_1_1DB61EE2CA1FB45E(::UnityEngine::Vector2Int a1)
	{
		return ((::RPG::Client::Prop::SnowballPuzzleBlockType(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC_METHOD_1_1DB61EE2CA1FB45E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DA6135563790B7B2(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC_METHOD_1_DA6135563790B7B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D528606B7E7336F1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC_METHOD_1_D528606B7E7336F1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int Method_1_9D5A69F8589EB9E2(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC_METHOD_1_9D5A69F8589EB9E2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DA6135563790B7B2_1(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC_METHOD_1_DA6135563790B7B2_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F6B522B422985D1A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC_METHOD_1_F6B522B422985D1A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_899587AF2486D80E(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC_METHOD_1_899587AF2486D80E_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_169FA19EFD374550(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC_METHOD_1_169FA19EFD374550_OFFSET))(this, a1);
	}

	::System::Int32 get_SnowballCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC_GET_SNOWBALLCOUNT_OFFSET))(this);
	}

	::System::Void set_SnowballCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_343818DA8BD5A8CC_SET_SNOWBALLCOUNT_OFFSET))(this, value);
	}
};
