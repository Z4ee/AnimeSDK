#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define CLASS_1_3AF00C13A1E953CE_METHOD_1_20118C817025B572_OFFSET UNITYSDK_OFFSET(0x13520160)
#define CLASS_1_3AF00C13A1E953CE_METHOD_1_93010FB55B6D7ACE_OFFSET UNITYSDK_OFFSET(0x135200A0)
#define CLASS_1_3AF00C13A1E953CE_METHOD_1_94D3970D26FF95B7_OFFSET UNITYSDK_OFFSET(0x1351FFB0)
#define CLASS_1_3AF00C13A1E953CE_METHOD_1_DA4A45B63F207DED_OFFSET UNITYSDK_OFFSET(0x135203D0)
#define CLASS_1_3AF00C13A1E953CE_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x13520450)
#define CLASS_1_3AF00C13A1E953CE__CTOR_OFFSET UNITYSDK_OFFSET(0x13520090)

inline static constexpr unsigned int Class_1_3AF00C13A1E953CE_TypeDefinitionIndex = 71828;

class Class_1_3AF00C13A1E953CE : public ::System::Object
{
public:
	::UnityEngine::RectTransform* CIJHJOEEHMI; // 0x10
	::UnityEngine::Vector2 AIGECPNJGNG; // 0x18
	::UnityEngine::Vector2 JDGLOAPBEBK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AF00C13A1E953CE__CTOR_OFFSET))(this);
	}

	static ::Class_1_3AF00C13A1E953CE* Method_1_94D3970D26FF95B7(::UnityEngine::RectTransform* a1)
	{
		return ((::Class_1_3AF00C13A1E953CE*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_3AF00C13A1E953CE_METHOD_1_94D3970D26FF95B7_OFFSET))(a1);
	}

	::UnityEngine::Vector2 Method_1_93010FB55B6D7ACE(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3AF00C13A1E953CE_METHOD_1_93010FB55B6D7ACE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_20118C817025B572(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3AF00C13A1E953CE_METHOD_1_20118C817025B572_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_1_DA4A45B63F207DED(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3AF00C13A1E953CE_METHOD_1_DA4A45B63F207DED_OFFSET))(a1, a2);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AF00C13A1E953CE_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}
};
