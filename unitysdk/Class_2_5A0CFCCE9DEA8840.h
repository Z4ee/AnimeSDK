#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_2_5A0CFCCE9DEA8840_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE64C710)
#define CLASS_2_5A0CFCCE9DEA8840_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xE64C670)
#define CLASS_2_5A0CFCCE9DEA8840__CTOR_OFFSET UNITYSDK_OFFSET(0xE64C6B0)

inline static constexpr unsigned int Class_2_5A0CFCCE9DEA8840_TypeDefinitionIndex = 66666;

class Class_2_5A0CFCCE9DEA8840 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::UnityEngine::UI::RawImage* Field_2_0; // 0x18
	::UnityEngine::Animator* Field_2_1; // 0x20
	::UnityEngine::Transform* Field_2_2; // 0x28
	::System::String* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_5A0CFCCE9DEA8840__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A0CFCCE9DEA8840_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A0CFCCE9DEA8840_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
