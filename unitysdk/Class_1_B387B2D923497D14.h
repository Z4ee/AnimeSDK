#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavSpaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_B387B2D923497D14_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xECC0570)
#define CLASS_1_B387B2D923497D14_METHOD_1_193E00E83BC3E6E8_OFFSET UNITYSDK_OFFSET(0xECC07E0)
#define CLASS_1_B387B2D923497D14_METHOD_1_89ACB8AE1462EE1C_OFFSET UNITYSDK_OFFSET(0xECC0730)
#define CLASS_1_B387B2D923497D14_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0xECC05A0)
#define CLASS_1_B387B2D923497D14_METHOD_1_CAAFCB6C62431A53_OFFSET UNITYSDK_OFFSET(0xECC0460)
#define CLASS_1_B387B2D923497D14_METHOD_1_DCD4FE66E9F289CC_OFFSET UNITYSDK_OFFSET(0xECC0620)
#define CLASS_1_B387B2D923497D14_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xECC0590)
#define CLASS_1_B387B2D923497D14__CTOR_OFFSET UNITYSDK_OFFSET(0xECC0720)

inline static constexpr unsigned int Class_1_B387B2D923497D14_TypeDefinitionIndex = 68814;

class Class_1_B387B2D923497D14 : public ::System::Object
{
public:
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B387B2D923497D14__CTOR_OFFSET))(this);
	}

	::RPG::Client::NavMap::NavSpaceType Method_1_CAAFCB6C62431A53()
	{
		return ((::RPG::Client::NavMap::NavSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B387B2D923497D14_METHOD_1_CAAFCB6C62431A53_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B387B2D923497D14_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B387B2D923497D14_SET_POSITION_OFFSET))(this, value);
	}

	static ::Class_1_B387B2D923497D14* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_B387B2D923497D14*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B387B2D923497D14_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	static ::System::Boolean Method_1_DCD4FE66E9F289CC(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_B387B2D923497D14_METHOD_1_DCD4FE66E9F289CC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_89ACB8AE1462EE1C(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_B387B2D923497D14_METHOD_1_89ACB8AE1462EE1C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_193E00E83BC3E6E8(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_B387B2D923497D14_METHOD_1_193E00E83BC3E6E8_OFFSET))(a1);
	}
};
