#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropSetVisibility; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_3_42F537F55D694F4A_METHOD_3_8CF25708B8860116_OFFSET UNITYSDK_OFFSET(0x1449F250)
#define CLASS_3_42F537F55D694F4A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1449EEA0)
#define CLASS_3_42F537F55D694F4A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1449F460)
#define CLASS_3_42F537F55D694F4A__CTOR_OFFSET UNITYSDK_OFFSET(0x1449EE70)

inline static constexpr unsigned int Class_3_42F537F55D694F4A_TypeDefinitionIndex = 54543;

class Class_3_42F537F55D694F4A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetVisibility*>
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_42F537F55D694F4A_TypeDefinitionIndex)->GetStaticField(0x453F0);
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

	::System::Void Method_3_8CF25708B8860116(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_42F537F55D694F4A_METHOD_3_8CF25708B8860116_OFFSET))(this, a1);
	}
};
