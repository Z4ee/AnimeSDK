#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/SpreadConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Booklet { class ElementConfig; }

#define RPG_GAMECORE_BOOKLET_PAGESPREADCONFIG_METHOD_3_157A43F348EE5886_OFFSET UNITYSDK_OFFSET(0x1A4048C0)
#define RPG_GAMECORE_BOOKLET_PAGESPREADCONFIG_METHOD_3_18B10BD01B710F24_OFFSET UNITYSDK_OFFSET(0x1A404920)
#define RPG_GAMECORE_BOOKLET_PAGESPREADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A404910)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int PageSpreadConfig_TypeDefinitionIndex = 24093;

	class PageSpreadConfig : public ::RPG::GameCore::Booklet::SpreadConfig
	{
	public:
		::RPG::GameCore::Booklet::ElementConfig* LeftPage; // 0x20
		::RPG::GameCore::Booklet::ElementConfig* RightPage; // 0x28
		::RPG::GameCore::Booklet::ElementConfig* AbovePage; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PAGESPREADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_157A43F348EE5886(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::PageSpreadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::PageSpreadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PAGESPREADCONFIG_METHOD_3_157A43F348EE5886_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_18B10BD01B710F24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::PageSpreadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::PageSpreadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PAGESPREADCONFIG_METHOD_3_18B10BD01B710F24_OFFSET))(a1, a2);
		}
	};
}
