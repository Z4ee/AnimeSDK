#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTalentNode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::Client { class GridFightTalentTree; }
namespace RPG::GameCore { class GridFightSeasonTalentConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_COST_OFFSET UNITYSDK_OFFSET(0xA584260)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA5841F0)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA584240)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ID_OFFSET UNITYSDK_OFFSET(0xA584170)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ISARRIVED_OFFSET UNITYSDK_OFFSET(0xA5842A0)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0xA584280)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xA584220)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_TAG_OFFSET UNITYSDK_OFFSET(0xA584190)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_TALENTTREE_OFFSET UNITYSDK_OFFSET(0xA584160)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xA5841C0)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5844D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonTalentNode_TypeDefinitionIndex = 60082;

	class GridFightSeasonTalentNode : public ::RPG::Client::GridFightTalentNode
	{
	public:
		static ::RPG::Client::GridFightTalentTree** StaticGet_Tree()
		{
			return (::RPG::Client::GridFightTalentTree**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonTalentNode_TypeDefinitionIndex)->GetStaticField(0x18BE0);
		}
		::RPG::GameCore::GridFightSeasonTalentConfigRow* _ConfigRow; // 0x28

		::System::Void _ctor(::RPG::GameCore::GridFightSeasonTalentConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSeasonTalentConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE__CTOR_OFFSET))(this, row);
		}

		::RPG::Client::GridFightTalentTree* get_TalentTree()
		{
			return ((::RPG::Client::GridFightTalentTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_TALENTTREE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Tag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_TAG_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_PARAMLIST_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_COST_OFFSET))(this);
		}

		::System::Boolean get_IsOCEffective()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ISOCEFFECTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsArrived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ISARRIVED_OFFSET))(this);
		}
	};
}
