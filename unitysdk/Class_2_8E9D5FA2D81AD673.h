#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Effect_SetRandomAnimTime;
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_8E9D5FA2D81AD673_METHOD_2_825B744A88109549_OFFSET UNITYSDK_OFFSET(0x1384E0E0)
#define CLASS_2_8E9D5FA2D81AD673_METHOD_2_8405025E1E764093_OFFSET UNITYSDK_OFFSET(0x1384DEB0)
#define CLASS_2_8E9D5FA2D81AD673_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x1384E140)
#define CLASS_2_8E9D5FA2D81AD673__CTOR_OFFSET UNITYSDK_OFFSET(0x1384E130)

inline static constexpr unsigned int Class_2_8E9D5FA2D81AD673_TypeDefinitionIndex = 44743;

class Class_2_8E9D5FA2D81AD673 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single Field_2_0; // 0x18
	::System::Int32 Field_2_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E9D5FA2D81AD673__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8405025E1E764093(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_8E9D5FA2D81AD673_METHOD_2_8405025E1E764093_OFFSET))(this, a1);
	}

	::Effect_SetRandomAnimTime* Method_2_825B744A88109549()
	{
		return ((::Effect_SetRandomAnimTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E9D5FA2D81AD673_METHOD_2_825B744A88109549_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_8E9D5FA2D81AD673_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}
};
