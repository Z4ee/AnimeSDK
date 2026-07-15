#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class FiveDimMapSurfaceConfig; }

#define CLASS_1_0DE34E2ADC1B5120_GET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x171E1760)
#define CLASS_1_0DE34E2ADC1B5120_GET__POSITIONINFACE_OFFSET UNITYSDK_OFFSET(0x171E1780)
#define CLASS_1_0DE34E2ADC1B5120_METHOD_1_4EC38B34F0D76336_OFFSET UNITYSDK_OFFSET(0x171E16E0)
#define CLASS_1_0DE34E2ADC1B5120_METHOD_1_941CB5DD620FAC6A_OFFSET UNITYSDK_OFFSET(0x171E17A0)
#define CLASS_1_0DE34E2ADC1B5120_SET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x171E1770)
#define CLASS_1_0DE34E2ADC1B5120_SET__POSITIONINFACE_OFFSET UNITYSDK_OFFSET(0x171E1790)
#define CLASS_1_0DE34E2ADC1B5120__CTOR_OFFSET UNITYSDK_OFFSET(0x171E1750)

inline static constexpr unsigned int Class_1_0DE34E2ADC1B5120_TypeDefinitionIndex = 71231;

class Class_1_0DE34E2ADC1B5120 : public ::System::Object
{
public:
	::RPG::MVector2 __PositionInFace_k__BackingField; // 0x10
	::System::UInt32 _SurfaceID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE34E2ADC1B5120__CTOR_OFFSET))(this);
	}

	static ::Class_1_0DE34E2ADC1B5120* Method_1_4EC38B34F0D76336(::RPG::GameCore::FiveDimMapSurfaceConfig* a1)
	{
		return ((::Class_1_0DE34E2ADC1B5120*(*)(::RPG::GameCore::FiveDimMapSurfaceConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0DE34E2ADC1B5120_METHOD_1_4EC38B34F0D76336_OFFSET))(a1);
	}

	::System::UInt32 get_SurfaceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE34E2ADC1B5120_GET_SURFACEID_OFFSET))(this);
	}

	::System::Void set_SurfaceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0DE34E2ADC1B5120_SET_SURFACEID_OFFSET))(this, a1);
	}

	::RPG::MVector2 get__PositionInFace()
	{
		return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE34E2ADC1B5120_GET__POSITIONINFACE_OFFSET))(this);
	}

	::System::Void set__PositionInFace(::RPG::MVector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_0DE34E2ADC1B5120_SET__POSITIONINFACE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_941CB5DD620FAC6A(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Int16 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Int16, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_0DE34E2ADC1B5120_METHOD_1_941CB5DD620FAC6A_OFFSET))(this, a1, a2, a3, a4);
	}
};
