#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::LowLevel { class PlayerLoopSystem_UpdateFunction; }

#define CLASS_1_0217CFE33F2E2D0F_METHOD_1_3696C80FA5132A92_OFFSET UNITYSDK_OFFSET(0x1ABF3B20)
#define CLASS_1_0217CFE33F2E2D0F_METHOD_1_8995A5D7CFDFC227_OFFSET UNITYSDK_OFFSET(0x1ABF3760)
#define CLASS_1_0217CFE33F2E2D0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABF3E70)

inline static constexpr unsigned int Class_1_0217CFE33F2E2D0F_TypeDefinitionIndex = 33374;

class Class_1_0217CFE33F2E2D0F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0217CFE33F2E2D0F__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_8995A5D7CFDFC227(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Type* a4, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* a5)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Type*, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*))((::PBYTE)hIl2Cpp + CLASS_1_0217CFE33F2E2D0F_METHOD_1_8995A5D7CFDFC227_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_3696C80FA5132A92(::System::String* a1, ::System::Type* a2, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Type*, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*))((::PBYTE)hIl2Cpp + CLASS_1_0217CFE33F2E2D0F_METHOD_1_3696C80FA5132A92_OFFSET))(a1, a2, a3);
	}
};
