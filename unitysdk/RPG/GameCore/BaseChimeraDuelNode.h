#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASECHIMERADUELNODE_METHOD_2_1EEB6A366F108747_OFFSET UNITYSDK_OFFSET(0x1B2EBD20)
#define RPG_GAMECORE_BASECHIMERADUELNODE_METHOD_2_DD6E5709256402FE_OFFSET UNITYSDK_OFFSET(0x1B2EBCC0)
#define RPG_GAMECORE_BASECHIMERADUELNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EBD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChimeraDuelNode_TypeDefinitionIndex = 15772;

	class BaseChimeraDuelNode : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DD6E5709256402FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChimeraDuelNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChimeraDuelNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELNODE_METHOD_2_DD6E5709256402FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_1EEB6A366F108747(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChimeraDuelNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChimeraDuelNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELNODE_METHOD_2_1EEB6A366F108747_OFFSET))(a1, a2);
		}
	};
}
