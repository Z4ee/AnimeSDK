#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_C744AC1912B4057C;

#define CLASS_1_B553C21756B27967_1_METHOD_1_95FA3048B3F79507_OFFSET UNITYSDK_OFFSET(0x1D1CF270)
#define CLASS_1_B553C21756B27967_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CF760)

inline static constexpr unsigned int Class_1_B553C21756B27967_1_TypeDefinitionIndex = 14944;

class Class_1_B553C21756B27967_1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* EODCEHDOAEB; // 0x10
	::Il2CppArray<::System::UInt32>* GLNDIILFKBN; // 0x18
	::Class_1_C744AC1912B4057C* DOKMKLJDCEK; // 0x20
	::System::UInt32 BEOFPCAACEP; // 0x28
	::RPG::GameCore::RogueTournMode HILINOJPLGA; // 0x2C
	::RPG::Client::TextID PIKODOAKLGE; // 0x30
	::System::UInt32 FOMEIPIEGII; // 0x40
	::System::UInt32 JJKLIJNFIBB; // 0x44
	::RPG::GameCore::RogueTournAreaGroupID PJGJLMIODBD; // 0x48
	::System::UInt32 GNIFODGCPAA; // 0x4C
	::System::UInt32 NKLFPMKHELN; // 0x50
	::System::UInt32 IMNLCDOMMOG; // 0x54
	::System::Boolean PCBLHKODOMG; // 0x58
	::System::UInt32 ILPNADCAIBL; // 0x5C
	::RPG::GameCore::RogueTournDifficultyType GOEDJMNFALN; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B553C21756B27967_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_95FA3048B3F79507(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B553C21756B27967_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B553C21756B27967_1*&))((::PBYTE)hIl2Cpp + CLASS_1_B553C21756B27967_1_METHOD_1_95FA3048B3F79507_OFFSET))(a1, a2);
	}
};
