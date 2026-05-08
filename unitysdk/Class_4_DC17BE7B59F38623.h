#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_FDBF29E550D962C5.h"

namespace MoleMole { class UIMainCityGeneralTipsWidgetController; }
namespace MoleMole { class UIMainCityGeneralTipsWidgetController_Context; }
namespace System { class String; }

#define CLASS_4_DC17BE7B59F38623_METHOD_4_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x18EB58C0)
#define CLASS_4_DC17BE7B59F38623_METHOD_4_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x18EB5C30)
#define CLASS_4_DC17BE7B59F38623_METHOD_4_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18EB57B0)
#define CLASS_4_DC17BE7B59F38623_METHOD_4_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x18EB5DB0)
#define CLASS_4_DC17BE7B59F38623__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB57C0)

inline static constexpr unsigned int Class_4_DC17BE7B59F38623_TypeDefinitionIndex = 61535;

class Class_4_DC17BE7B59F38623 : public ::Class_3_FDBF29E550D962C5
{
public:
	// static const ::System::String* Field_4_0; // 0x0
	::MoleMole::UIMainCityGeneralTipsWidgetController_Context* Field_4_1; // 0x30
	::MoleMole::UIMainCityGeneralTipsWidgetController* Field_4_2; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_DC17BE7B59F38623__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_4_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DC17BE7B59F38623_METHOD_4_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_4_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DC17BE7B59F38623_METHOD_4_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Void Method_4_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DC17BE7B59F38623_METHOD_4_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_4_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DC17BE7B59F38623_METHOD_4_FBF2CB29FD3B55E6_OFFSET))(this);
	}
};
