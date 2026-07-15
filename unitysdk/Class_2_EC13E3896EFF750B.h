#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskContext.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_263B64D8FC8C9763.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EC13E3896EFF750B_CLONE_OFFSET UNITYSDK_OFFSET(0x16D78EC0)
#define CLASS_2_EC13E3896EFF750B_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x16D78C00)
#define CLASS_2_EC13E3896EFF750B_METHOD_2_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0x16D78D20)
#define CLASS_2_EC13E3896EFF750B__CTOR_OFFSET UNITYSDK_OFFSET(0x16D79030)
#define CLASS_2_EC13E3896EFF750B__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0x16D78FD0)

inline static constexpr unsigned int Class_2_EC13E3896EFF750B_TypeDefinitionIndex = 51938;

class Class_2_EC13E3896EFF750B : public ::RPG::GameCore::TaskContext
{
public:
	::UnityEngine::Collider* Field_2_0; // 0xA8
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0xB0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0xB8
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_3; // 0xC0
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_4; // 0xC8
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_5; // 0xD0
	::UnityEngine::Transform* Field_2_6; // 0xD8
	::System::Collections::Generic::List_1<::Struct_2_263B64D8FC8C9763>* Field_2_7; // 0xE0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_8; // 0xE8
	::RPG::GameCore::GameEntity* Field_2_9; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_10; // 0xF8
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_11; // 0x100
	::System::Boolean Field_2_12; // 0x108
	::System::Boolean Field_2_13; // 0x109
	::System::Boolean Field_2_14; // 0x10A
	::UnityEngine::Vector3 Field_2_15; // 0x10C
	::RPG::MVector3 Field_2_16; // 0x118
	::RPG::MVector3 Field_2_17; // 0x124

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC13E3896EFF750B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC13E3896EFF750B_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_A5809AB80389F7DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC13E3896EFF750B_METHOD_2_A5809AB80389F7DE_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Clone()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC13E3896EFF750B_CLONE_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* _GetSelfInstance()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC13E3896EFF750B__GETSELFINSTANCE_OFFSET))(this);
	}
};
