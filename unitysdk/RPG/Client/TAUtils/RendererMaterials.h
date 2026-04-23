#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TAUTILS_RENDERERMATERIALS_METHOD_1_DAE822828607EFDD_OFFSET UNITYSDK_OFFSET(0xB274DC0)
#define RPG_CLIENT_TAUTILS_RENDERERMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0xB274DB0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int RendererMaterials_TypeDefinitionIndex = 67787;

	class RendererMaterials : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* renderer; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0x18

		::System::Void _ctor(::UnityEngine::Renderer* a1, ::Il2CppArray<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERMATERIALS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_DAE822828607EFDD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERMATERIALS_METHOD_1_DAE822828607EFDD_OFFSET))(this, a1);
		}
	};
}
