#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_0AD6129525BF5F86;
class Class_1_3CE169FA8918702D;
class Class_3_BD2B13F4D2829CC3;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DD4FCF4882A0E280_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118652E0)
#define CLASS_2_DD4FCF4882A0E280_METHOD_2_1FC86D2BFE10815E_OFFSET UNITYSDK_OFFSET(0x11865700)
#define CLASS_2_DD4FCF4882A0E280_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11865500)
#define CLASS_2_DD4FCF4882A0E280_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x11865050)
#define CLASS_2_DD4FCF4882A0E280_METHOD_2_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x118648A0)
#define CLASS_2_DD4FCF4882A0E280_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x11864D60)
#define CLASS_2_DD4FCF4882A0E280_METHOD_2_AFD66A83AEF40D90_OFFSET UNITYSDK_OFFSET(0x118657F0)
#define CLASS_2_DD4FCF4882A0E280_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11865340)
#define CLASS_2_DD4FCF4882A0E280_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11865660)
#define CLASS_2_DD4FCF4882A0E280_TICK_OFFSET UNITYSDK_OFFSET(0x11865580)
#define CLASS_2_DD4FCF4882A0E280__CTOR_OFFSET UNITYSDK_OFFSET(0x11864500)

inline static constexpr unsigned int Class_2_DD4FCF4882A0E280_TypeDefinitionIndex = 49690;

class Class_2_DD4FCF4882A0E280 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::Class_3_E21F6DE9B7FA4D05*>* Field_2_10; // 0x18
	::Class_3_BD2B13F4D2829CC3* Field_2_0; // 0x20
	::Class_1_3CE169FA8918702D* Field_2_2; // 0x28
	::Il2CppArray<::Class_1_0AD6129525BF5F86*>* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Field_2_11; // 0x38
	::RPG::GameCore::TaskContext* Field_2_1; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::ProjectileData*>* Field_2_12; // 0x48
	::RPG::GameCore::GameEntity* Field_2_8; // 0x50
	::RPG::GameCore::GameEntity* Field_2_9; // 0x58
	::RPG::GameCore::FixPoint Field_2_5; // 0x60
	::System::Int32 Field_2_6; // 0x68
	::System::Int32 Field_2_7; // 0x6C
	::System::Int32 Field_2_4; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BD2B13F4D2829CC3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BD2B13F4D2829CC3*))((::PBYTE)hIl2Cpp + CLASS_2_DD4FCF4882A0E280__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD4FCF4882A0E280_METHOD_2_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD4FCF4882A0E280_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD4FCF4882A0E280_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD4FCF4882A0E280_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD4FCF4882A0E280_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DD4FCF4882A0E280_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD4FCF4882A0E280_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_2_1FC86D2BFE10815E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD4FCF4882A0E280_METHOD_2_1FC86D2BFE10815E_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD4FCF4882A0E280_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_AFD66A83AEF40D90(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_DD4FCF4882A0E280_METHOD_2_AFD66A83AEF40D90_OFFSET))(this, a1);
	}
};
