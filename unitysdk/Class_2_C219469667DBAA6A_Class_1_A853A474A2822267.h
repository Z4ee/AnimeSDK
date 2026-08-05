#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define CLASS_2_C219469667DBAA6A_CLASS_1_A853A474A2822267_METHOD_1_E484510B65AD7BF7_1_OFFSET UNITYSDK_OFFSET(0x134C2C10)
#define CLASS_2_C219469667DBAA6A_CLASS_1_A853A474A2822267_METHOD_1_E484510B65AD7BF7_OFFSET UNITYSDK_OFFSET(0x134C2BC0)
#define CLASS_2_C219469667DBAA6A_CLASS_1_A853A474A2822267__CTOR_OFFSET UNITYSDK_OFFSET(0x134C2BB0)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_Class_1_A853A474A2822267_TypeDefinitionIndex = 65658;

class Class_2_C219469667DBAA6A_Class_1_A853A474A2822267 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_A853A474A2822267__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E484510B65AD7BF7(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_A853A474A2822267_METHOD_1_E484510B65AD7BF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E484510B65AD7BF7_1(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_A853A474A2822267_METHOD_1_E484510B65AD7BF7_1_OFFSET))(this, a1, a2);
	}
};
