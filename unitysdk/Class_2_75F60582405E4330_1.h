#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4BA5BF6D6AE6A5EC.h"

namespace RPGTools { class MonoTimelineEffect; }
namespace System { class String; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_2_75F60582405E4330_1_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1AF42CA0)
#define CLASS_2_75F60582405E4330_1_METHOD_2_6C154E1584EB3107_OFFSET UNITYSDK_OFFSET(0x1AF42B60)
#define CLASS_2_75F60582405E4330_1_METHOD_2_B387E1AED8A8F880_1_OFFSET UNITYSDK_OFFSET(0x1AF42E00)
#define CLASS_2_75F60582405E4330_1_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x1AF42C50)
#define CLASS_2_75F60582405E4330_1_METHOD_2_B9B6206ACDEE66E1_OFFSET UNITYSDK_OFFSET(0x1AF42B50)
#define CLASS_2_75F60582405E4330_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF42E50)

inline static constexpr unsigned int Class_2_75F60582405E4330_1_TypeDefinitionIndex = 49143;

class Class_2_75F60582405E4330_1 : public ::Class_1_4BA5BF6D6AE6A5EC
{
public:
	::UnityEngine::MeshRenderer* AEEANFPMKGM; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F60582405E4330_1__CTOR_OFFSET))(this);
	}

	::RPGTools::MonoTimelineEffect* Method_2_B9B6206ACDEE66E1()
	{
		return ((::RPGTools::MonoTimelineEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F60582405E4330_1_METHOD_2_B9B6206ACDEE66E1_OFFSET))(this);
	}

	::System::Void Method_2_6C154E1584EB3107(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_75F60582405E4330_1_METHOD_2_6C154E1584EB3107_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F60582405E4330_1_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F60582405E4330_1_METHOD_2_B387E1AED8A8F880_1_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F60582405E4330_1_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
