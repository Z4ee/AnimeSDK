#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define R3_OBSERVABLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C423B90)
#define R3_OBSERVABLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C423BD0)
#define R3_OBSERVABLE___C__FROMEVENT_B__26_0_OFFSET UNITYSDK_OFFSET(0x1C423BE0)

namespace R3
{
	inline static constexpr unsigned int Observable___c_TypeDefinitionIndex = 35906;

	class Observable___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Action*, ::System::Action*>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::Action*, ::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Observable___c_TypeDefinitionIndex)->GetStaticField(0xA20);
		}
		static ::R3::Observable___c** StaticGet___9()
		{
			return (::R3::Observable___c**)Il2CppClass::FromTypeDefinitionIndex(Observable___c_TypeDefinitionIndex)->GetStaticField(0xA28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_OBSERVABLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_OBSERVABLE___C__CTOR_OFFSET))(this);
		}

		::System::Action* _FromEvent_b__26_0(::System::Action* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + R3_OBSERVABLE___C__FROMEVENT_B__26_0_OFFSET))(this, a1);
		}
	};
}
