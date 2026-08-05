#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_3B42BC0680587011;
class Class_3_707412604A129938;
class Class_3_883E597458B91E77;
class Class_3_AA6DF3A878195D3F;
class Class_3_C93CC3D2C2AC4067;
class Class_3_F33F9DC5F4112336;
namespace FluffyUnderware::Curvy { class CurvySpline; }

#define CLASS_1_6FA11764625E9C62_METHOD_1_0687FB570DDAE288_OFFSET UNITYSDK_OFFSET(0x17C61740)
#define CLASS_1_6FA11764625E9C62_METHOD_1_3704ECF71F842B58_OFFSET UNITYSDK_OFFSET(0x17C615B0)
#define CLASS_1_6FA11764625E9C62_METHOD_1_B14D2CC9D08BAA81_OFFSET UNITYSDK_OFFSET(0x17C61590)
#define CLASS_1_6FA11764625E9C62_METHOD_1_C6400D0A6978E3C8_OFFSET UNITYSDK_OFFSET(0x17C61340)
#define CLASS_1_6FA11764625E9C62_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17C61580)
#define CLASS_1_6FA11764625E9C62_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17C615A0)
#define CLASS_1_6FA11764625E9C62__CTOR_OFFSET UNITYSDK_OFFSET(0x17C612B0)

inline static constexpr unsigned int Class_1_6FA11764625E9C62_TypeDefinitionIndex = 87350;

class Class_1_6FA11764625E9C62 : public ::System::Object
{
public:
	::FluffyUnderware::Curvy::CurvySpline* Field_1_6; // 0x10
	::UnityEngine::Vector3 Field_1_8; // 0x18
	::System::Boolean Field_1_15; // 0x24
	::System::Boolean Field_1_1; // 0x25
	::System::Single Field_1_4; // 0x28
	::System::Single Field_1_11; // 0x2C
	::UnityEngine::Vector3 Field_1_7; // 0x30
	::System::Single Field_1_10; // 0x3C
	::UnityEngine::Vector3 Field_1_0; // 0x40
	::UnityEngine::Vector3 Field_1_9; // 0x4C
	::System::Single Field_1_5; // 0x58

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::FluffyUnderware::Curvy::CurvySpline* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6FA11764625E9C62__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6FA11764625E9C62_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::FluffyUnderware::Curvy::CurvySpline* Method_1_B14D2CC9D08BAA81()
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FA11764625E9C62_METHOD_1_B14D2CC9D08BAA81_OFFSET))(this);
	}

	::System::Void Method_1_C6400D0A6978E3C8(::FluffyUnderware::Curvy::CurvySpline* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + CLASS_1_6FA11764625E9C62_METHOD_1_C6400D0A6978E3C8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FA11764625E9C62_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_3704ECF71F842B58(::Class_3_707412604A129938* a1, ::Class_3_F33F9DC5F4112336* a2, ::Class_3_883E597458B91E77* a3, ::Class_3_C93CC3D2C2AC4067* a4, ::Class_3_3B42BC0680587011* a5, ::Class_3_AA6DF3A878195D3F* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_707412604A129938*, ::Class_3_F33F9DC5F4112336*, ::Class_3_883E597458B91E77*, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_3B42BC0680587011*, ::Class_3_AA6DF3A878195D3F*))((::PBYTE)hIl2Cpp + CLASS_1_6FA11764625E9C62_METHOD_1_3704ECF71F842B58_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_0687FB570DDAE288(::System::Single a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_1_6FA11764625E9C62_METHOD_1_0687FB570DDAE288_OFFSET))(this, a1, a2);
	}
};
