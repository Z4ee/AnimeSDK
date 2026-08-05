#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_C219469667DBAA6A_Class_1_53CDB4C532B91334;
namespace System { class String; }
namespace UnityEngine { class Object; }

#define CLASS_2_C219469667DBAA6A_CLASS_1_ACFD7BEF1FA1A9F5_METHOD_1_120DDD5BBD0341EC_OFFSET UNITYSDK_OFFSET(0x1143BA80)
#define CLASS_2_C219469667DBAA6A_CLASS_1_ACFD7BEF1FA1A9F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1143BA00)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_Class_1_ACFD7BEF1FA1A9F5_TypeDefinitionIndex = 65660;

class Class_2_C219469667DBAA6A_Class_1_ACFD7BEF1FA1A9F5 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Class_2_C219469667DBAA6A_Class_1_53CDB4C532B91334* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_ACFD7BEF1FA1A9F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_120DDD5BBD0341EC(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_ACFD7BEF1FA1A9F5_METHOD_1_120DDD5BBD0341EC_OFFSET))(this, a1, a2);
	}
};
