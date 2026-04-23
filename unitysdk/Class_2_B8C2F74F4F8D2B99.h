#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CE416D6C625B711.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCameraStateType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9C16BAF1B182B319;
namespace UnityEngine { class Transform; }

#define CLASS_2_B8C2F74F4F8D2B99_METHOD_2_0EC9AEC5DC94C3DD_OFFSET UNITYSDK_OFFSET(0x11761150)
#define CLASS_2_B8C2F74F4F8D2B99_METHOD_2_2607E225A39E6739_OFFSET UNITYSDK_OFFSET(0x117610C0)
#define CLASS_2_B8C2F74F4F8D2B99_METHOD_2_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0x11761370)
#define CLASS_2_B8C2F74F4F8D2B99_METHOD_2_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x117615E0)
#define CLASS_2_B8C2F74F4F8D2B99_METHOD_2_454E8F757D28D098_OFFSET UNITYSDK_OFFSET(0x11761240)
#define CLASS_2_B8C2F74F4F8D2B99_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x117614A0)
#define CLASS_2_B8C2F74F4F8D2B99_METHOD_2_8CBF8D144D25F0F9_OFFSET UNITYSDK_OFFSET(0x117610D0)
#define CLASS_2_B8C2F74F4F8D2B99_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11761780)
#define CLASS_2_B8C2F74F4F8D2B99_METHOD_2_E1B59F840D6D6F1F_OFFSET UNITYSDK_OFFSET(0x117613E0)
#define CLASS_2_B8C2F74F4F8D2B99__CTOR_OFFSET UNITYSDK_OFFSET(0x11761140)

inline static constexpr unsigned int Class_2_B8C2F74F4F8D2B99_TypeDefinitionIndex = 71519;

class Class_2_B8C2F74F4F8D2B99 : public ::Class_1_9CE416D6C625B711
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	::UnityEngine::Transform* Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x34

	::System::Void _ctor(::Class_1_9C16BAF1B182B319* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C16BAF1B182B319*))((::PBYTE)hIl2Cpp + CLASS_2_B8C2F74F4F8D2B99__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType Method_2_2607E225A39E6739()
	{
		return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C2F74F4F8D2B99_METHOD_2_2607E225A39E6739_OFFSET))(this);
	}

	static ::Class_2_B8C2F74F4F8D2B99* Method_2_8CBF8D144D25F0F9(::Class_1_9C16BAF1B182B319* a1)
	{
		return ((::Class_2_B8C2F74F4F8D2B99*(*)(::Class_1_9C16BAF1B182B319*))((::PBYTE)hIl2Cpp + CLASS_2_B8C2F74F4F8D2B99_METHOD_2_8CBF8D144D25F0F9_OFFSET))(a1);
	}

	::System::Void Method_2_0EC9AEC5DC94C3DD(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B8C2F74F4F8D2B99_METHOD_2_0EC9AEC5DC94C3DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_454E8F757D28D098(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B8C2F74F4F8D2B99_METHOD_2_454E8F757D28D098_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2E47F09A457E7E05(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B8C2F74F4F8D2B99_METHOD_2_2E47F09A457E7E05_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1B59F840D6D6F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C2F74F4F8D2B99_METHOD_2_E1B59F840D6D6F1F_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C2F74F4F8D2B99_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C2F74F4F8D2B99_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C2F74F4F8D2B99_METHOD_2_3845AD389B8E1E47_OFFSET))(this);
	}
};
