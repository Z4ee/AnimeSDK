#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PriorityQueue_1.h"

#define CLASS_2_DACB2D3D3C70FB8C_METHOD_2_D5724FADEFB6F945_OFFSET UNITYSDK_OFFSET(0x8C0D2B0)
#define CLASS_2_DACB2D3D3C70FB8C__CTOR_OFFSET UNITYSDK_OFFSET(0x8C0D2A0)

inline static constexpr unsigned int Class_2_DACB2D3D3C70FB8C_TypeDefinitionIndex = 47722;

class Class_2_DACB2D3D3C70FB8C : public ::RPG::GameCore::PriorityQueue_1<::System::Boolean>
{
public:
	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DACB2D3D3C70FB8C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_D5724FADEFB6F945(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DACB2D3D3C70FB8C_METHOD_2_D5724FADEFB6F945_OFFSET))(this, a1, a2);
	}
};
