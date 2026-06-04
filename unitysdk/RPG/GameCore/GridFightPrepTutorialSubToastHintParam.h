#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSUBTOASTHINTPARAM_METHOD_2_DF41C104E8E458E4_OFFSET UNITYSDK_OFFSET(0x19803030)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSUBTOASTHINTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19803900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepTutorialSubToastHintParam_TypeDefinitionIndex = 18844;

	class GridFightPrepTutorialSubToastHintParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID Title; // 0x10
		::System::Boolean Visible; // 0x20
		::System::Boolean ShowAnim; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSUBTOASTHINTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DF41C104E8E458E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPrepTutorialSubToastHintParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPrepTutorialSubToastHintParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSUBTOASTHINTPARAM_METHOD_2_DF41C104E8E458E4_OFFSET))(a1, a2);
		}
	};
}
