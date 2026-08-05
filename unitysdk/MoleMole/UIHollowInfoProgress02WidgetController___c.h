#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F24A790D52CF0024;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F022E0)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F02320)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__REFRESHVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0x18F02330)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoProgress02WidgetController___c_TypeDefinitionIndex = 85658;

	class UIHollowInfoProgress02WidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_F24A790D52CF0024*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::Class_1_F24A790D52CF0024*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoProgress02WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A550);
		}
		static ::MoleMole::UIHollowInfoProgress02WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowInfoProgress02WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoProgress02WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__4_0(::Class_1_F24A790D52CF0024* a, ::Class_1_F24A790D52CF0024* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_F24A790D52CF0024*, ::Class_1_F24A790D52CF0024*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__REFRESHVIEW_B__4_0_OFFSET))(this, a, b);
		}
	};
}
