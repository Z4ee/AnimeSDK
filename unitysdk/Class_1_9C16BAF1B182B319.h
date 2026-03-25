#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCameraStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_044382BF73D8EA3B;
class Class_1_9CE416D6C625B711;
class Class_3_626F93E2306641CC;
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_9C16BAF1B182B319_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x114D7100)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_03FA7A9F83642355_OFFSET UNITYSDK_OFFSET(0x114D8060)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_043AEF5D7DD905FE_OFFSET UNITYSDK_OFFSET(0x114D7CD0)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_0C3B990E221D70A4_OFFSET UNITYSDK_OFFSET(0x114D8540)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x114D84F0)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x114D7280)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_232446979582FED2_OFFSET UNITYSDK_OFFSET(0x114D7EF0)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_41861BA50C7E4472_1_OFFSET UNITYSDK_OFFSET(0x114D82C0)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_41861BA50C7E4472_OFFSET UNITYSDK_OFFSET(0x114D7BE0)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_7887B50FDBA45D89_OFFSET UNITYSDK_OFFSET(0x114D7A10)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_841DA79CB8CC15A6_OFFSET UNITYSDK_OFFSET(0x114D7E00)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x114D7B60)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_ADD9F2F58CCC8CE7_OFFSET UNITYSDK_OFFSET(0x114D7920)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_AEDD27C5E1F99995_OFFSET UNITYSDK_OFFSET(0x114D8180)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x114D7870)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_DD45CF69B4176C18_OFFSET UNITYSDK_OFFSET(0x114D83B0)
#define CLASS_1_9C16BAF1B182B319_METHOD_1_FA606D8166F0B8FE_OFFSET UNITYSDK_OFFSET(0x114D7110)
#define CLASS_1_9C16BAF1B182B319__CTOR_OFFSET UNITYSDK_OFFSET(0x114D71B0)

inline static constexpr unsigned int Class_1_9C16BAF1B182B319_TypeDefinitionIndex = 63484;

class Class_1_9C16BAF1B182B319 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType, ::Class_1_9CE416D6C625B711*>* Field_1_0; // 0x10
	::Class_3_626F93E2306641CC* _Services_k__BackingField; // 0x18
	::RPG::Common::StateMachine_1<::Class_1_044382BF73D8EA3B*>* Field_1_1; // 0x20

	::System::Void _ctor(::Class_3_626F93E2306641CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319__CTOR_OFFSET))(this, a1);
	}

	::Class_3_626F93E2306641CC* get_Services()
	{
		return ((::Class_3_626F93E2306641CC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_GET_SERVICES_OFFSET))(this);
	}

	static ::Class_1_9C16BAF1B182B319* Method_1_FA606D8166F0B8FE(::Class_3_626F93E2306641CC* a1)
	{
		return ((::Class_1_9C16BAF1B182B319*(*)(::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_FA606D8166F0B8FE_OFFSET))(a1);
	}

	::System::Void Method_1_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::Class_1_9CE416D6C625B711* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_9CE416D6C625B711*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_B64C60973842FE45_OFFSET))(this);
	}

	::Class_1_9CE416D6C625B711* Method_1_ADD9F2F58CCC8CE7(::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType a1)
	{
		return ((::Class_1_9CE416D6C625B711*(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_ADD9F2F58CCC8CE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7887B50FDBA45D89(::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_7887B50FDBA45D89_OFFSET))(this, a1);
	}

	::System::Void Method_1_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_1_41861BA50C7E4472(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_41861BA50C7E4472_OFFSET))(this, a1);
	}

	::System::Void Method_1_043AEF5D7DD905FE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_043AEF5D7DD905FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_841DA79CB8CC15A6(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_841DA79CB8CC15A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_232446979582FED2(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_232446979582FED2_OFFSET))(this, a1);
	}

	::System::Void Method_1_03FA7A9F83642355(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_03FA7A9F83642355_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AEDD27C5E1F99995(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_AEDD27C5E1F99995_OFFSET))(this, a1);
	}

	::System::Void Method_1_41861BA50C7E4472_1(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_41861BA50C7E4472_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD45CF69B4176C18(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_DD45CF69B4176C18_OFFSET))(this, a1);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_0C3B990E221D70A4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9C16BAF1B182B319_METHOD_1_0C3B990E221D70A4_OFFSET))(this, a1);
	}
};
