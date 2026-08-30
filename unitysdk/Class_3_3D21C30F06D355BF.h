#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_2_291F7DA21A504FC4;
class Class_4_E2E089E5A3E41E2A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3D21C30F06D355BF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A26A30)
#define CLASS_3_3D21C30F06D355BF_METHOD_3_92B219A5BB78D2BB_OFFSET UNITYSDK_OFFSET(0x17A26DB0)
#define CLASS_3_3D21C30F06D355BF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A26A70)
#define CLASS_3_3D21C30F06D355BF__CTOR_OFFSET UNITYSDK_OFFSET(0x17A26950)

inline static constexpr unsigned int Class_3_3D21C30F06D355BF_TypeDefinitionIndex = 54117;

class Class_3_3D21C30F06D355BF : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_E2E089E5A3E41E2A*>
{
public:
	::RPG::GameCore::ArrayPoolWrapper_1<::Class_2_291F7DA21A504FC4*> NMJKNKGGBOD; // 0x28
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_E2E089E5A3E41E2A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_E2E089E5A3E41E2A*))((::PBYTE)hIl2Cpp + CLASS_3_3D21C30F06D355BF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D21C30F06D355BF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D21C30F06D355BF_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_92B219A5BB78D2BB(::Class_2_291F7DA21A504FC4* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_2_291F7DA21A504FC4*))((::PBYTE)hIl2Cpp + CLASS_3_3D21C30F06D355BF_METHOD_3_92B219A5BB78D2BB_OFFSET))(this, a1);
	}
};
