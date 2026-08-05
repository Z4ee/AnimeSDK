#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_3_ECE1B0DC22E3457B_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13B984C0)
#define CLASS_3_ECE1B0DC22E3457B_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13B98620)
#define CLASS_3_ECE1B0DC22E3457B_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x13B985A0)
#define CLASS_3_ECE1B0DC22E3457B_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13B98470)
#define CLASS_3_ECE1B0DC22E3457B__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B98510)
#define CLASS_3_ECE1B0DC22E3457B__CTOR_OFFSET UNITYSDK_OFFSET(0x13B98590)

inline static constexpr unsigned int Class_3_ECE1B0DC22E3457B_TypeDefinitionIndex = 73819;

class Class_3_ECE1B0DC22E3457B : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_0 = 0x25; // 0x0
	::System::Action_1<::UnityEngine::Vector3>* Field_3_1; // 0x48
	::System::Int32 Field_3_2; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_ECE1B0DC22E3457B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECE1B0DC22E3457B__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECE1B0DC22E3457B_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECE1B0DC22E3457B_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_ECE1B0DC22E3457B* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_ECE1B0DC22E3457B*(*)())((::PBYTE)hIl2Cpp + CLASS_3_ECE1B0DC22E3457B_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECE1B0DC22E3457B_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
