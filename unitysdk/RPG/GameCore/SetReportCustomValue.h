#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_SETREPORTCUSTOMVALUE_METHOD_3_9AEA451F670AC114_OFFSET UNITYSDK_OFFSET(0x1E08BFD0)
#define RPG_GAMECORE_SETREPORTCUSTOMVALUE_METHOD_3_DE7A57B1D9F20BFD_OFFSET UNITYSDK_OFFSET(0x1E08C020)
#define RPG_GAMECORE_SETREPORTCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E08C010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetReportCustomValue_TypeDefinitionIndex = 23387;

	class SetReportCustomValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ReportKey; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x20
		::RPG::GameCore::DynamicFloat* ReportValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETREPORTCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9AEA451F670AC114(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetReportCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetReportCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETREPORTCUSTOMVALUE_METHOD_3_9AEA451F670AC114_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DE7A57B1D9F20BFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetReportCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetReportCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETREPORTCUSTOMVALUE_METHOD_3_DE7A57B1D9F20BFD_OFFSET))(a1, a2);
		}
	};
}
