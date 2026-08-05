#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_11ED91AA14CD390E;
class Class_1_9BD35813BE7AEA9D;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_9BD35813BE7AEA9D_CLASS_1_4D583EDFB4AEEFE4_METHOD_1_5FF93680441FA6D1_OFFSET UNITYSDK_OFFSET(0x1582C320)
#define CLASS_1_9BD35813BE7AEA9D_CLASS_1_4D583EDFB4AEEFE4__CTOR_OFFSET UNITYSDK_OFFSET(0x1582C310)

inline static constexpr unsigned int Class_1_9BD35813BE7AEA9D_Class_1_4D583EDFB4AEEFE4_TypeDefinitionIndex = 16365;

class Class_1_9BD35813BE7AEA9D_Class_1_4D583EDFB4AEEFE4 : public ::System::Object
{
public:
	::Class_1_9BD35813BE7AEA9D* Field_1_0; // 0x10
	::System::Action_1<::Class_1_11ED91AA14CD390E*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BD35813BE7AEA9D_CLASS_1_4D583EDFB4AEEFE4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5FF93680441FA6D1(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_9BD35813BE7AEA9D_CLASS_1_4D583EDFB4AEEFE4_METHOD_1_5FF93680441FA6D1_OFFSET))(this, a1, a2);
	}
};
