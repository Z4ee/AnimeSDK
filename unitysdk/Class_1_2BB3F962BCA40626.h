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

#define CLASS_1_2BB3F962BCA40626_METHOD_1_2C512A6FB63FE81A_OFFSET UNITYSDK_OFFSET(0x9570370)
#define CLASS_1_2BB3F962BCA40626_METHOD_1_7E0F8CBD1CD863E1_OFFSET UNITYSDK_OFFSET(0x95706A0)
#define CLASS_1_2BB3F962BCA40626_METHOD_1_D92EAA8164E7B046_OFFSET UNITYSDK_OFFSET(0x9570410)
#define CLASS_1_2BB3F962BCA40626_METHOD_1_DA3A9FCF21D1286C_OFFSET UNITYSDK_OFFSET(0x95705A0)
#define CLASS_1_2BB3F962BCA40626_METHOD_1_E3DD16A7B0FF7366_1_OFFSET UNITYSDK_OFFSET(0x95702F0)
#define CLASS_1_2BB3F962BCA40626_METHOD_1_E3DD16A7B0FF7366_OFFSET UNITYSDK_OFFSET(0x9570270)

inline static constexpr unsigned int Class_1_2BB3F962BCA40626_TypeDefinitionIndex = 67995;

class Class_1_2BB3F962BCA40626 : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 Method_1_E3DD16A7B0FF7366(::RPG::MVector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_2BB3F962BCA40626_METHOD_1_E3DD16A7B0FF7366_OFFSET))(a1);
	}

	static ::RPG::MVector3 Method_1_E3DD16A7B0FF7366_1(::UnityEngine::Vector3 a1)
	{
		return ((::RPG::MVector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2BB3F962BCA40626_METHOD_1_E3DD16A7B0FF7366_1_OFFSET))(a1);
	}

	static ::RPG::GameCore::MeshBound* Method_1_2C512A6FB63FE81A(::UnityEngine::Bounds a1)
	{
		return ((::RPG::GameCore::MeshBound*(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_2BB3F962BCA40626_METHOD_1_2C512A6FB63FE81A_OFFSET))(a1);
	}

	static ::UnityEngine::Bounds Method_1_D92EAA8164E7B046(::RPG::GameCore::MeshBound* a1)
	{
		return ((::UnityEngine::Bounds(*)(::RPG::GameCore::MeshBound*))((::PBYTE)hIl2Cpp + CLASS_1_2BB3F962BCA40626_METHOD_1_D92EAA8164E7B046_OFFSET))(a1);
	}

	static ::RPG::GameCore::LodTemplate* Method_1_DA3A9FCF21D1286C(::RPG::GameCore::LodConfig* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::LodTemplate*(*)(::RPG::GameCore::LodConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2BB3F962BCA40626_METHOD_1_DA3A9FCF21D1286C_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::NormDistanceLodTemplate* Method_1_7E0F8CBD1CD863E1(::RPG::GameCore::LodConfig* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::NormDistanceLodTemplate*(*)(::RPG::GameCore::LodConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2BB3F962BCA40626_METHOD_1_7E0F8CBD1CD863E1_OFFSET))(a1, a2);
	}
};
