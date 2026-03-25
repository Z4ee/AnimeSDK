#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRYSHOWSPACEZOONEWCATDIALOG_METHOD_3_7EF957C951574DE3_OFFSET UNITYSDK_OFFSET(0x178D18A0)
#define RPG_GAMECORE_TRYSHOWSPACEZOONEWCATDIALOG_METHOD_3_EE09CD3CAAEC30F7_OFFSET UNITYSDK_OFFSET(0x178D19B0)
#define RPG_GAMECORE_TRYSHOWSPACEZOONEWCATDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x178D1980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TryShowSpaceZooNewCatDialog_TypeDefinitionIndex = 19236;

	class TryShowSpaceZooNewCatDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSHOWSPACEZOONEWCATDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7EF957C951574DE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryShowSpaceZooNewCatDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryShowSpaceZooNewCatDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSHOWSPACEZOONEWCATDIALOG_METHOD_3_7EF957C951574DE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE09CD3CAAEC30F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryShowSpaceZooNewCatDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryShowSpaceZooNewCatDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSHOWSPACEZOONEWCATDIALOG_METHOD_3_EE09CD3CAAEC30F7_OFFSET))(a1, a2);
		}
	};
}
