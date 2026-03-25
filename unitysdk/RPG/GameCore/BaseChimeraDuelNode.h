#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BASECHIMERADUELNODE_METHOD_2_1EEB6A366F108747_OFFSET UNITYSDK_OFFSET(0x16FC6DD0)
#define RPG_GAMECORE_BASECHIMERADUELNODE_METHOD_2_2B31BC69CADAD65D_OFFSET UNITYSDK_OFFSET(0x16FC6C10)
#define RPG_GAMECORE_BASECHIMERADUELNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FC6E40)
#define RPG_GAMECORE_BASECHIMERADUELNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC6E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChimeraDuelNode_TypeDefinitionIndex = 14638;

	class BaseChimeraDuelNode : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChimeraDuelNode*>*>** StaticGet__FromBinary_BaseChimeraDuelNode_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChimeraDuelNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(BaseChimeraDuelNode_TypeDefinitionIndex)->GetStaticField(0x217B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELNODE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_2B31BC69CADAD65D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChimeraDuelNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChimeraDuelNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELNODE_METHOD_2_2B31BC69CADAD65D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_1EEB6A366F108747(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChimeraDuelNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChimeraDuelNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELNODE_METHOD_2_1EEB6A366F108747_OFFSET))(a1, a2);
		}
	};
}
