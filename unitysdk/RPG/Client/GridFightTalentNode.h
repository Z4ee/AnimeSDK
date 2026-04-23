#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTalentTree; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTALENTNODE_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0xA599490)
#define RPG_CLIENT_GRIDFIGHTTALENTNODE_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xA5994E0)
#define RPG_CLIENT_GRIDFIGHTTALENTNODE_GET_NEXTNODES_OFFSET UNITYSDK_OFFSET(0xA5994A0)
#define RPG_CLIENT_GRIDFIGHTTALENTNODE_GET_PREVNODES_OFFSET UNITYSDK_OFFSET(0xA5994C0)
#define RPG_CLIENT_GRIDFIGHTTALENTNODE_SET_NEXTNODES_OFFSET UNITYSDK_OFFSET(0xA5994B0)
#define RPG_CLIENT_GRIDFIGHTTALENTNODE_SET_PREVNODES_OFFSET UNITYSDK_OFFSET(0xA5994D0)
#define RPG_CLIENT_GRIDFIGHTTALENTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xA599560)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTalentNode_TypeDefinitionIndex = 60087;

	class GridFightTalentNode : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTalentNode*>* _PrevNodes_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTalentNode*>* _NextNodes_k__BackingField; // 0x18
		::System::Boolean _IsOCEffective_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsOCEffective()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTNODE_GET_ISOCEFFECTIVE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTalentNode*>* get_NextNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTalentNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTNODE_GET_NEXTNODES_OFFSET))(this);
		}

		::System::Void set_NextNodes(::System::Collections::Generic::List_1<::RPG::Client::GridFightTalentNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightTalentNode*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTNODE_SET_NEXTNODES_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTalentNode*>* get_PrevNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTalentNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTNODE_GET_PREVNODES_OFFSET))(this);
		}

		::System::Void set_PrevNodes(::System::Collections::Generic::List_1<::RPG::Client::GridFightTalentNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightTalentNode*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTNODE_SET_PREVNODES_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTNODE_GET_ISUNLOCK_OFFSET))(this);
		}
	};
}
