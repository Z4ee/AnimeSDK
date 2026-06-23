#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_DB3A5EFF78BBB49D;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_DB3A5EFF78BBB49D_CLASS_1_7FD2AAE839AFCD6A_METHOD_1_C5F6A2E641774048_OFFSET UNITYSDK_OFFSET(0x1238A420)
#define CLASS_1_DB3A5EFF78BBB49D_CLASS_1_7FD2AAE839AFCD6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1238A410)

inline static constexpr unsigned int Class_1_DB3A5EFF78BBB49D_Class_1_7FD2AAE839AFCD6A_TypeDefinitionIndex = 79732;

class Class_1_DB3A5EFF78BBB49D_Class_1_7FD2AAE839AFCD6A : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::Class_1_DB3A5EFF78BBB49D* Field_1_0; // 0x18
	::System::Action_2<::System::Boolean, ::Class_1_DB3A5EFF78BBB49D*>* Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB3A5EFF78BBB49D_CLASS_1_7FD2AAE839AFCD6A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C5F6A2E641774048(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_DB3A5EFF78BBB49D_CLASS_1_7FD2AAE839AFCD6A_METHOD_1_C5F6A2E641774048_OFFSET))(this, a1, a2);
	}
};
