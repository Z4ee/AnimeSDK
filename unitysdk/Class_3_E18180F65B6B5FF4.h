#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"

#define CLASS_3_E18180F65B6B5FF4__CTOR_OFFSET UNITYSDK_OFFSET(0x116203F0)

inline static constexpr unsigned int Class_3_E18180F65B6B5FF4_TypeDefinitionIndex = 73899;

class Class_3_E18180F65B6B5FF4 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::System::Int32>
{
public:
	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E18180F65B6B5FF4__CTOR_OFFSET))(this, a1);
	}
};
