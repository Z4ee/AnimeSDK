#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWPLAYGOSUBPACKAGEDIALOG_METHOD_3_1BCBFEAABDDED5A4_OFFSET UNITYSDK_OFFSET(0x177012A0)
#define RPG_GAMECORE_SHOWPLAYGOSUBPACKAGEDIALOG_METHOD_3_8F21D563437C4578_OFFSET UNITYSDK_OFFSET(0x17701190)
#define RPG_GAMECORE_SHOWPLAYGOSUBPACKAGEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x17701270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowPlayGOSubPackageDialog_TypeDefinitionIndex = 19875;

	class ShowPlayGOSubPackageDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPLAYGOSUBPACKAGEDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8F21D563437C4578(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPlayGOSubPackageDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPlayGOSubPackageDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPLAYGOSUBPACKAGEDIALOG_METHOD_3_8F21D563437C4578_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1BCBFEAABDDED5A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPlayGOSubPackageDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPlayGOSubPackageDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPLAYGOSUBPACKAGEDIALOG_METHOD_3_1BCBFEAABDDED5A4_OFFSET))(a1, a2);
		}
	};
}
