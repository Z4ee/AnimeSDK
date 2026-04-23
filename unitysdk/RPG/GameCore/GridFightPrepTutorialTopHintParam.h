#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOPHINTPARAM_METHOD_2_35AD31FDAA43A322_OFFSET UNITYSDK_OFFSET(0x189CFF90)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOPHINTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x189D0670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepTutorialTopHintParam_TypeDefinitionIndex = 18884;

	class GridFightPrepTutorialTopHintParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsShow; // 0x10
		::RPG::Client::TextID TextID; // 0x18
		::System::UInt32 CurProgress; // 0x28
		::System::UInt32 TotalProgress; // 0x2C
		::System::Boolean IsFinish; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOPHINTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_35AD31FDAA43A322(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPrepTutorialTopHintParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPrepTutorialTopHintParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOPHINTPARAM_METHOD_2_35AD31FDAA43A322_OFFSET))(a1, a2);
		}
	};
}
