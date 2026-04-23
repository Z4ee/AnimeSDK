#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"

#define CLASS_3_5A10464B73D74440_INTERP_OFFSET UNITYSDK_OFFSET(0x123A8E60)
#define CLASS_3_5A10464B73D74440__CTOR_OFFSET UNITYSDK_OFFSET(0x123A8DF0)

inline static constexpr unsigned int Class_3_5A10464B73D74440_TypeDefinitionIndex = 68107;

class Class_3_5A10464B73D74440 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::System::Int32>
{
public:
	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5A10464B73D74440__CTOR_OFFSET))(this, a1);
	}

	::System::Void Interp(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5A10464B73D74440_INTERP_OFFSET))(this, a1, a2, a3);
	}
};
