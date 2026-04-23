#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BD1E2481EC46070A_TransformIndexPath.h"
#include "unitysdk/System/Object.h"

class SkirtIK;
namespace RPG::Client { class SkirtIKConfig_Runtime; }
namespace RPG::Client { class SkirtIKConfig_TransformLUT; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_BD1E2481EC46070A_METHOD_1_492D6752AF528377_OFFSET UNITYSDK_OFFSET(0x96AC040)
#define CLASS_1_BD1E2481EC46070A_METHOD_1_66AA9099E5D96E37_OFFSET UNITYSDK_OFFSET(0x96ABF30)
#define CLASS_1_BD1E2481EC46070A_METHOD_1_BCFC1CF8268004F6_OFFSET UNITYSDK_OFFSET(0x96AC5D0)
#define CLASS_1_BD1E2481EC46070A_METHOD_1_CCEE983ACD2635D2_OFFSET UNITYSDK_OFFSET(0x96AB940)

inline static constexpr unsigned int Class_1_BD1E2481EC46070A_TypeDefinitionIndex = 44039;

class Class_1_BD1E2481EC46070A : public ::System::Object
{
public:
	static ::System::Void Method_1_CCEE983ACD2635D2(::RPG::Client::SkirtIKConfig_Runtime* a1, ::RPG::Client::SkirtIKConfig_TransformLUT* a2, ::SkirtIK* a3, ::UnityEngine::Transform* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::RPG::Client::SkirtIKConfig_Runtime*, ::RPG::Client::SkirtIKConfig_TransformLUT*, ::SkirtIK*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BD1E2481EC46070A_METHOD_1_CCEE983ACD2635D2_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_492D6752AF528377(::UnityEngine::Transform* a1, ::System::String* a2, ::System::UInt64& a3, ::System::UInt64& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::System::String*, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_BD1E2481EC46070A_METHOD_1_492D6752AF528377_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Transform* Method_1_BCFC1CF8268004F6(::UnityEngine::Transform* a1, ::Class_1_BD1E2481EC46070A_TransformIndexPath a2)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::Class_1_BD1E2481EC46070A_TransformIndexPath))((::PBYTE)hIl2Cpp + CLASS_1_BD1E2481EC46070A_METHOD_1_BCFC1CF8268004F6_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Transform* Method_1_66AA9099E5D96E37(::UnityEngine::Transform* a1, ::System::UInt64 a2, ::System::UInt64 a3)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_BD1E2481EC46070A_METHOD_1_66AA9099E5D96E37_OFFSET))(a1, a2, a3);
	}
};
