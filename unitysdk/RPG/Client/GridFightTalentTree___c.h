#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTalentNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTALENTTREE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA599C70)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA599CB0)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_FIRSTARRIVEDNODE_B__17_0_OFFSET UNITYSDK_OFFSET(0xA599CC0)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_HASTALENTCANUNLOCK_B__19_0_OFFSET UNITYSDK_OFFSET(0xA599D10)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_UNLOCKCNT_B__21_0_OFFSET UNITYSDK_OFFSET(0xA599EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTalentTree___c_TypeDefinitionIndex = 60089;

	class GridFightTalentTree___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTalentTree___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTalentTree___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTalentTree___c_TypeDefinitionIndex)->GetStaticField(0x19E40);
		}
		static ::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTalentTree___c_TypeDefinitionIndex)->GetStaticField(0x19E48);
		}
		static ::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTalentTree___c_TypeDefinitionIndex)->GetStaticField(0x19E50);
		}
		static ::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTalentTree___c_TypeDefinitionIndex)->GetStaticField(0x19E58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_FirstArrivedNode_b__17_0(::RPG::Client::GridFightTalentNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTalentNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_FIRSTARRIVEDNODE_B__17_0_OFFSET))(this, node);
		}

		::System::Boolean _get_HasTalentCanUnlock_b__19_0(::RPG::Client::GridFightTalentNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTalentNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_HASTALENTCANUNLOCK_B__19_0_OFFSET))(this, node);
		}

		::System::Boolean _get_UnlockCnt_b__21_0(::RPG::Client::GridFightTalentNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTalentNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_UNLOCKCNT_B__21_0_OFFSET))(this, node);
		}
	};
}
