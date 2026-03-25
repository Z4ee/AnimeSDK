#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropSetVisibility; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_3_42F537F55D694F4A_METHOD_3_B1656F1864A82557_OFFSET UNITYSDK_OFFSET(0xDE31010)
#define CLASS_3_42F537F55D694F4A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE30C40)
#define CLASS_3_42F537F55D694F4A__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE311E0)
#define CLASS_3_42F537F55D694F4A__CTOR_OFFSET UNITYSDK_OFFSET(0xDE30C10)

inline static constexpr unsigned int Class_3_42F537F55D694F4A_TypeDefinitionIndex = 47086;

class Class_3_42F537F55D694F4A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetVisibility*>
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_42F537F55D694F4A_TypeDefinitionIndex)->GetStaticField(0x472D0);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetVisibility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetVisibility*))((::PBYTE)hIl2Cpp + CLASS_3_42F537F55D694F4A__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_42F537F55D694F4A__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42F537F55D694F4A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_B1656F1864A82557(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_42F537F55D694F4A_METHOD_3_B1656F1864A82557_OFFSET))(this, a1);
	}
};
