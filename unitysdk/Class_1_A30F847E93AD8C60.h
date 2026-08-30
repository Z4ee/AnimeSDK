#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_C744AC1912B4057C;

#define CLASS_1_A30F847E93AD8C60_METHOD_1_70FC9BA3400F387E_OFFSET UNITYSDK_OFFSET(0x1CC099F0)
#define CLASS_1_A30F847E93AD8C60__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC09F00)

inline static constexpr unsigned int Class_1_A30F847E93AD8C60_TypeDefinitionIndex = 14779;

class Class_1_A30F847E93AD8C60 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* EODCEHDOAEB; // 0x10
	::Class_1_C744AC1912B4057C* DOKMKLJDCEK; // 0x18
	::Il2CppArray<::System::UInt32>* GLNDIILFKBN; // 0x20
	::RPG::GameCore::RogueTournDifficultyType GOEDJMNFALN; // 0x28
	::System::UInt32 JJKLIJNFIBB; // 0x2C
	::RPG::GameCore::RogueTournMode HILINOJPLGA; // 0x30
	::System::UInt32 NKLFPMKHELN; // 0x34
	::System::UInt32 BEOFPCAACEP; // 0x38
	::System::UInt32 GNIFODGCPAA; // 0x3C
	::System::UInt32 FOMEIPIEGII; // 0x40
	::System::UInt32 ILPNADCAIBL; // 0x44
	::RPG::GameCore::RogueTournAreaGroupID PJGJLMIODBD; // 0x48
	::RPG::Client::TextID PIKODOAKLGE; // 0x50
	::System::UInt32 IMNLCDOMMOG; // 0x60
	::System::Boolean PCBLHKODOMG; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A30F847E93AD8C60__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_70FC9BA3400F387E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A30F847E93AD8C60*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A30F847E93AD8C60*&))((::PBYTE)hIl2Cpp + CLASS_1_A30F847E93AD8C60_METHOD_1_70FC9BA3400F387E_OFFSET))(a1, a2);
	}
};
