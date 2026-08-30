#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameFormation; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_D0B444B4BF78D71B_METHOD_1_1556630FFC19017B_OFFSET UNITYSDK_OFFSET(0x16414660)
#define CLASS_1_D0B444B4BF78D71B_METHOD_1_2E4023B8132A1293_OFFSET UNITYSDK_OFFSET(0x16414940)
#define CLASS_1_D0B444B4BF78D71B_METHOD_1_E0D3A4DC9D13D6EC_1_OFFSET UNITYSDK_OFFSET(0x164152F0)
#define CLASS_1_D0B444B4BF78D71B_METHOD_1_E0D3A4DC9D13D6EC_OFFSET UNITYSDK_OFFSET(0x16414B70)
#define CLASS_1_D0B444B4BF78D71B_METHOD_1_E4C530D5BD3D10DC_OFFSET UNITYSDK_OFFSET(0x164150E0)

inline static constexpr unsigned int Class_1_D0B444B4BF78D71B_TypeDefinitionIndex = 64681;

class Class_1_D0B444B4BF78D71B : public ::System::Object
{
public:
	static ::System::Void Method_1_1556630FFC19017B(::RPG::Client::GridFightGameFormation* a1, ::System::IO::BinaryReader* a2, ::System::IO::MemoryStream* a3)
	{
		return ((::System::Void(*)(::RPG::Client::GridFightGameFormation*, ::System::IO::BinaryReader*, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + CLASS_1_D0B444B4BF78D71B_METHOD_1_1556630FFC19017B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2E4023B8132A1293(::System::IO::BinaryWriter* a1, ::RPG::Client::GridFightGameFormation* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + CLASS_1_D0B444B4BF78D71B_METHOD_1_2E4023B8132A1293_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E0D3A4DC9D13D6EC(::RPG::Client::GridFightGameFormation* a1, ::System::IO::BinaryReader* a2, ::System::IO::MemoryStream* a3)
	{
		return ((::System::Void(*)(::RPG::Client::GridFightGameFormation*, ::System::IO::BinaryReader*, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + CLASS_1_D0B444B4BF78D71B_METHOD_1_E0D3A4DC9D13D6EC_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E4C530D5BD3D10DC(::System::IO::BinaryWriter* a1, ::RPG::Client::GridFightGameFormation* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + CLASS_1_D0B444B4BF78D71B_METHOD_1_E4C530D5BD3D10DC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E0D3A4DC9D13D6EC_1(::RPG::Client::GridFightGameFormation* a1, ::System::IO::BinaryReader* a2, ::System::IO::MemoryStream* a3)
	{
		return ((::System::Void(*)(::RPG::Client::GridFightGameFormation*, ::System::IO::BinaryReader*, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + CLASS_1_D0B444B4BF78D71B_METHOD_1_E0D3A4DC9D13D6EC_1_OFFSET))(a1, a2, a3);
	}
};
