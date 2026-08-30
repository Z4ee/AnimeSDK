#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENSETAREAANCHORVISIBLE_METHOD_3_7A9EA2734F2EDEB2_OFFSET UNITYSDK_OFFSET(0x1D1941D0)
#define RPG_GAMECORE_HIPPLENSETAREAANCHORVISIBLE_METHOD_3_E579DB78F3CFA92D_OFFSET UNITYSDK_OFFSET(0x1D194180)
#define RPG_GAMECORE_HIPPLENSETAREAANCHORVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1941C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenSetAreaAnchorVisible_TypeDefinitionIndex = 21073;

	class HipplenSetAreaAnchorVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AnchorName; // 0x18
		::System::Boolean Visible; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENSETAREAANCHORVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E579DB78F3CFA92D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenSetAreaAnchorVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenSetAreaAnchorVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENSETAREAANCHORVISIBLE_METHOD_3_E579DB78F3CFA92D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7A9EA2734F2EDEB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenSetAreaAnchorVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenSetAreaAnchorVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENSETAREAANCHORVISIBLE_METHOD_3_7A9EA2734F2EDEB2_OFFSET))(a1, a2);
		}
	};
}
