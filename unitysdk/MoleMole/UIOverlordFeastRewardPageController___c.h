#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_416;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F50340)
#define MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F50380)
#define MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x15F50390)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastRewardPageController___c_TypeDefinitionIndex = 55258;

	class UIOverlordFeastRewardPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIOverlordFeastRewardPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIOverlordFeastRewardPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastRewardPageController___c_TypeDefinitionIndex)->GetStaticField(0x4DAB0);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_416*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_416*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastRewardPageController___c_TypeDefinitionIndex)->GetStaticField(0x4DAB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__7_0(::Class_2_208CC9941471731A_416* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_416*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET))(this, t);
		}
	};
}
