#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A32D1D9DFD2721B9.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_1E2C28EB5494586C;
class Class_2_2B9D1521AEB6DD72;
class Class_2_DF2C726EEEEC912D;

#define MOLEMOLE_UISOCIALCIRCLEREPORTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16528290)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleReportDialogPopWindowController_Context_TypeDefinitionIndex = 73220;

	class UISocialCircleReportDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_2B9D1521AEB6DD72* SocialCircleBriefData; // 0x28
		::Class_2_1E2C28EB5494586C* TextValidate; // 0x30
		::Class_2_DF2C726EEEEC912D* SocialCircleData; // 0x38
		::Enum_3_A32D1D9DFD2721B9 ReportDialogMode; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEREPORTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
