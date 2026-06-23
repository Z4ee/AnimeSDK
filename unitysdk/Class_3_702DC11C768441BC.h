#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class MovableFollowTrait; }

#define CLASS_3_702DC11C768441BC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12B537F0)
#define CLASS_3_702DC11C768441BC_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12B539C0)
#define CLASS_3_702DC11C768441BC_METHOD_3_C442A231A3F4A351_OFFSET UNITYSDK_OFFSET(0x12B538D0)
#define CLASS_3_702DC11C768441BC_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x12B53940)
#define CLASS_3_702DC11C768441BC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12B536B0)
#define CLASS_3_702DC11C768441BC__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B53840)
#define CLASS_3_702DC11C768441BC__CTOR_OFFSET UNITYSDK_OFFSET(0x12B538C0)

inline static constexpr unsigned int Class_3_702DC11C768441BC_TypeDefinitionIndex = 78799;

class Class_3_702DC11C768441BC : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0xB9; // 0x0
	::MoleMole::EntityHandle Field_3_1; // 0x48
	::System::Boolean Field_3_2; // 0x58
	::UnityEngine::Vector3 Field_3_3; // 0x5C
	::System::UInt32 Field_3_0; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_702DC11C768441BC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_702DC11C768441BC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_702DC11C768441BC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_702DC11C768441BC_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_C442A231A3F4A351(::MoleMole::Config::MovableFollowTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MovableFollowTrait*))((::PBYTE)hIl2Cpp + CLASS_3_702DC11C768441BC_METHOD_3_C442A231A3F4A351_OFFSET))(this, a1);
	}

	static ::Class_3_702DC11C768441BC* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_702DC11C768441BC*(*)())((::PBYTE)hIl2Cpp + CLASS_3_702DC11C768441BC_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_702DC11C768441BC_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
