#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CruiseOrbitBGCurvePlugin;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D62C2C8EAA687B3C_METHOD_1_2CB4AEB912AA0833_OFFSET UNITYSDK_OFFSET(0x8E10580)
#define CLASS_1_D62C2C8EAA687B3C_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x8E0FFE0)
#define CLASS_1_D62C2C8EAA687B3C_METHOD_1_5928E4108213B98A_OFFSET UNITYSDK_OFFSET(0x8E10030)
#define CLASS_1_D62C2C8EAA687B3C_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8E10520)
#define CLASS_1_D62C2C8EAA687B3C_METHOD_1_CEAAAB7C9D47D35C_OFFSET UNITYSDK_OFFSET(0x8E10190)
#define CLASS_1_D62C2C8EAA687B3C__CTOR_OFFSET UNITYSDK_OFFSET(0x8E10620)

inline static constexpr unsigned int Class_1_D62C2C8EAA687B3C_TypeDefinitionIndex = 46454;

class Class_1_D62C2C8EAA687B3C : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::CruiseOrbitBGCurvePlugin*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D62C2C8EAA687B3C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D62C2C8EAA687B3C_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Void Method_1_5928E4108213B98A(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D62C2C8EAA687B3C_METHOD_1_5928E4108213B98A_OFFSET))(this, a1);
	}

	::CruiseOrbitBGCurvePlugin* Method_1_CEAAAB7C9D47D35C(::System::String* a1, ::System::String* a2)
	{
		return ((::CruiseOrbitBGCurvePlugin*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D62C2C8EAA687B3C_METHOD_1_CEAAAB7C9D47D35C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D62C2C8EAA687B3C_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_2CB4AEB912AA0833(::CruiseOrbitBGCurvePlugin* a1)
	{
		return ((::System::Void(*)(::PVOID, ::CruiseOrbitBGCurvePlugin*))((::PBYTE)hIl2Cpp + CLASS_1_D62C2C8EAA687B3C_METHOD_1_2CB4AEB912AA0833_OFFSET))(this, a1);
	}
};
