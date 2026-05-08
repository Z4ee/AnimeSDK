#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_73AAEC1CA60F1E02.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_BAACDA6D506721D1_METHOD_2_51BAC440AEEC47A9_OFFSET UNITYSDK_OFFSET(0x14612280)
#define CLASS_2_BAACDA6D506721D1_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x14612460)
#define CLASS_2_BAACDA6D506721D1_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0x146123F0)
#define CLASS_2_BAACDA6D506721D1__CTOR_OFFSET UNITYSDK_OFFSET(0x14612260)

inline static constexpr unsigned int Class_2_BAACDA6D506721D1_TypeDefinitionIndex = 41544;

class Class_2_BAACDA6D506721D1 : public ::Class_1_73AAEC1CA60F1E02<::UnityEngine::Vector3>
{
public:
	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_51BAC440AEEC47A9(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_METHOD_2_51BAC440AEEC47A9_OFFSET))(this, a1);
	}

	::System::Single Method_2_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_METHOD_2_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}
};
