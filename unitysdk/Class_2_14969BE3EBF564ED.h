#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_79D7C06928D0E5CA.h"
#include "unitysdk/Dest/Math/Segment3.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_14969BE3EBF564ED_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x12F1D2A0)
#define CLASS_2_14969BE3EBF564ED_METHOD_2_7946CC10B6A7A024_OFFSET UNITYSDK_OFFSET(0x12F1CF70)
#define CLASS_2_14969BE3EBF564ED_METHOD_2_8017F95EBA72019F_OFFSET UNITYSDK_OFFSET(0x12F1D080)
#define CLASS_2_14969BE3EBF564ED_METHOD_2_DC3859225A3139CB_OFFSET UNITYSDK_OFFSET(0x12F1D2B0)
#define CLASS_2_14969BE3EBF564ED__CTOR_OFFSET UNITYSDK_OFFSET(0x12F1CF00)

inline static constexpr unsigned int Class_2_14969BE3EBF564ED_TypeDefinitionIndex = 73707;

class Class_2_14969BE3EBF564ED : public ::Class_1_79D7C06928D0E5CA
{
public:
	::System::Single Field_2_0; // 0x40

	::System::Void _ctor(::System::Single a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_14969BE3EBF564ED__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_7946CC10B6A7A024(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_14969BE3EBF564ED_METHOD_2_7946CC10B6A7A024_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_8017F95EBA72019F(::Dest::Math::Segment3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Dest::Math::Segment3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_14969BE3EBF564ED_METHOD_2_8017F95EBA72019F_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14969BE3EBF564ED_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Boolean Method_2_DC3859225A3139CB(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_14969BE3EBF564ED_METHOD_2_DC3859225A3139CB_OFFSET))(this, a1, a2);
	}
};
