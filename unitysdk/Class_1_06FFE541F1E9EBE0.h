#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_867B6CE75953535A;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame { template <typename T> class GraphNavigationService_1; }

#define CLASS_1_06FFE541F1E9EBE0_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12AA22E0)
#define CLASS_1_06FFE541F1E9EBE0_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12AA22A0)
#define CLASS_1_06FFE541F1E9EBE0_METHOD_1_092A26D9B5D0973E_OFFSET UNITYSDK_OFFSET(0x12AA2940)
#define CLASS_1_06FFE541F1E9EBE0_METHOD_1_549A9F3E965DAAB7_OFFSET UNITYSDK_OFFSET(0x12AA2C40)
#define CLASS_1_06FFE541F1E9EBE0_METHOD_1_B2E925F1DEA6483A_OFFSET UNITYSDK_OFFSET(0x12AA3EE0)
#define CLASS_1_06FFE541F1E9EBE0_METHOD_1_C38B481DC668A4BA_OFFSET UNITYSDK_OFFSET(0x12AA43E0)
#define CLASS_1_06FFE541F1E9EBE0_METHOD_1_F6894B5C37816912_OFFSET UNITYSDK_OFFSET(0x12AA44E0)
#define CLASS_1_06FFE541F1E9EBE0_METHOD_1_F859CE601F919CF3_OFFSET UNITYSDK_OFFSET(0x12AA2630)
#define CLASS_1_06FFE541F1E9EBE0__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA2210)

inline static constexpr unsigned int Class_1_06FFE541F1E9EBE0_TypeDefinitionIndex = 70973;

class Class_1_06FFE541F1E9EBE0 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::GraphNavigationService_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Field_1_2; // 0x10
	::Class_1_867B6CE75953535A* Field_1_1; // 0x18
	::Class_3_F4528A5C0F861AF2* Field_1_3; // 0x20
	::System::Single Field_1_0; // 0x28

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_06FFE541F1E9EBE0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06FFE541F1E9EBE0_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06FFE541F1E9EBE0_EXECUTE_OFFSET))(this);
	}

	::System::Boolean Method_1_B2E925F1DEA6483A(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_06FFE541F1E9EBE0_METHOD_1_B2E925F1DEA6483A_OFFSET))(this, a1);
	}

	::System::Void Method_1_F859CE601F919CF3(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_06FFE541F1E9EBE0_METHOD_1_F859CE601F919CF3_OFFSET))(this, a1);
	}

	::System::Void Method_1_549A9F3E965DAAB7(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_06FFE541F1E9EBE0_METHOD_1_549A9F3E965DAAB7_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6894B5C37816912(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_06FFE541F1E9EBE0_METHOD_1_F6894B5C37816912_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C38B481DC668A4BA(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06FFE541F1E9EBE0_METHOD_1_C38B481DC668A4BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_092A26D9B5D0973E(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_06FFE541F1E9EBE0_METHOD_1_092A26D9B5D0973E_OFFSET))(this, a1);
	}
};
