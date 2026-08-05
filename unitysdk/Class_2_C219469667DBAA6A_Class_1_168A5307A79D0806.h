#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C219469667DBAA6A_Enum_3_554CAED038424452.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_C219469667DBAA6A;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_2_C219469667DBAA6A_CLASS_1_168A5307A79D0806_METHOD_1_2CA7A456F23971D0_OFFSET UNITYSDK_OFFSET(0x1778E940)
#define CLASS_2_C219469667DBAA6A_CLASS_1_168A5307A79D0806_METHOD_1_4B4F27F8A1528C8D_OFFSET UNITYSDK_OFFSET(0x1778EA10)
#define CLASS_2_C219469667DBAA6A_CLASS_1_168A5307A79D0806__CTOR_OFFSET UNITYSDK_OFFSET(0x1778E930)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_Class_1_168A5307A79D0806_TypeDefinitionIndex = 65647;

class Class_2_C219469667DBAA6A_Class_1_168A5307A79D0806 : public ::System::Object
{
public:
	::System::Action_3<::Foundation::AssetPath, ::System::Int32, ::System::Int32>* Field_1_1; // 0x10
	::Class_2_C219469667DBAA6A* Field_1_5; // 0x18
	::System::Int32 Field_1_7; // 0x20
	::System::Int32 Field_1_6; // 0x24
	::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452 Field_1_4; // 0x28
	::System::UInt64 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_168A5307A79D0806__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2CA7A456F23971D0(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_168A5307A79D0806_METHOD_1_2CA7A456F23971D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4B4F27F8A1528C8D(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_168A5307A79D0806_METHOD_1_4B4F27F8A1528C8D_OFFSET))(this, a1, a2);
	}
};
