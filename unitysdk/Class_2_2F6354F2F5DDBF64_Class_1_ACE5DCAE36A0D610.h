#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapRotation/HideNpcState.h"
#include "unitysdk/RPG/Client/MapRotation/LogicVisibleState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610_CLEAR_OFFSET UNITYSDK_OFFSET(0x9B8A4F0)
#define CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610_METHOD_1_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x9B8A620)
#define CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x9B846E0)
#define CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x9B8A810)
#define CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610_METHOD_1_9E9F8437B1DEE0FC_OFFSET UNITYSDK_OFFSET(0x9B84790)
#define CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x9B8A9F0)
#define CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9B8A540)
#define CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610__CTOR_OFFSET UNITYSDK_OFFSET(0x9B8ABA0)

inline static constexpr unsigned int Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610_TypeDefinitionIndex = 55881;

class Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610 : public ::System::Object
{
public:
	::RPG::Client::MapNpcDef* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::String* Field_1_3; // 0x20
	::RPG::GameCore::GameEntity* Field_1_1; // 0x28
	::RPG::Client::MapRotation::LogicVisibleState Field_1_6; // 0x30
	::System::UInt32 Field_1_5; // 0x34
	::RPG::Client::MapRotation::HideNpcState Field_1_4; // 0x38
	::System::Int32 Field_1_8; // 0x3C
	::System::Boolean Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610_METHOD_1_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610_METHOD_1_A6544B958241856F_OFFSET))(this);
	}

	::System::Void Method_1_9E9F8437B1DEE0FC(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_CLASS_1_ACE5DCAE36A0D610_METHOD_1_9E9F8437B1DEE0FC_OFFSET))(this, a1, a2);
	}
};
