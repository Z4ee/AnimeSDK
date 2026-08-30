#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_ED45DA203CB525FD_1_GET_ADDSCORE_OFFSET UNITYSDK_OFFSET(0x15917C40)
#define CLASS_1_ED45DA203CB525FD_1_GET_SOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15917C90)
#define CLASS_1_ED45DA203CB525FD_1_GET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x15917C60)
#define CLASS_1_ED45DA203CB525FD_1_SET_ADDSCORE_OFFSET UNITYSDK_OFFSET(0x15917C50)
#define CLASS_1_ED45DA203CB525FD_1_SET_SOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15917CA0)
#define CLASS_1_ED45DA203CB525FD_1_SET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x15917C80)
#define CLASS_1_ED45DA203CB525FD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15917C20)

inline static constexpr unsigned int Class_1_ED45DA203CB525FD_1_TypeDefinitionIndex = 79947;

class Class_1_ED45DA203CB525FD_1 : public ::System::Object
{
public:
	::System::UInt32 _AddScore_k__BackingField; // 0x10
	::System::Int32 _SourceRuntimeID_k__BackingField; // 0x14
	::UnityEngine::Vector3 _WorldPosition_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ED45DA203CB525FD_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_AddScore()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED45DA203CB525FD_1_GET_ADDSCORE_OFFSET))(this);
	}

	::System::Void set_AddScore(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED45DA203CB525FD_1_SET_ADDSCORE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_WorldPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED45DA203CB525FD_1_GET_WORLDPOSITION_OFFSET))(this);
	}

	::System::Void set_WorldPosition(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ED45DA203CB525FD_1_SET_WORLDPOSITION_OFFSET))(this, a1);
	}

	::System::Int32 get_SourceRuntimeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED45DA203CB525FD_1_GET_SOURCERUNTIMEID_OFFSET))(this);
	}

	::System::Void set_SourceRuntimeID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ED45DA203CB525FD_1_SET_SOURCERUNTIMEID_OFFSET))(this, a1);
	}
};
