#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C75AD08534337EB1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2343E0)
#define CLASS_1_C75AD08534337EB1_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0xB234560)
#define CLASS_1_C75AD08534337EB1_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB234500)
#define CLASS_1_C75AD08534337EB1_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xB2346E0)
#define CLASS_1_C75AD08534337EB1_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xB234640)
#define CLASS_1_C75AD08534337EB1_METHOD_1_612818BB8762C356_OFFSET UNITYSDK_OFFSET(0xB233CB0)
#define CLASS_1_C75AD08534337EB1_METHOD_1_AE4C84ECD003A863_OFFSET UNITYSDK_OFFSET(0xB233FB0)
#define CLASS_1_C75AD08534337EB1_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB234600)
#define CLASS_1_C75AD08534337EB1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB2345C0)
#define CLASS_1_C75AD08534337EB1__CTOR_OFFSET UNITYSDK_OFFSET(0xB2347C0)

inline static constexpr unsigned int Class_1_C75AD08534337EB1_TypeDefinitionIndex = 52985;

class Class_1_C75AD08534337EB1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C75AD08534337EB1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_612818BB8762C356(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C75AD08534337EB1_METHOD_1_612818BB8762C356_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C75AD08534337EB1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C75AD08534337EB1_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C75AD08534337EB1_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C75AD08534337EB1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C75AD08534337EB1_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_AE4C84ECD003A863(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Transform* a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C75AD08534337EB1_METHOD_1_AE4C84ECD003A863_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_C75AD08534337EB1_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C75AD08534337EB1_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}
};
