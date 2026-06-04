#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"

#define CLASS_3_E18180F65B6B5FF4__CTOR_OFFSET UNITYSDK_OFFSET(0xAD5F530)

inline static constexpr unsigned int Class_3_E18180F65B6B5FF4_TypeDefinitionIndex = 69081;

class Class_3_E18180F65B6B5FF4 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::System::Int32>
{
public:
	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E18180F65B6B5FF4__CTOR_OFFSET))(this, a1);
	}
};
