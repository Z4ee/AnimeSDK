#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCameraStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7EE2012A32ADD2BD;
class Class_1_9CE416D6C625B711;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_ACC8B3CFF7B7DF3E_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xE48B730)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_070CDFE40EEF0D41_OFFSET UNITYSDK_OFFSET(0xE48C990)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0xE48CAE0)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0xE48B8B0)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_40ABA0754D201FFB_1_OFFSET UNITYSDK_OFFSET(0xE48C890)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_40ABA0754D201FFB_OFFSET UNITYSDK_OFFSET(0xE48C190)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_41861BA50C7E4472_OFFSET UNITYSDK_OFFSET(0xE48C3C0)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_7887B50FDBA45D89_OFFSET UNITYSDK_OFFSET(0xE48BFD0)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_7B9D6F143086B23A_OFFSET UNITYSDK_OFFSET(0xE48C750)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xE48C110)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_ADD9F2F58CCC8CE7_OFFSET UNITYSDK_OFFSET(0xE48BEF0)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0xE48BE30)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_AF4FBA15DA18986D_OFFSET UNITYSDK_OFFSET(0xE48C4B0)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_B2684BD6EB9B0789_OFFSET UNITYSDK_OFFSET(0xE48C290)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_BDCD66B3BEF9A24C_OFFSET UNITYSDK_OFFSET(0xE48CB30)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_CB538DB86AA4C0FB_OFFSET UNITYSDK_OFFSET(0xE48C630)
#define CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_FA606D8166F0B8FE_OFFSET UNITYSDK_OFFSET(0xE48B740)
#define CLASS_1_ACC8B3CFF7B7DF3E__CTOR_OFFSET UNITYSDK_OFFSET(0xE48B7E0)

inline static constexpr unsigned int Class_1_ACC8B3CFF7B7DF3E_TypeDefinitionIndex = 72546;

class Class_1_ACC8B3CFF7B7DF3E : public ::System::Object
{
public:
	::RPG::Common::StateMachine_1<::Class_1_7EE2012A32ADD2BD*>* Field_1_0; // 0x10
	::Class_3_FA020C2C23A72B3F* _Services_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType, ::Class_1_9CE416D6C625B711*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E__CTOR_OFFSET))(this, a1);
	}

	::Class_3_FA020C2C23A72B3F* get_Services()
	{
		return ((::Class_3_FA020C2C23A72B3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_GET_SERVICES_OFFSET))(this);
	}

	static ::Class_1_ACC8B3CFF7B7DF3E* Method_1_FA606D8166F0B8FE(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::Class_1_ACC8B3CFF7B7DF3E*(*)(::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_FA606D8166F0B8FE_OFFSET))(a1);
	}

	::System::Void Method_1_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::Class_1_9CE416D6C625B711* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_9CE416D6C625B711*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_AECF8BEC293ED42A_OFFSET))(this);
	}

	::Class_1_9CE416D6C625B711* Method_1_ADD9F2F58CCC8CE7(::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType a1)
	{
		return ((::Class_1_9CE416D6C625B711*(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_ADD9F2F58CCC8CE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7887B50FDBA45D89(::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_7887B50FDBA45D89_OFFSET))(this, a1);
	}

	::System::Void Method_1_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_1_40ABA0754D201FFB(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_40ABA0754D201FFB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2684BD6EB9B0789(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_B2684BD6EB9B0789_OFFSET))(this, a1);
	}

	::System::Void Method_1_41861BA50C7E4472(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_41861BA50C7E4472_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF4FBA15DA18986D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_AF4FBA15DA18986D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB538DB86AA4C0FB(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_CB538DB86AA4C0FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7B9D6F143086B23A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_7B9D6F143086B23A_OFFSET))(this, a1);
	}

	::System::Void Method_1_40ABA0754D201FFB_1(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_40ABA0754D201FFB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_070CDFE40EEF0D41(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_070CDFE40EEF0D41_OFFSET))(this, a1);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_BDCD66B3BEF9A24C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ACC8B3CFF7B7DF3E_METHOD_1_BDCD66B3BEF9A24C_OFFSET))(this, a1);
	}
};
