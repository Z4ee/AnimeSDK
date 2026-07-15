#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_645;
class Class_2_5668A5419A7BEAB2;
namespace RPG::Client { class MonoControllableHand; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace System { class String; }

#define CLASS_1_F6641B177752AEFC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EFB200)
#define CLASS_1_F6641B177752AEFC_METHOD_1_0B4DE962875F5FFD_OFFSET UNITYSDK_OFFSET(0x16EFB190)
#define CLASS_1_F6641B177752AEFC_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x16EFB250)
#define CLASS_1_F6641B177752AEFC_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x16EFB2C0)
#define CLASS_1_F6641B177752AEFC_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x16EFB2D0)
#define CLASS_1_F6641B177752AEFC_METHOD_1_A5DE3ADF3D0115AD_OFFSET UNITYSDK_OFFSET(0x16EFB380)
#define CLASS_1_F6641B177752AEFC_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x16EFB2B0)
#define CLASS_1_F6641B177752AEFC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16EFB2A0)
#define CLASS_1_F6641B177752AEFC__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFB410)

inline static constexpr unsigned int Class_1_F6641B177752AEFC_TypeDefinitionIndex = 57593;

class Class_1_F6641B177752AEFC : public ::System::Object
{
public:
	::Class_2_5668A5419A7BEAB2* Field_1_0; // 0x10
	::RPG::Client::MonoControllableHand* Field_1_1; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6641B177752AEFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0B4DE962875F5FFD(::Class_2_5668A5419A7BEAB2* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::RPG::Client::MonoControllableHand* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5668A5419A7BEAB2*, ::RPG::GameCore::AdventureCharacterController*, ::RPG::Client::MonoControllableHand*))((::PBYTE)hIl2Cpp + CLASS_1_F6641B177752AEFC_METHOD_1_0B4DE962875F5FFD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6641B177752AEFC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F6641B177752AEFC_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6641B177752AEFC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6641B177752AEFC_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_645* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_645*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6641B177752AEFC_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6641B177752AEFC_METHOD_1_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_A5DE3ADF3D0115AD()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6641B177752AEFC_METHOD_1_A5DE3ADF3D0115AD_OFFSET))(this);
	}
};
