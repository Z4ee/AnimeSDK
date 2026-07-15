#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_ED45DA203CB525FD_GET_ADDFEVER_OFFSET UNITYSDK_OFFSET(0x16DD5EF0)
#define CLASS_1_ED45DA203CB525FD_GET_SOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x16DD5F40)
#define CLASS_1_ED45DA203CB525FD_GET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x16DD5F10)
#define CLASS_1_ED45DA203CB525FD_SET_ADDFEVER_OFFSET UNITYSDK_OFFSET(0x16DD5F00)
#define CLASS_1_ED45DA203CB525FD_SET_SOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x16DD5F50)
#define CLASS_1_ED45DA203CB525FD_SET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x16DD5F30)
#define CLASS_1_ED45DA203CB525FD__CTOR_OFFSET UNITYSDK_OFFSET(0x16DD5ED0)

inline static constexpr unsigned int Class_1_ED45DA203CB525FD_TypeDefinitionIndex = 76307;

class Class_1_ED45DA203CB525FD : public ::System::Object
{
public:
	::System::Int32 _SourceRuntimeID_k__BackingField; // 0x10
	::System::UInt32 _AddFever_k__BackingField; // 0x14
	::UnityEngine::Vector3 _WorldPosition_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ED45DA203CB525FD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_AddFever()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED45DA203CB525FD_GET_ADDFEVER_OFFSET))(this);
	}

	::System::Void set_AddFever(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED45DA203CB525FD_SET_ADDFEVER_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_WorldPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED45DA203CB525FD_GET_WORLDPOSITION_OFFSET))(this);
	}

	::System::Void set_WorldPosition(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ED45DA203CB525FD_SET_WORLDPOSITION_OFFSET))(this, a1);
	}

	::System::Int32 get_SourceRuntimeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED45DA203CB525FD_GET_SOURCERUNTIMEID_OFFSET))(this);
	}

	::System::Void set_SourceRuntimeID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ED45DA203CB525FD_SET_SOURCERUNTIMEID_OFFSET))(this, a1);
	}
};
