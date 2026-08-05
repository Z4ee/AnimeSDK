#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90858D70BEDD91CA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x195F9750)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x195F9790)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__28_0_OFFSET UNITYSDK_OFFSET(0x195F97A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralFilterPopWindowController___c_TypeDefinitionIndex = 46960;

	class UIGeneralFilterPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_90858D70BEDD91CA*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::Class_1_90858D70BEDD91CA*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralFilterPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x450A0);
		}
		static ::MoleMole::UIGeneralFilterPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralFilterPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralFilterPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x450A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__28_0(::Class_1_90858D70BEDD91CA* g)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90858D70BEDD91CA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__28_0_OFFSET))(this, g);
		}
	};
}
