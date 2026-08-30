#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGraph.h"

class Class_2_71ECD705C8627A9D;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace System { class String; }

#define CLASS_2_E3332B678B8C5C07_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A839570)
#define CLASS_2_E3332B678B8C5C07_GET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1A8395D0)
#define CLASS_2_E3332B678B8C5C07_GET_GRAPHID_OFFSET UNITYSDK_OFFSET(0x1A8395F0)
#define CLASS_2_E3332B678B8C5C07_SET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1A8395E0)
#define CLASS_2_E3332B678B8C5C07__CTOR_OFFSET UNITYSDK_OFFSET(0x1A839520)

inline static constexpr unsigned int Class_2_E3332B678B8C5C07_TypeDefinitionIndex = 59118;

class Class_2_E3332B678B8C5C07 : public ::RPG::GameCore::LevelGraph
{
public:
	::Class_2_71ECD705C8627A9D* _CustomData_k__BackingField; // 0x50
	::System::Int32 _GraphID_k__BackingField; // 0x58

	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::LevelGraphConfig* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LevelGraphConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E3332B678B8C5C07__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3332B678B8C5C07_DISPOSE_OFFSET))(this);
	}

	::Class_2_71ECD705C8627A9D* get_CustomData()
	{
		return ((::Class_2_71ECD705C8627A9D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3332B678B8C5C07_GET_CUSTOMDATA_OFFSET))(this);
	}

	::System::Void set_CustomData(::Class_2_71ECD705C8627A9D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_71ECD705C8627A9D*))((::PBYTE)hIl2Cpp + CLASS_2_E3332B678B8C5C07_SET_CUSTOMDATA_OFFSET))(this, a1);
	}

	::System::Int32 get_GraphID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3332B678B8C5C07_GET_GRAPHID_OFFSET))(this);
	}
};
