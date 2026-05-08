#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_EB409772687773A2_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define STRUCT_2_EB409772687773A2_METHOD_2_2EE05F20EDBCC8FC_OFFSET UNITYSDK_OFFSET(0x77B3F0)
#define STRUCT_2_EB409772687773A2_METHOD_2_413472096512A213_OFFSET UNITYSDK_OFFSET(0x2E1000)
#define STRUCT_2_EB409772687773A2_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x77B3D0)
#define STRUCT_2_EB409772687773A2__CTOR_OFFSET UNITYSDK_OFFSET(0x2E1100)

inline static constexpr unsigned int Struct_2_EB409772687773A2_TypeDefinitionIndex = 77697;

struct alignas(8) Struct_2_EB409772687773A2
{
	::MoleMole::EntityHandle Field_2_0; // 0x10

	::System::Void _ctor(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + STRUCT_2_EB409772687773A2__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EB409772687773A2_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EB409772687773A2_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	/*
	::Foundation::Unreal::FTransform Method_2_2EE05F20EDBCC8FC()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EB409772687773A2_METHOD_2_2EE05F20EDBCC8FC_OFFSET))(this);
	}
	*/

	::MoleMole::EntityHandle Method_2_413472096512A213()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EB409772687773A2_METHOD_2_413472096512A213_OFFSET))(this);
	}
};
