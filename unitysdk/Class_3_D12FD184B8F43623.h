#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E41AACD72A4FE1CF.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

class Class_1_075C34D03AFA1215_91;
namespace RPG::Client { class RogueTournHexInfo; }

#define CLASS_3_D12FD184B8F43623_METHOD_3_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x13866B50)
#define CLASS_3_D12FD184B8F43623__CTOR_OFFSET UNITYSDK_OFFSET(0x13866B40)

inline static constexpr unsigned int Class_3_D12FD184B8F43623_TypeDefinitionIndex = 62721;

class Class_3_D12FD184B8F43623 : public ::Class_2_E41AACD72A4FE1CF
{
public:
	::Class_1_075C34D03AFA1215_91* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::RogueTournHexInfo* a2, ::Class_1_075C34D03AFA1215_91* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::RogueTournHexInfo*, ::Class_1_075C34D03AFA1215_91*))((::PBYTE)hIl2Cpp + CLASS_3_D12FD184B8F43623__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D12FD184B8F43623_METHOD_3_8B848E52913DFCE9_OFFSET))(this);
	}
};
