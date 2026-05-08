#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_AC1B1CB16C488BEC;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIYOROZUYAS3DIFFICULTYINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBD5130)
#define MOLEMOLE_UIYOROZUYAS3DIFFICULTYINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEBD5170)
#define MOLEMOLE_UIYOROZUYAS3DIFFICULTYINFOWIDGETCONTROLLER___C__ONBUILDBTNCLICK_B__15_0_OFFSET UNITYSDK_OFFSET(0xEBD5180)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaS3DifficultyInfoWidgetController___c_TypeDefinitionIndex = 73780;

	class UIYorozuyaS3DifficultyInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIYorozuyaS3DifficultyInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIYorozuyaS3DifficultyInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaS3DifficultyInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3AD00);
		}
		static ::System::Func_2<::Class_2_AC1B1CB16C488BEC*, ::Class_1_0D6706375CDAAE8C*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::Class_2_AC1B1CB16C488BEC*, ::Class_1_0D6706375CDAAE8C*>**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaS3DifficultyInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3AD08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAS3DIFFICULTYINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAS3DIFFICULTYINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::Class_1_0D6706375CDAAE8C* _OnBuildBtnClick_b__15_0(::Class_2_AC1B1CB16C488BEC* x)
		{
			return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID, ::Class_2_AC1B1CB16C488BEC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAS3DIFFICULTYINFOWIDGETCONTROLLER___C__ONBUILDBTNCLICK_B__15_0_OFFSET))(this, x);
		}
	};
}
