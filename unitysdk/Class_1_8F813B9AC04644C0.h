#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0814C3CA012BD292.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_631;
namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class GridFightEquipTrackData; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_1_8F813B9AC04644C0_METHOD_1_C8A6FF4588BDE7EF_OFFSET UNITYSDK_OFFSET(0xB8CAB10)
#define CLASS_1_8F813B9AC04644C0_METHOD_1_DE0E0378CC590BC2_OFFSET UNITYSDK_OFFSET(0xB8CADD0)
#define CLASS_1_8F813B9AC04644C0_METHOD_1_E8BD1904BA824712_OFFSET UNITYSDK_OFFSET(0xB8CAD70)
#define CLASS_1_8F813B9AC04644C0__CTOR_OFFSET UNITYSDK_OFFSET(0xB8CAE40)

inline static constexpr unsigned int Class_1_8F813B9AC04644C0_TypeDefinitionIndex = 52723;

class Class_1_8F813B9AC04644C0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F813B9AC04644C0__CTOR_OFFSET))(this);
	}

	::RPG::Client::GridFightRole* Method_1_C8A6FF4588BDE7EF(::System::UInt32 a1, ::Class_0_16E4307DCC419505_631* a2)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_631*))((::PBYTE)hIl2Cpp + CLASS_1_8F813B9AC04644C0_METHOD_1_C8A6FF4588BDE7EF_OFFSET))(this, a1, a2);
	}

	::RPG::Client::GridFightEquipTrack* Method_1_E8BD1904BA824712(::System::UInt32 a1, ::RPG::Client::GridFightEquipTrackData* a2)
	{
		return ((::RPG::Client::GridFightEquipTrack*(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightEquipTrackData*))((::PBYTE)hIl2Cpp + CLASS_1_8F813B9AC04644C0_METHOD_1_E8BD1904BA824712_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_DE0E0378CC590BC2(::System::UInt32 a1, ::Class_0_16E4307DCC419505_631* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_631*))((::PBYTE)hIl2Cpp + CLASS_1_8F813B9AC04644C0_METHOD_1_DE0E0378CC590BC2_OFFSET))(this, a1, a2);
	}
};
