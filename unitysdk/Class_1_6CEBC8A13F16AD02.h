#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCameraStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7EE2012A32ADD2BD;
class Class_1_FD22E62838D3F859;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6CEBC8A13F16AD02_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x16FBCFA0)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_00B431E92611B38F_OFFSET UNITYSDK_OFFSET(0x16FBD840)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x16FBD120)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_2934A10C60B9CEF6_OFFSET UNITYSDK_OFFSET(0x16FBE410)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_2BA3DB2BD2587D96_OFFSET UNITYSDK_OFFSET(0x16FBE030)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_489E3BF8986E4AAB_OFFSET UNITYSDK_OFFSET(0x16FBDB70)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_67371558409C6CA3_1_OFFSET UNITYSDK_OFFSET(0x16FBE170)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_67371558409C6CA3_OFFSET UNITYSDK_OFFSET(0x16FBDA70)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0x16FBE3C0)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_9D3B7E6CD440EB6C_OFFSET UNITYSDK_OFFSET(0x16FBDCA0)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x16FBD9F0)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_ADD9F2F58CCC8CE7_OFFSET UNITYSDK_OFFSET(0x16FBD760)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x16FBD6A0)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_B1656F1864A82557_OFFSET UNITYSDK_OFFSET(0x16FBDD90)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_CE8002D857FA5D0D_OFFSET UNITYSDK_OFFSET(0x16FBE270)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_E20CC85C24B616C1_OFFSET UNITYSDK_OFFSET(0x16FBDF10)
#define CLASS_1_6CEBC8A13F16AD02_METHOD_1_FA606D8166F0B8FE_OFFSET UNITYSDK_OFFSET(0x16FBCFB0)
#define CLASS_1_6CEBC8A13F16AD02__CTOR_OFFSET UNITYSDK_OFFSET(0x16FBD050)

inline static constexpr unsigned int Class_1_6CEBC8A13F16AD02_TypeDefinitionIndex = 74071;

class Class_1_6CEBC8A13F16AD02 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType, ::Class_1_FD22E62838D3F859*>* Field_1_0; // 0x10
	::RPG::Common::StateMachine_1<::Class_1_7EE2012A32ADD2BD*>* Field_1_1; // 0x18
	::Class_3_FA020C2C23A72B3F* _Services_k__BackingField; // 0x20

	::System::Void _ctor(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02__CTOR_OFFSET))(this, a1);
	}

	::Class_3_FA020C2C23A72B3F* get_Services()
	{
		return ((::Class_3_FA020C2C23A72B3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_GET_SERVICES_OFFSET))(this);
	}

	static ::Class_1_6CEBC8A13F16AD02* Method_1_FA606D8166F0B8FE(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::Class_1_6CEBC8A13F16AD02*(*)(::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_FA606D8166F0B8FE_OFFSET))(a1);
	}

	::System::Void Method_1_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::Class_1_FD22E62838D3F859* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_FD22E62838D3F859*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_AECF8BEC293ED42A_OFFSET))(this);
	}

	::Class_1_FD22E62838D3F859* Method_1_ADD9F2F58CCC8CE7(::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType a1)
	{
		return ((::Class_1_FD22E62838D3F859*(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_ADD9F2F58CCC8CE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_00B431E92611B38F(::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_00B431E92611B38F_OFFSET))(this, a1);
	}

	::System::Void Method_1_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_1_67371558409C6CA3(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_67371558409C6CA3_OFFSET))(this, a1);
	}

	::System::Void Method_1_489E3BF8986E4AAB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_489E3BF8986E4AAB_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D3B7E6CD440EB6C(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_9D3B7E6CD440EB6C_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1656F1864A82557(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_B1656F1864A82557_OFFSET))(this, a1);
	}

	::System::Void Method_1_E20CC85C24B616C1(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_E20CC85C24B616C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2BA3DB2BD2587D96(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_2BA3DB2BD2587D96_OFFSET))(this, a1);
	}

	::System::Void Method_1_67371558409C6CA3_1(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_67371558409C6CA3_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE8002D857FA5D0D(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_CE8002D857FA5D0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_7778ABE51AFDB516()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_7778ABE51AFDB516_OFFSET))(this);
	}

	::System::Void Method_1_2934A10C60B9CEF6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6CEBC8A13F16AD02_METHOD_1_2934A10C60B9CEF6_OFFSET))(this, a1);
	}
};
