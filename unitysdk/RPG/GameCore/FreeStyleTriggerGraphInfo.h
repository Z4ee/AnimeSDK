#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FreeStyleTriggerSimpleNodeInfo; }

#define RPG_GAMECORE_FREESTYLETRIGGERGRAPHINFO_METHOD_2_2F85C2D8E143917E_OFFSET UNITYSDK_OFFSET(0x1B980D00)
#define RPG_GAMECORE_FREESTYLETRIGGERGRAPHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B980DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleTriggerGraphInfo_TypeDefinitionIndex = 16265;

	class FreeStyleTriggerGraphInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*>* NodeInfos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERGRAPHINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2F85C2D8E143917E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleTriggerGraphInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleTriggerGraphInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERGRAPHINFO_METHOD_2_2F85C2D8E143917E_OFFSET))(a1, a2);
		}
	};
}
