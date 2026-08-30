#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMoveConfig.h"

#define CLASS_3_339AB489A1D35729_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C764B30)
#define CLASS_3_339AB489A1D35729_METHOD_3_3463424610AB0786_OFFSET UNITYSDK_OFFSET(0x1C764AA0)
#define CLASS_3_339AB489A1D35729__CTOR_OFFSET UNITYSDK_OFFSET(0x1C764C50)

inline static constexpr unsigned int Class_3_339AB489A1D35729_TypeDefinitionIndex = 24570;

class Class_3_339AB489A1D35729 : public ::RPG::GameCore::FiveDimSplineMoveConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_339AB489A1D35729__CTOR_OFFSET))(this);
	}

	static ::Class_3_339AB489A1D35729* Method_3_3463424610AB0786(::System::Int32 a1)
	{
		return ((::Class_3_339AB489A1D35729*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_339AB489A1D35729_METHOD_3_3463424610AB0786_OFFSET))(a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_339AB489A1D35729_CLEAR_OFFSET))(this);
	}
};
