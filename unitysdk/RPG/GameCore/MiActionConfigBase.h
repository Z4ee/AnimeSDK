#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiAtomConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MIACTIONCONFIGBASE_METHOD_3_25C4878AB9C73CDE_OFFSET UNITYSDK_OFFSET(0x1D29D140)
#define RPG_GAMECORE_MIACTIONCONFIGBASE_METHOD_3_6FB2DB6F1F02CC80_OFFSET UNITYSDK_OFFSET(0x1D29D1A0)
#define RPG_GAMECORE_MIACTIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D29D240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiActionConfigBase_TypeDefinitionIndex = 16875;

	class MiActionConfigBase : public ::RPG::GameCore::MiAtomConfigBase
	{
	public:
		::System::String* MiActionUniqueID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIACTIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_25C4878AB9C73CDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiActionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiActionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIACTIONCONFIGBASE_METHOD_3_25C4878AB9C73CDE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6FB2DB6F1F02CC80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiActionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIACTIONCONFIGBASE_METHOD_3_6FB2DB6F1F02CC80_OFFSET))(a1, a2);
		}
	};
}
