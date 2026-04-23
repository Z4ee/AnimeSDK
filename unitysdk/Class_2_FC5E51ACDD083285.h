#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class MazePuzzleOrigamiRow; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropStateChangeByCollectionMirrorTakenDiff; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FC5E51ACDD083285_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7C0350)
#define CLASS_2_FC5E51ACDD083285_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB7C09C0)
#define CLASS_2_FC5E51ACDD083285_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0xB7C03E0)
#define CLASS_2_FC5E51ACDD083285_METHOD_2_805B6D82357700A5_OFFSET UNITYSDK_OFFSET(0xB7C0BC0)
#define CLASS_2_FC5E51ACDD083285_METHOD_2_8735BEB44E240044_OFFSET UNITYSDK_OFFSET(0xB7C0DD0)
#define CLASS_2_FC5E51ACDD083285_METHOD_2_99A5FB3E84B54B3D_OFFSET UNITYSDK_OFFSET(0xB7C0EC0)
#define CLASS_2_FC5E51ACDD083285_METHOD_2_B7394B9A2DB91F61_OFFSET UNITYSDK_OFFSET(0xB7C0920)
#define CLASS_2_FC5E51ACDD083285_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xB7C0A20)
#define CLASS_2_FC5E51ACDD083285_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7C04D0)
#define CLASS_2_FC5E51ACDD083285_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7C0B10)
#define CLASS_2_FC5E51ACDD083285_TICK_OFFSET UNITYSDK_OFFSET(0xB7C0B60)
#define CLASS_2_FC5E51ACDD083285__CTOR_OFFSET UNITYSDK_OFFSET(0xB7C0340)

inline static constexpr unsigned int Class_2_FC5E51ACDD083285_TypeDefinitionIndex = 49316;

class Class_2_FC5E51ACDD083285 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MazePuzzleOrigamiColonyRow* Field_2_3; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::Client::MapPropDef*, ::System::Int32>>* Field_2_5; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::RPG::GameCore::WaitPropStateChangeByCollectionMirrorTakenDiff* Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>* Field_2_4; // 0x38
	::System::Boolean Field_2_2; // 0x40
	::System::UInt32 Field_2_6; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropStateChangeByCollectionMirrorTakenDiff* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropStateChangeByCollectionMirrorTakenDiff*))((::PBYTE)hIl2Cpp + CLASS_2_FC5E51ACDD083285__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5E51ACDD083285_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5E51ACDD083285_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5E51ACDD083285_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC5E51ACDD083285_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B7394B9A2DB91F61(::RPG::GameCore::MazePuzzleOrigamiRow* a1, ::RPG::Client::MapDef* a2, ::RPG::Client::MapPropDef*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*, ::RPG::Client::MapDef*, ::RPG::Client::MapPropDef*&))((::PBYTE)hIl2Cpp + CLASS_2_FC5E51ACDD083285_METHOD_2_B7394B9A2DB91F61_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5E51ACDD083285_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5E51ACDD083285_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5E51ACDD083285_METHOD_2_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_2_805B6D82357700A5(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_FC5E51ACDD083285_METHOD_2_805B6D82357700A5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_99A5FB3E84B54B3D(::RPG::GameCore::MazePuzzleOrigamiRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*))((::PBYTE)hIl2Cpp + CLASS_2_FC5E51ACDD083285_METHOD_2_99A5FB3E84B54B3D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8735BEB44E240044(::RPG::GameCore::MazePuzzleOrigamiRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*))((::PBYTE)hIl2Cpp + CLASS_2_FC5E51ACDD083285_METHOD_2_8735BEB44E240044_OFFSET))(this, a1);
	}
};
