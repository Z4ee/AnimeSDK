#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/BattleTargetStatus.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_2986125F8F93D6D7_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x1620F2C0)
#define CLASS_2_2986125F8F93D6D7_METHOD_2_12D482C1F4C3F1D4_OFFSET UNITYSDK_OFFSET(0x1620F120)
#define CLASS_2_2986125F8F93D6D7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1620F0E0)
#define CLASS_2_2986125F8F93D6D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1620F330)
#define CLASS_2_2986125F8F93D6D7__ONBIND_OFFSET UNITYSDK_OFFSET(0x1620EFC0)

inline static constexpr unsigned int Class_2_2986125F8F93D6D7_TypeDefinitionIndex = 68583;

class Class_2_2986125F8F93D6D7 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Transform* Field_2_1; // 0x60
	::UnityEngine::Transform* Field_2_2; // 0x68
	::RPG::Client::BattleTargetStatus Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2986125F8F93D6D7__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2986125F8F93D6D7__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2986125F8F93D6D7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_12D482C1F4C3F1D4(::RPG::Client::BattleTargetStatus a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleTargetStatus))((::PBYTE)hIl2Cpp + CLASS_2_2986125F8F93D6D7_METHOD_2_12D482C1F4C3F1D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2986125F8F93D6D7_METHOD_2_078D85152011B919_OFFSET))(this);
	}
};
