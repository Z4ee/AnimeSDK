#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A45A3A893E113CFD.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_2_15E317187C4E8254;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }

#define CLASS_3_BA2DE48154A3DA32_METHOD_3_1150E99F63F63834_OFFSET UNITYSDK_OFFSET(0xEA562E0)
#define CLASS_3_BA2DE48154A3DA32_METHOD_3_820C3AED5F4D97CF_OFFSET UNITYSDK_OFFSET(0xEA56160)
#define CLASS_3_BA2DE48154A3DA32_METHOD_3_962EC6B7FDEBE9B6_OFFSET UNITYSDK_OFFSET(0xEA563A0)
#define CLASS_3_BA2DE48154A3DA32_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xEA56440)
#define CLASS_3_BA2DE48154A3DA32__CTOR_OFFSET UNITYSDK_OFFSET(0xEA56560)
#define CLASS_3_BA2DE48154A3DA32___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xEA56570)

inline static constexpr unsigned int Class_3_BA2DE48154A3DA32_TypeDefinitionIndex = 63634;

class Class_3_BA2DE48154A3DA32 : public ::Class_2_A45A3A893E113CFD
{
public:
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* Field_3_0; // 0x20
	::System::String* Field_3_2; // 0x28
	::RPG::Client::TextID Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA2DE48154A3DA32__CTOR_OFFSET))(this);
	}

	static ::Class_3_BA2DE48154A3DA32* Method_3_820C3AED5F4D97CF(::Class_2_15E317187C4E8254* a1, ::System::String* a2)
	{
		return ((::Class_3_BA2DE48154A3DA32*(*)(::Class_2_15E317187C4E8254*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_BA2DE48154A3DA32_METHOD_3_820C3AED5F4D97CF_OFFSET))(a1, a2);
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

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA2DE48154A3DA32___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
