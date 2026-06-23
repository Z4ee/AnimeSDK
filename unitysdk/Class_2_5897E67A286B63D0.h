#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_79D7C06928D0E5CA.h"
#include "unitysdk/Dest/Math/Segment3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_5897E67A286B63D0_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x12D47980)
#define CLASS_2_5897E67A286B63D0_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x12D47940)
#define CLASS_2_5897E67A286B63D0_METHOD_2_C7B4639D2BEA9180_OFFSET UNITYSDK_OFFSET(0x12D47500)
#define CLASS_2_5897E67A286B63D0_METHOD_2_DC3859225A3139CB_OFFSET UNITYSDK_OFFSET(0x12D47950)
#define CLASS_2_5897E67A286B63D0_METHOD_2_F653AD19A0AF5B0E_OFFSET UNITYSDK_OFFSET(0x12D472C0)
#define CLASS_2_5897E67A286B63D0__CTOR_OFFSET UNITYSDK_OFFSET(0x12D47240)

inline static constexpr unsigned int Class_2_5897E67A286B63D0_TypeDefinitionIndex = 74344;

class Class_2_5897E67A286B63D0 : public ::Class_1_79D7C06928D0E5CA
{
public:
	::System::Single Field_2_1; // 0x40
	::System::Single Field_2_0; // 0x44

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5897E67A286B63D0__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_2_F653AD19A0AF5B0E(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5897E67A286B63D0_METHOD_2_F653AD19A0AF5B0E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C7B4639D2BEA9180(::Dest::Math::Segment3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Dest::Math::Segment3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_5897E67A286B63D0_METHOD_2_C7B4639D2BEA9180_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5897E67A286B63D0_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Boolean Method_2_DC3859225A3139CB(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5897E67A286B63D0_METHOD_2_DC3859225A3139CB_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5897E67A286B63D0_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}
};
