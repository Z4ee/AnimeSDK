#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BD66305CA8ADC196_Struct_2_6175284CFEF73564_3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_BD66305CA8ADC196_METHOD_1_11CB16F8CE9F0364_OFFSET UNITYSDK_OFFSET(0x1195DA20)
#define CLASS_1_BD66305CA8ADC196_METHOD_1_71647BB4C33349D2_OFFSET UNITYSDK_OFFSET(0x1195DB10)
#define CLASS_1_BD66305CA8ADC196_METHOD_1_AAABB086BCE4614F_OFFSET UNITYSDK_OFFSET(0x1195DCC0)
#define CLASS_1_BD66305CA8ADC196_METHOD_1_F02E18BD9B69916F_OFFSET UNITYSDK_OFFSET(0x1195DD70)

inline static constexpr unsigned int Class_1_BD66305CA8ADC196_TypeDefinitionIndex = 43657;

class Class_1_BD66305CA8ADC196 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_11CB16F8CE9F0364(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BD66305CA8ADC196_METHOD_1_11CB16F8CE9F0364_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_AAABB086BCE4614F(::System::Single& a1, ::Class_1_BD66305CA8ADC196_Struct_2_6175284CFEF73564_3& a2)
	{
		return ((::System::Single(*)(::System::Single&, ::Class_1_BD66305CA8ADC196_Struct_2_6175284CFEF73564_3&))((::PBYTE)hIl2Cpp + CLASS_1_BD66305CA8ADC196_METHOD_1_AAABB086BCE4614F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F02E18BD9B69916F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single& a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_BD66305CA8ADC196_METHOD_1_F02E18BD9B69916F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_71647BB4C33349D2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BD66305CA8ADC196_METHOD_1_71647BB4C33349D2_OFFSET))(a1, a2, a3);
	}
};
