#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_FALLINGOBJECTTEMPLATE_CLASS_1_BB32A9E6F97FB4FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A7AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int FallingObjectTemplate_Class_1_BB32A9E6F97FB4FE_TypeDefinitionIndex = 70902;

	class FallingObjectTemplate_Class_1_BB32A9E6F97FB4FE : public ::System::Object
	{
	public:
		::UnityEngine::Material* PPPHAPMOPLF; // 0x10
		::UnityEngine::Mesh* HLMADHIMMMC; // 0x18
		::System::Int32 CGMKAMEDFNI; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FALLINGOBJECTTEMPLATE_CLASS_1_BB32A9E6F97FB4FE__CTOR_OFFSET))(this);
		}
	};
}
