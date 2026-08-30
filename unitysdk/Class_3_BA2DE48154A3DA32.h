#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_39.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_2_46FD925988407D1E;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }

#define CLASS_3_BA2DE48154A3DA32_METHOD_3_1150E99F63F63834_OFFSET UNITYSDK_OFFSET(0xBA37BD0)
#define CLASS_3_BA2DE48154A3DA32_METHOD_3_962EC6B7FDEBE9B6_OFFSET UNITYSDK_OFFSET(0xBA37C90)
#define CLASS_3_BA2DE48154A3DA32_METHOD_3_DA3A807456EA7C08_OFFSET UNITYSDK_OFFSET(0xBA37AC0)
#define CLASS_3_BA2DE48154A3DA32_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBA37D40)
#define CLASS_3_BA2DE48154A3DA32__CTOR_OFFSET UNITYSDK_OFFSET(0xBA37E60)

inline static constexpr unsigned int Class_3_BA2DE48154A3DA32_TypeDefinitionIndex = 77706;

class Class_3_BA2DE48154A3DA32 : public ::Class_2_A48F3719AA1CF200_39
{
public:
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* FOIJHDEGJMM; // 0x20
	::System::String* BLALBPMLDNL; // 0x28
	::RPG::Client::TextID HEAPCMDMANF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA2DE48154A3DA32__CTOR_OFFSET))(this);
	}

	static ::Class_3_BA2DE48154A3DA32* Method_3_DA3A807456EA7C08(::Class_2_46FD925988407D1E* a1, ::System::String* a2)
	{
		return ((::Class_3_BA2DE48154A3DA32*(*)(::Class_2_46FD925988407D1E*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_BA2DE48154A3DA32_METHOD_3_DA3A807456EA7C08_OFFSET))(a1, a2);
	}

	static ::Class_3_BA2DE48154A3DA32* Method_3_962EC6B7FDEBE9B6(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::RPG::Client::TextID a2)
	{
		return ((::Class_3_BA2DE48154A3DA32*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_3_BA2DE48154A3DA32_METHOD_3_962EC6B7FDEBE9B6_OFFSET))(a1, a2);
	}

	static ::Class_3_BA2DE48154A3DA32* Method_3_1150E99F63F63834(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::System::String* a2)
	{
		return ((::Class_3_BA2DE48154A3DA32*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_BA2DE48154A3DA32_METHOD_3_1150E99F63F63834_OFFSET))(a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA2DE48154A3DA32_ONEXECUTE_OFFSET))(this);
	}
};
