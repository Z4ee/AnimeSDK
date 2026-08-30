#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropSetVisibility; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_3_42F537F55D694F4A_METHOD_3_4373A28D9DB718D5_OFFSET UNITYSDK_OFFSET(0x16B9AB50)
#define CLASS_3_42F537F55D694F4A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B9A7A0)
#define CLASS_3_42F537F55D694F4A__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B9AD50)
#define CLASS_3_42F537F55D694F4A__CTOR_OFFSET UNITYSDK_OFFSET(0x16B9A770)

inline static constexpr unsigned int Class_3_42F537F55D694F4A_TypeDefinitionIndex = 58498;

class Class_3_42F537F55D694F4A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetVisibility*>
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_MOECGMPCECP()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_42F537F55D694F4A_TypeDefinitionIndex)->GetStaticField(0x5C430);
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

	::System::Void Method_3_4373A28D9DB718D5(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_42F537F55D694F4A_METHOD_3_4373A28D9DB718D5_OFFSET))(this, a1);
	}
};
