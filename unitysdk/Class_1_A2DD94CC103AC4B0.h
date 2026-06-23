#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_A2DD94CC103AC4B0_METHOD_1_3BC578EAB014DDA0_OFFSET UNITYSDK_OFFSET(0x1773AC30)
#define CLASS_1_A2DD94CC103AC4B0_METHOD_1_A20C8F753E4E128B_OFFSET UNITYSDK_OFFSET(0x1773AD50)
#define CLASS_1_A2DD94CC103AC4B0_METHOD_1_AF4F6EEA1368574B_1_OFFSET UNITYSDK_OFFSET(0x1773AFF0)
#define CLASS_1_A2DD94CC103AC4B0_METHOD_1_AF4F6EEA1368574B_OFFSET UNITYSDK_OFFSET(0x1773A980)

inline static constexpr unsigned int Class_1_A2DD94CC103AC4B0_TypeDefinitionIndex = 52710;

class Class_1_A2DD94CC103AC4B0 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_AF4F6EEA1368574B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A2DD94CC103AC4B0_METHOD_1_AF4F6EEA1368574B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3BC578EAB014DDA0()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2DD94CC103AC4B0_METHOD_1_3BC578EAB014DDA0_OFFSET))();
	}

	static ::System::Void Method_1_A20C8F753E4E128B(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2DD94CC103AC4B0_METHOD_1_A20C8F753E4E128B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_AF4F6EEA1368574B_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A2DD94CC103AC4B0_METHOD_1_AF4F6EEA1368574B_1_OFFSET))(a1);
	}
};
