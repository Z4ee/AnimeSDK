#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9C9C44FEDA4CE89_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEC49C0)
#define CLASS_1_B9C9C44FEDA4CE89__CTOR_OFFSET UNITYSDK_OFFSET(0xBEC4A60)

inline static constexpr unsigned int Class_1_B9C9C44FEDA4CE89_TypeDefinitionIndex = 57337;

class Class_1_B9C9C44FEDA4CE89 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* LMENPEICODO; // 0x10
	::RPG::GameCore::GameEntity* EHANABPPLEC; // 0x18
	::RPG::GameCore::GameEntity* OINNHCJMJOI; // 0x20
	::RPG::GameCore::GameEntity* BNIJLOABKBB; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* AIBBMKLENFD; // 0x30
	::System::Boolean CKHGBLNGPBN; // 0x38
	::UnityEngine::Vector3 JDCEFMHKOGC; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C9C44FEDA4CE89__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C9C44FEDA4CE89_DISPOSE_OFFSET))(this);
	}
};
