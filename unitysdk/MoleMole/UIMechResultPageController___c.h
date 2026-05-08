#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_1685EC66FBD28897;

#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151E3AC0)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151E3B00)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER___C__REFRESHREWARDVIEW_G__INTO_5_0_OFFSET UNITYSDK_OFFSET(0x151E3B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechResultPageController___c_TypeDefinitionIndex = 68636;

	class UIMechResultPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMechResultPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMechResultPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMechResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x2F0A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::Class_1_1685EC66FBD28897* _RefreshRewardView_g__Into_5_0(::Class_1_0D6706375CDAAE8C* item)
		{
			return ((::Class_1_1685EC66FBD28897*(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER___C__REFRESHREWARDVIEW_G__INTO_5_0_OFFSET))(this, item);
		}
	};
}
