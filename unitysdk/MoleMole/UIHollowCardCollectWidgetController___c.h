#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167C31E0)
#define MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167C3220)
#define MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__INITSORT_B__16_0_OFFSET UNITYSDK_OFFSET(0x167C3230)
#define MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__INITSORT_B__16_2_OFFSET UNITYSDK_OFFSET(0x167C3240)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardCollectWidgetController___c_TypeDefinitionIndex = 57494;

	class UIHollowCardCollectWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48860);
		}
		static ::MoleMole::UIHollowCardCollectWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowCardCollectWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48868);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__16_2()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _InitSort_b__16_0(::System::String* filter)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__INITSORT_B__16_0_OFFSET))(this, filter);
		}

		::System::String* _InitSort_b__16_2(::System::String* filter)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__INITSORT_B__16_2_OFFSET))(this, filter);
		}
	};
}
