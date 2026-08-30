#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTalentNode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::Client { class GridFightTalentTree; }
namespace RPG::GameCore { class GridFightTalentConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_COST_OFFSET UNITYSDK_OFFSET(0xD2DC840)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD2DC730)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD2DC7F0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ID_OFFSET UNITYSDK_OFFSET(0xD2DC600)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ISARRIVED_OFFSET UNITYSDK_OFFSET(0xD2DC8F0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0xD2DC890)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xD2DC7A0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_TAG_OFFSET UNITYSDK_OFFSET(0xD2DC650)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_TALENTTREE_OFFSET UNITYSDK_OFFSET(0xD2DC5B0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xD2DC6C0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xD2DCB60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPermanentTalentNode_TypeDefinitionIndex = 65317;

	class GridFightPermanentTalentNode : public ::RPG::Client::GridFightTalentNode
	{
	public:
		static ::RPG::Client::GridFightTalentTree** StaticGet_Tree()
		{
			return (::RPG::Client::GridFightTalentTree**)Il2CppClass::FromTypeDefinitionIndex(GridFightPermanentTalentNode_TypeDefinitionIndex)->GetStaticField(0x27D10);
		}
		::RPG::GameCore::GridFightTalentConfigRow* _ConfigRow; // 0x28

		::System::Void _ctor(::RPG::GameCore::GridFightTalentConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTalentConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTalentTree* get_TalentTree()
		{
			return ((::RPG::Client::GridFightTalentTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_TALENTTREE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Tag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_TAG_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_PARAMLIST_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_COST_OFFSET))(this);
		}

		::System::Boolean get_IsOCEffective()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ISOCEFFECTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsArrived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ISARRIVED_OFFSET))(this);
		}
	};
}
