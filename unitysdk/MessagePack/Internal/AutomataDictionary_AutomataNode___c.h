#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class AutomataDictionary_AutomataNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53BDD0)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E53BE10)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__EMITSEARCHNEXTCORE_B__16_0_OFFSET UNITYSDK_OFFSET(0x1E53BE20)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__EMITSEARCHNEXTCORE_B__16_1_OFFSET UNITYSDK_OFFSET(0x1E53BE40)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int AutomataDictionary_AutomataNode___c_TypeDefinitionIndex = 30784;

	class AutomataDictionary_AutomataNode___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MessagePack::Internal::AutomataDictionary_AutomataNode*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::MessagePack::Internal::AutomataDictionary_AutomataNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AutomataDictionary_AutomataNode___c_TypeDefinitionIndex)->GetStaticField(0x261E0);
		}
		static ::System::Func_2<::MessagePack::Internal::AutomataDictionary_AutomataNode*, ::System::Boolean>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::MessagePack::Internal::AutomataDictionary_AutomataNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AutomataDictionary_AutomataNode___c_TypeDefinitionIndex)->GetStaticField(0x261E8);
		}
		static ::MessagePack::Internal::AutomataDictionary_AutomataNode___c** StaticGet___9()
		{
			return (::MessagePack::Internal::AutomataDictionary_AutomataNode___c**)Il2CppClass::FromTypeDefinitionIndex(AutomataDictionary_AutomataNode___c_TypeDefinitionIndex)->GetStaticField(0x261F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _EmitSearchNextCore_b__16_0(::MessagePack::Internal::AutomataDictionary_AutomataNode* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::AutomataDictionary_AutomataNode*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__EMITSEARCHNEXTCORE_B__16_0_OFFSET))(this, x);
		}

		::System::Boolean _EmitSearchNextCore_b__16_1(::MessagePack::Internal::AutomataDictionary_AutomataNode* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::AutomataDictionary_AutomataNode*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__EMITSEARCHNEXTCORE_B__16_1_OFFSET))(this, x);
		}
	};
}
