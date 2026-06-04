#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0814C3CA012BD292.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_773;
namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class GridFightEquipTrackData; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_1_229B74AAA4ABB8C3_METHOD_1_104FFD794943BFEC_OFFSET UNITYSDK_OFFSET(0xACA2580)
#define CLASS_1_229B74AAA4ABB8C3_METHOD_1_DD2F0A34B0AD9840_OFFSET UNITYSDK_OFFSET(0xACA2880)
#define CLASS_1_229B74AAA4ABB8C3_METHOD_1_DE0E0378CC590BC2_OFFSET UNITYSDK_OFFSET(0xACA28E0)
#define CLASS_1_229B74AAA4ABB8C3__CTOR_OFFSET UNITYSDK_OFFSET(0xACA2950)

inline static constexpr unsigned int Class_1_229B74AAA4ABB8C3_TypeDefinitionIndex = 60715;

class Class_1_229B74AAA4ABB8C3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_229B74AAA4ABB8C3__CTOR_OFFSET))(this);
	}

	::RPG::Client::GridFightRole* Method_1_104FFD794943BFEC(::System::UInt32 a1, ::Class_0_16E4307DCC419505_773* a2)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + CLASS_1_229B74AAA4ABB8C3_METHOD_1_104FFD794943BFEC_OFFSET))(this, a1, a2);
	}

	::RPG::Client::GridFightEquipTrack* Method_1_DD2F0A34B0AD9840(::System::UInt32 a1, ::RPG::Client::GridFightEquipTrackData* a2)
	{
		return ((::RPG::Client::GridFightEquipTrack*(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightEquipTrackData*))((::PBYTE)hIl2Cpp + CLASS_1_229B74AAA4ABB8C3_METHOD_1_DD2F0A34B0AD9840_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_DE0E0378CC590BC2(::System::UInt32 a1, ::Class_0_16E4307DCC419505_773* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + CLASS_1_229B74AAA4ABB8C3_METHOD_1_DE0E0378CC590BC2_OFFSET))(this, a1, a2);
	}
};
