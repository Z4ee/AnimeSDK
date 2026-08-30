#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class MeshBound; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace System { class String; }

#define CLASS_1_9473DC9DACFADE9A_METHOD_1_2C512A6FB63FE81A_OFFSET UNITYSDK_OFFSET(0x1597FA00)
#define CLASS_1_9473DC9DACFADE9A_METHOD_1_7D72F6D362C9FDA8_OFFSET UNITYSDK_OFFSET(0x1597FDE0)
#define CLASS_1_9473DC9DACFADE9A_METHOD_1_BA133876A940FE8D_OFFSET UNITYSDK_OFFSET(0x1597FC30)
#define CLASS_1_9473DC9DACFADE9A_METHOD_1_D92EAA8164E7B046_OFFSET UNITYSDK_OFFSET(0x1597FAA0)
#define CLASS_1_9473DC9DACFADE9A_METHOD_1_E3DD16A7B0FF7366_1_OFFSET UNITYSDK_OFFSET(0x1597F980)
#define CLASS_1_9473DC9DACFADE9A_METHOD_1_E3DD16A7B0FF7366_OFFSET UNITYSDK_OFFSET(0x159775E0)

inline static constexpr unsigned int Class_1_9473DC9DACFADE9A_TypeDefinitionIndex = 73766;

class Class_1_9473DC9DACFADE9A : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 Method_1_E3DD16A7B0FF7366(::RPG::MVector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_9473DC9DACFADE9A_METHOD_1_E3DD16A7B0FF7366_OFFSET))(a1);
	}

	static ::RPG::MVector3 Method_1_E3DD16A7B0FF7366_1(::UnityEngine::Vector3 a1)
	{
		return ((::RPG::MVector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9473DC9DACFADE9A_METHOD_1_E3DD16A7B0FF7366_1_OFFSET))(a1);
	}

	static ::RPG::GameCore::MeshBound* Method_1_2C512A6FB63FE81A(::UnityEngine::Bounds a1)
	{
		return ((::RPG::GameCore::MeshBound*(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_9473DC9DACFADE9A_METHOD_1_2C512A6FB63FE81A_OFFSET))(a1);
	}

	static ::UnityEngine::Bounds Method_1_D92EAA8164E7B046(::RPG::GameCore::MeshBound* a1)
	{
		return ((::UnityEngine::Bounds(*)(::RPG::GameCore::MeshBound*))((::PBYTE)hIl2Cpp + CLASS_1_9473DC9DACFADE9A_METHOD_1_D92EAA8164E7B046_OFFSET))(a1);
	}

	static ::RPG::GameCore::LodTemplate* Method_1_BA133876A940FE8D(::RPG::GameCore::LodConfig* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::LodTemplate*(*)(::RPG::GameCore::LodConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9473DC9DACFADE9A_METHOD_1_BA133876A940FE8D_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::NormDistanceLodTemplate* Method_1_7D72F6D362C9FDA8(::RPG::GameCore::LodConfig* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::NormDistanceLodTemplate*(*)(::RPG::GameCore::LodConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9473DC9DACFADE9A_METHOD_1_7D72F6D362C9FDA8_OFFSET))(a1, a2);
	}
};
