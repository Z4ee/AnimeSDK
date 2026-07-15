#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0814C3CA012BD292.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_804;
namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class GridFightEquipTrackData; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_1_229B74AAA4ABB8C3_METHOD_1_104FFD794943BFEC_OFFSET UNITYSDK_OFFSET(0x170798F0)
#define CLASS_1_229B74AAA4ABB8C3_METHOD_1_2FC4DBF736C8F4ED_OFFSET UNITYSDK_OFFSET(0x17079C90)
#define CLASS_1_229B74AAA4ABB8C3_METHOD_1_896D441B7CAC218B_OFFSET UNITYSDK_OFFSET(0x17079CF0)
#define CLASS_1_229B74AAA4ABB8C3__CTOR_OFFSET UNITYSDK_OFFSET(0x17079D90)

inline static constexpr unsigned int Class_1_229B74AAA4ABB8C3_TypeDefinitionIndex = 62007;

class Class_1_229B74AAA4ABB8C3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_229B74AAA4ABB8C3__CTOR_OFFSET))(this);
	}

	::RPG::Client::GridFightRole* Method_1_104FFD794943BFEC(::System::UInt32 a1, ::Class_0_16E4307DCC419505_804* a2)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_804*))((::PBYTE)hIl2Cpp + CLASS_1_229B74AAA4ABB8C3_METHOD_1_104FFD794943BFEC_OFFSET))(this, a1, a2);
	}

	::RPG::Client::GridFightEquipTrack* Method_1_2FC4DBF736C8F4ED(::System::UInt32 a1, ::RPG::Client::GridFightEquipTrackData* a2)
	{
		return ((::RPG::Client::GridFightEquipTrack*(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightEquipTrackData*))((::PBYTE)hIl2Cpp + CLASS_1_229B74AAA4ABB8C3_METHOD_1_2FC4DBF736C8F4ED_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_896D441B7CAC218B(::System::UInt32 a1, ::Class_0_16E4307DCC419505_804* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_804*))((::PBYTE)hIl2Cpp + CLASS_1_229B74AAA4ABB8C3_METHOD_1_896D441B7CAC218B_OFFSET))(this, a1, a2);
	}
};
