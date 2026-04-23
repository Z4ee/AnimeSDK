#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameFormation; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_00E78361E3E23682_METHOD_1_3B2090E557E3010A_OFFSET UNITYSDK_OFFSET(0xE011D60)
#define CLASS_1_00E78361E3E23682_METHOD_1_4BEC8C6208D8E976_OFFSET UNITYSDK_OFFSET(0xE011E80)
#define CLASS_1_00E78361E3E23682_METHOD_1_8F3F1032BB04FF67_OFFSET UNITYSDK_OFFSET(0xE012390)
#define CLASS_1_00E78361E3E23682_METHOD_1_C4CB2F2D3A729D3F_OFFSET UNITYSDK_OFFSET(0xE0122B0)
#define CLASS_1_00E78361E3E23682_METHOD_1_F382C0A7FF35A70D_OFFSET UNITYSDK_OFFSET(0xE011B20)

inline static constexpr unsigned int Class_1_00E78361E3E23682_TypeDefinitionIndex = 59471;

class Class_1_00E78361E3E23682 : public ::System::Object
{
public:
	static ::System::Void Method_1_F382C0A7FF35A70D(::RPG::Client::GridFightGameFormation* a1, ::System::IO::BinaryReader* a2, ::System::IO::MemoryStream* a3)
	{
		return ((::System::Void(*)(::RPG::Client::GridFightGameFormation*, ::System::IO::BinaryReader*, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + CLASS_1_00E78361E3E23682_METHOD_1_F382C0A7FF35A70D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3B2090E557E3010A(::System::IO::BinaryWriter* a1, ::RPG::Client::GridFightGameFormation* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + CLASS_1_00E78361E3E23682_METHOD_1_3B2090E557E3010A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4BEC8C6208D8E976(::RPG::Client::GridFightGameFormation* a1, ::System::IO::BinaryReader* a2, ::System::IO::MemoryStream* a3)
	{
		return ((::System::Void(*)(::RPG::Client::GridFightGameFormation*, ::System::IO::BinaryReader*, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + CLASS_1_00E78361E3E23682_METHOD_1_4BEC8C6208D8E976_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C4CB2F2D3A729D3F(::System::IO::BinaryWriter* a1, ::RPG::Client::GridFightGameFormation* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + CLASS_1_00E78361E3E23682_METHOD_1_C4CB2F2D3A729D3F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F3F1032BB04FF67(::RPG::Client::GridFightGameFormation* a1, ::System::IO::BinaryReader* a2, ::System::IO::MemoryStream* a3)
	{
		return ((::System::Void(*)(::RPG::Client::GridFightGameFormation*, ::System::IO::BinaryReader*, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + CLASS_1_00E78361E3E23682_METHOD_1_8F3F1032BB04FF67_OFFSET))(a1, a2, a3);
	}
};
