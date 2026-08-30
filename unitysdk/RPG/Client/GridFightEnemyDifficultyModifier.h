#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"

class Class_1_B8E6D5AD8534D123;

#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x1C974620)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_MODIFYVALUE_OFFSET UNITYSDK_OFFSET(0x1C974760)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1C974840)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_SUBVALUE_OFFSET UNITYSDK_OFFSET(0x1C9746C0)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C9745D0)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9745C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEnemyDifficultyModifier_TypeDefinitionIndex = 65062;

	class GridFightEnemyDifficultyModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AddValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_ADDVALUE_OFFSET))(this);
		}

		::System::UInt32 get_SubValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_SUBVALUE_OFFSET))(this);
		}

		::System::Int32 get_ModifyValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_MODIFYVALUE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightNodeType get_NodeType()
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_NODETYPE_OFFSET))(this);
		}
	};
}
