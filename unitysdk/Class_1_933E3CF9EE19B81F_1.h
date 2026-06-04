#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_6DE8726ADEF173A7_6;
class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_933E3CF9EE19B81F_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC447630)
#define CLASS_1_933E3CF9EE19B81F_1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC4475F0)
#define CLASS_1_933E3CF9EE19B81F_1_METHOD_1_73414B5A22121774_OFFSET UNITYSDK_OFFSET(0xC447F70)
#define CLASS_1_933E3CF9EE19B81F_1_METHOD_1_84106D9ED3DBF9FE_OFFSET UNITYSDK_OFFSET(0xC4478A0)
#define CLASS_1_933E3CF9EE19B81F_1_METHOD_1_B3AE38C23FC236A8_OFFSET UNITYSDK_OFFSET(0xC448940)
#define CLASS_1_933E3CF9EE19B81F_1_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xC448900)
#define CLASS_1_933E3CF9EE19B81F_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC447550)

inline static constexpr unsigned int Class_1_933E3CF9EE19B81F_1_TypeDefinitionIndex = 71685;

class Class_1_933E3CF9EE19B81F_1 : public ::System::Object
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_1_0; // 0x10
	::Class_1_B4357A1C72BABC6B* Field_1_1; // 0x18
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_933E3CF9EE19B81F_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933E3CF9EE19B81F_1_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933E3CF9EE19B81F_1_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933E3CF9EE19B81F_1_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_84106D9ED3DBF9FE(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_933E3CF9EE19B81F_1_METHOD_1_84106D9ED3DBF9FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_73414B5A22121774(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_933E3CF9EE19B81F_1_METHOD_1_73414B5A22121774_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_B3AE38C23FC236A8(::Class_1_6DE8726ADEF173A7_6* a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::Class_1_6DE8726ADEF173A7_6*))((::PBYTE)hIl2Cpp + CLASS_1_933E3CF9EE19B81F_1_METHOD_1_B3AE38C23FC236A8_OFFSET))(this, a1);
	}
};
