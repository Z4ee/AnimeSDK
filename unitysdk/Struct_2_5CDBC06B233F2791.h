#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_5CDBC06B233F2791_METHOD_2_70B5B012520A2797_OFFSET UNITYSDK_OFFSET(0x2DE5040)

inline static constexpr unsigned int Struct_2_5CDBC06B233F2791_TypeDefinitionIndex = 57825;

struct alignas(8) Struct_2_5CDBC06B233F2791
{
	::System::Boolean AIABGNPIEJP; // 0x10
	::System::Boolean EKGDOELGLFK; // 0x11
	::RPG::Client::TextID CIDCEJCGOGB; // 0x18
	::RPG::Client::TextID AGOHEFBOPNO; // 0x28
	::RPG::Client::TextID IGKJBKKDNEM; // 0x38
	::System::String* COIHAMIJMFH; // 0x48
	::System::String* BPDKDMHNGKD; // 0x50
	::RPG::Client::TextID OHLBMAGECPM; // 0x58
	::RPG::Client::TextID EAGPLPPMPPB; // 0x68
	::System::Nullable_1<::System::Boolean> EJFIGKPDPBJ; // 0x78
	::System::Nullable_1<::RPG::GameCore::AttackDamageType> PAIECOBACKB; // 0x7C
	::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x88
	::Il2CppArray<::RPG::GameCore::FixPoint>* GBLMPIFJBPI; // 0x90
	::System::Nullable_1<::RPG::GameCore::FixPoint> JFFOACKMGNC; // 0x98
	::System::Nullable_1<::RPG::GameCore::FixPoint> BIFBJDKMKDL; // 0xA8
	::System::Nullable_1<::RPG::GameCore::FixPoint> OAPBIIMFPEJ; // 0xB8
	::System::Nullable_1<::RPG::GameCore::FixPoint> OIEBGFOEOKG; // 0xC8
	::System::Nullable_1<::RPG::GameCore::FixPoint> EBDJIBKABGA; // 0xD8
	::System::Nullable_1<::RPG::GameCore::FixPoint> DCFJMKBJDPD; // 0xE8
	::System::Nullable_1<::RPG::GameCore::FixPoint> ANLGHKHLFDE; // 0xF8

	::System::Void Method_2_70B5B012520A2797(::Struct_2_5CDBC06B233F2791 a1, ::Struct_2_5CDBC06B233F2791 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5CDBC06B233F2791, ::Struct_2_5CDBC06B233F2791))((::PBYTE)hIl2Cpp + STRUCT_2_5CDBC06B233F2791_METHOD_2_70B5B012520A2797_OFFSET))(this, a1, a2);
	}
};
