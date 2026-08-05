#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_35EE3F274435ACD1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CA1610)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__CLICKSCRIPTACTION_B__15_4_OFFSET UNITYSDK_OFFSET(0x19CA1660)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA1650)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPrepPageController___c_TypeDefinitionIndex = 53951;

	class UIMechBooPrepPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_35EE3F274435ACD1*, ::System::Int32>** StaticGet___9__15_4()
		{
			return (::System::Func_2<::Class_2_35EE3F274435ACD1*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x36E40);
		}
		static ::MoleMole::UIMechBooPrepPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMechBooPrepPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x36E48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _ClickScriptAction_b__15_4(::Class_2_35EE3F274435ACD1* config)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_35EE3F274435ACD1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__CLICKSCRIPTACTION_B__15_4_OFFSET))(this, config);
		}
	};
}
