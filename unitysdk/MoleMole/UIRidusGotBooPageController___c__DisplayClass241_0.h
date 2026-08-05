#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6689CFCCDBE24211.h"
#include "unitysdk/Enum_3_A54EADDA5F8725D8.h"
#include "unitysdk/System/Object.h"

class Class_1_15C4412F4F8ACB43;
class Class_2_208CC9941471731A_74;
namespace MoleMole { class RidusGotBooSkillEx; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS241_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2BE10)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS241_0__GENERATESIMPLESKILLDATA_B__0_OFFSET UNITYSDK_OFFSET(0x17A2BE20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController___c__DisplayClass241_0_TypeDefinitionIndex = 91544;

	class UIRidusGotBooPageController___c__DisplayClass241_0 : public ::System::Object
	{
	public:
		::System::Func_2<::Class_2_208CC9941471731A_74*, ::System::String*>* getColorFunc; // 0x10
		::Enum_3_A54EADDA5F8725D8 skillType; // 0x18
		::Enum_3_6689CFCCDBE24211 qteResult; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS241_0__CTOR_OFFSET))(this);
		}

		::MoleMole::RidusGotBooSkillEx* _GenerateSimpleSkillData_b__0(::Class_1_15C4412F4F8ACB43* x)
		{
			return ((::MoleMole::RidusGotBooSkillEx*(*)(::PVOID, ::Class_1_15C4412F4F8ACB43*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS241_0__GENERATESIMPLESKILLDATA_B__0_OFFSET))(this, x);
		}
	};
}
