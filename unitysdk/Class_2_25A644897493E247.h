#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_25A644897493E247_METHOD_2_614288621F812149_OFFSET UNITYSDK_OFFSET(0x162F60E0)
#define CLASS_2_25A644897493E247_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x162F5F70)
#define CLASS_2_25A644897493E247_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x162F6040)
#define CLASS_2_25A644897493E247_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x162F6000)
#define CLASS_2_25A644897493E247__CTOR_OFFSET UNITYSDK_OFFSET(0x162F6120)
#define CLASS_2_25A644897493E247__ONBIND_OFFSET UNITYSDK_OFFSET(0x162F5E10)
#define CLASS_2_25A644897493E247__ONTICK_OFFSET UNITYSDK_OFFSET(0x162F6080)

inline static constexpr unsigned int Class_2_25A644897493E247_TypeDefinitionIndex = 68256;

class Class_2_25A644897493E247 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::GameEntity* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A644897493E247__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A644897493E247__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_25A644897493E247_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A644897493E247_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A644897493E247_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_25A644897493E247__ONTICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_614288621F812149()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A644897493E247_METHOD_2_614288621F812149_OFFSET))(this);
	}
};
