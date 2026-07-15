#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C75AD08534337EB1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B17EA0)
#define CLASS_1_C75AD08534337EB1_METHOD_1_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x15B18110)
#define CLASS_1_C75AD08534337EB1_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x15B18030)
#define CLASS_1_C75AD08534337EB1_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15B17FD0)
#define CLASS_1_C75AD08534337EB1_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x15B181C0)
#define CLASS_1_C75AD08534337EB1_METHOD_1_612818BB8762C356_OFFSET UNITYSDK_OFFSET(0x15B17770)
#define CLASS_1_C75AD08534337EB1_METHOD_1_AE4C84ECD003A863_OFFSET UNITYSDK_OFFSET(0x15B17A70)
#define CLASS_1_C75AD08534337EB1_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15B180D0)
#define CLASS_1_C75AD08534337EB1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15B18090)
#define CLASS_1_C75AD08534337EB1__CTOR_OFFSET UNITYSDK_OFFSET(0x15B18290)

inline static constexpr unsigned int Class_1_C75AD08534337EB1_TypeDefinitionIndex = 54914;

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

	::System::Void Method_1_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_C75AD08534337EB1_METHOD_1_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C75AD08534337EB1_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}
};
