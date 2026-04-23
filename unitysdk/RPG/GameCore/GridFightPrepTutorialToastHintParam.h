#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOASTHINTPARAM_METHOD_2_9289CB7DB2498F62_OFFSET UNITYSDK_OFFSET(0x189CFC50)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOASTHINTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x189D0660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepTutorialToastHintParam_TypeDefinitionIndex = 18882;

	class GridFightPrepTutorialToastHintParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID Title; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOASTHINTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9289CB7DB2498F62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPrepTutorialToastHintParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPrepTutorialToastHintParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOASTHINTPARAM_METHOD_2_9289CB7DB2498F62_OFFSET))(a1, a2);
		}
	};
}
