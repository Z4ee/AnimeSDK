#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E5F3FA10EC56B9A0_1.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::Client { class MonoWavingBlockControl; }
namespace RPG::GameCore { class PropComponent; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_FD219B01AC2352E5_METHOD_2_61D35C2C9121EF4D_OFFSET UNITYSDK_OFFSET(0xD164480)
#define CLASS_2_FD219B01AC2352E5_METHOD_2_8BFD1173A5F6D827_OFFSET UNITYSDK_OFFSET(0xD164320)
#define CLASS_2_FD219B01AC2352E5_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD1642E0)
#define CLASS_2_FD219B01AC2352E5_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xD164550)
#define CLASS_2_FD219B01AC2352E5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD1642A0)
#define CLASS_2_FD219B01AC2352E5__CTOR_OFFSET UNITYSDK_OFFSET(0xD164290)

inline static constexpr unsigned int Class_2_FD219B01AC2352E5_TypeDefinitionIndex = 53595;

class Class_2_FD219B01AC2352E5 : public ::Class_1_E5F3FA10EC56B9A0_1
{
public:
	::RPG::Client::MonoWavingBlockControl* Field_2_0; // 0x18
	::System::Nullable_1<::System::Int32> Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_2_FD219B01AC2352E5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD219B01AC2352E5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD219B01AC2352E5_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_8BFD1173A5F6D827(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_FD219B01AC2352E5_METHOD_2_8BFD1173A5F6D827_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD219B01AC2352E5_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_61D35C2C9121EF4D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FD219B01AC2352E5_METHOD_2_61D35C2C9121EF4D_OFFSET))(this, a1);
	}
};
