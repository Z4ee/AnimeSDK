#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"

class Class_1_1A05043E9AD1C5D3;

#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x1A67CB10)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_MODIFYVALUE_OFFSET UNITYSDK_OFFSET(0x1A67CC50)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1A67CD40)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_SUBVALUE_OFFSET UNITYSDK_OFFSET(0x1A67CBB0)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A67CAC0)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A67CAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEnemyDifficultyModifier_TypeDefinitionIndex = 62078;

	class GridFightEnemyDifficultyModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_1A05043E9AD1C5D3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_UPDATE_OFFSET))(this, a1);
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
