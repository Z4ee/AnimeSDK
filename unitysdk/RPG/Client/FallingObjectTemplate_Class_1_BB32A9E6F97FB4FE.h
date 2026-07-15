#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_FALLINGOBJECTTEMPLATE_CLASS_1_BB32A9E6F97FB4FE__CTOR_OFFSET UNITYSDK_OFFSET(0x196D9CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FallingObjectTemplate_Class_1_BB32A9E6F97FB4FE_TypeDefinitionIndex = 67740;

	class FallingObjectTemplate_Class_1_BB32A9E6F97FB4FE : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* Field_1_0; // 0x10
		::UnityEngine::Material* Field_1_1; // 0x18
		::System::Int32 Field_1_2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FALLINGOBJECTTEMPLATE_CLASS_1_BB32A9E6F97FB4FE__CTOR_OFFSET))(this);
		}
	};
}
