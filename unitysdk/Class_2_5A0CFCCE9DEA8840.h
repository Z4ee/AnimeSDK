#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_2_5A0CFCCE9DEA8840_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15E9AFF0)
#define CLASS_2_5A0CFCCE9DEA8840_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x15E9AF50)
#define CLASS_2_5A0CFCCE9DEA8840__CTOR_OFFSET UNITYSDK_OFFSET(0x15E9AF90)

inline static constexpr unsigned int Class_2_5A0CFCCE9DEA8840_TypeDefinitionIndex = 72363;

class Class_2_5A0CFCCE9DEA8840 : public ::Class_1_A167209E71412818
{
public:
	::System::String* GEJIJFFILEB; // 0x18
	::UnityEngine::Animator* CKDKOONONCG; // 0x20
	::UnityEngine::UI::RawImage* NEECNLPLKJG; // 0x28
	::UnityEngine::Transform* NAGNPIOHKEF; // 0x30

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
