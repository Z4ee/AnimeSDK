#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleBuffConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GLOBALMARBLEBUFFCONFIG_METHOD_2_BFC27F2034876C20_OFFSET UNITYSDK_OFFSET(0x1D93FE70)
#define RPG_GAMECORE_GLOBALMARBLEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D95A9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalMarbleBuffConfig_TypeDefinitionIndex = 16712;

	class GlobalMarbleBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MarbleBuffConfig*>* BuffDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMARBLEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BFC27F2034876C20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalMarbleBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalMarbleBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMARBLEBUFFCONFIG_METHOD_2_BFC27F2034876C20_OFFSET))(a1, a2);
		}
	};
}
