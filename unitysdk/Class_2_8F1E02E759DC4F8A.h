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

#define CLASS_2_8F1E02E759DC4F8A_CLONE_OFFSET UNITYSDK_OFFSET(0x11737560)
#define CLASS_2_8F1E02E759DC4F8A_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x11737380)
#define CLASS_2_8F1E02E759DC4F8A_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x11737260)
#define CLASS_2_8F1E02E759DC4F8A__CTOR_OFFSET UNITYSDK_OFFSET(0x117376C0)
#define CLASS_2_8F1E02E759DC4F8A__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0x11737660)
#define CLASS_2_8F1E02E759DC4F8A___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0x117379D0)
#define CLASS_2_8F1E02E759DC4F8A___IFIXBASEPROXY__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0x117379E0)

inline static constexpr unsigned int Class_2_8F1E02E759DC4F8A_TypeDefinitionIndex = 43489;

class Class_2_8F1E02E759DC4F8A : public ::RPG::GameCore::TaskContext
{
public:
	::UnityEngine::Transform* Field_2_15; // 0x98
	::RPG::GameCore::GameEntity* Field_2_14; // 0xA0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_6; // 0xA8
	::System::Collections::Generic::List_1<::Struct_2_263B64D8FC8C9763>* Field_2_11; // 0xB0
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_9; // 0xB8
	::UnityEngine::Collider* Field_2_16; // 0xC0
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_12; // 0xC8
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_10; // 0xD0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_3; // 0xD8
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_7; // 0xE0
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_8; // 0xE8
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_5; // 0xF0
	::RPG::MVector3 Field_2_1; // 0xF8
	::System::Boolean Field_2_2; // 0x104
	::System::Boolean Field_2_13; // 0x105
	::System::Boolean Field_2_4; // 0x106
	::RPG::MVector3 Field_2_0; // 0x108
	::UnityEngine::Vector3 Field_2_17; // 0x114

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F1E02E759DC4F8A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F1E02E759DC4F8A_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F1E02E759DC4F8A_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Clone()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F1E02E759DC4F8A_CLONE_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* _GetSelfInstance()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F1E02E759DC4F8A__GETSELFINSTANCE_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* __iFixBaseProxy_Clone()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F1E02E759DC4F8A___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* __iFixBaseProxy__GetSelfInstance()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F1E02E759DC4F8A___IFIXBASEPROXY__GETSELFINSTANCE_OFFSET))(this);
	}
};
