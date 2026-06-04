#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWSUBPACKAGE_METHOD_3_5795FDAE3D7D6A60_OFFSET UNITYSDK_OFFSET(0x19C83E70)
#define RPG_GAMECORE_SHOWSUBPACKAGE_METHOD_3_B29674835E98906C_OFFSET UNITYSDK_OFFSET(0x19C83F80)
#define RPG_GAMECORE_SHOWSUBPACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C83F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSubPackage_TypeDefinitionIndex = 20490;

	class ShowSubPackage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSUBPACKAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5795FDAE3D7D6A60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSubPackage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSubPackage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSUBPACKAGE_METHOD_3_5795FDAE3D7D6A60_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B29674835E98906C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSubPackage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSubPackage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSUBPACKAGE_METHOD_3_B29674835E98906C_OFFSET))(a1, a2);
		}
	};
}
