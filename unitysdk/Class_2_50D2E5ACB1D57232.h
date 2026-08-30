#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_E6C4BA4C142021B7;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class AdvNpcFollowPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_50D2E5ACB1D57232_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1892F480)
#define CLASS_2_50D2E5ACB1D57232_METHOD_2_13004921ED9C7319_OFFSET UNITYSDK_OFFSET(0x1892F760)
#define CLASS_2_50D2E5ACB1D57232_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x1892FB00)
#define CLASS_2_50D2E5ACB1D57232_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1892F910)
#define CLASS_2_50D2E5ACB1D57232_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1892F640)
#define CLASS_2_50D2E5ACB1D57232_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1892FA20)
#define CLASS_2_50D2E5ACB1D57232_TICK_OFFSET UNITYSDK_OFFSET(0x1892F560)
#define CLASS_2_50D2E5ACB1D57232__CTOR_OFFSET UNITYSDK_OFFSET(0x1892EF90)

inline static constexpr unsigned int Class_2_50D2E5ACB1D57232_TypeDefinitionIndex = 52696;

class Class_2_50D2E5ACB1D57232 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvNpcFollowPlayer* JKJPFJALGKO; // 0x18
	::RPG::Client::CameraBlendCurve* HDJMDBIPKOE; // 0x20
	::Class_1_E6C4BA4C142021B7* FLANFCPMIPC; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcFollowPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcFollowPlayer*))((::PBYTE)hIl2Cpp + CLASS_2_50D2E5ACB1D57232__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50D2E5ACB1D57232_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_50D2E5ACB1D57232_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50D2E5ACB1D57232_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50D2E5ACB1D57232_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_13004921ED9C7319(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_50D2E5ACB1D57232_METHOD_2_13004921ED9C7319_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50D2E5ACB1D57232_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50D2E5ACB1D57232_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}
};
