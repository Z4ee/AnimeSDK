#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_87C8F594A107C13B.h"

class Class_1_43BD383C98B4C0C5_117;
class Class_1_8A072C6DB11EDA5C;
class Class_3_795ECCED069014FF;
class Class_3_AD202E4D78C8CB31;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6E710363339B5A3E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138C5AF0)
#define CLASS_3_6E710363339B5A3E_METHOD_3_A4A0FF530379294E_OFFSET UNITYSDK_OFFSET(0x138C6780)
#define CLASS_3_6E710363339B5A3E_METHOD_3_FE95444BEF90AE14_1_OFFSET UNITYSDK_OFFSET(0x138C6B60)
#define CLASS_3_6E710363339B5A3E_METHOD_3_FE95444BEF90AE14_OFFSET UNITYSDK_OFFSET(0x138C6520)
#define CLASS_3_6E710363339B5A3E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x138C5B30)
#define CLASS_3_6E710363339B5A3E__CTOR_OFFSET UNITYSDK_OFFSET(0x138C5A70)
#define CLASS_3_6E710363339B5A3E___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138C6DC0)

inline static constexpr unsigned int Class_3_6E710363339B5A3E_TypeDefinitionIndex = 50306;

class Class_3_6E710363339B5A3E : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_AD202E4D78C8CB31*>
{
public:
	::Class_1_8A072C6DB11EDA5C* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_AD202E4D78C8CB31* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_AD202E4D78C8CB31*))((::PBYTE)hIl2Cpp + CLASS_3_6E710363339B5A3E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E710363339B5A3E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E710363339B5A3E_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_A4A0FF530379294E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_87C8F594A107C13B& a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::Struct_2_87C8F594A107C13B&))((::PBYTE)hIl2Cpp + CLASS_3_6E710363339B5A3E_METHOD_3_A4A0FF530379294E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_FE95444BEF90AE14(::Class_3_795ECCED069014FF* a1, ::Class_3_795ECCED069014FF* a2, ::Class_1_43BD383C98B4C0C5_117* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_795ECCED069014FF*, ::Class_3_795ECCED069014FF*, ::Class_1_43BD383C98B4C0C5_117*))((::PBYTE)hIl2Cpp + CLASS_3_6E710363339B5A3E_METHOD_3_FE95444BEF90AE14_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_FE95444BEF90AE14_1(::Class_3_795ECCED069014FF* a1, ::Class_3_795ECCED069014FF* a2, ::Class_1_43BD383C98B4C0C5_117* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_795ECCED069014FF*, ::Class_3_795ECCED069014FF*, ::Class_1_43BD383C98B4C0C5_117*))((::PBYTE)hIl2Cpp + CLASS_3_6E710363339B5A3E_METHOD_3_FE95444BEF90AE14_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E710363339B5A3E___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
