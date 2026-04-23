#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define SRDEBUGGER_SETTINGS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E872D0)
#define SRDEBUGGER_SETTINGS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19E87310)
#define SRDEBUGGER_SETTINGS___C__SET_ENTRYCODE_B__40_0_OFFSET UNITYSDK_OFFSET(0x19E87320)

namespace SRDebugger
{
	inline static constexpr unsigned int Settings___c_TypeDefinitionIndex = 35345;

	class Settings___c : public ::System::Object
	{
	public:
		static ::SRDebugger::Settings___c** StaticGet___9()
		{
			return (::SRDebugger::Settings___c**)Il2CppClass::FromTypeDefinitionIndex(Settings___c_TypeDefinitionIndex)->GetStaticField(0x68BF0);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Settings___c_TypeDefinitionIndex)->GetStaticField(0x68BF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _set_EntryCode_b__40_0(::System::Int32 p)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS___C__SET_ENTRYCODE_B__40_0_OFFSET))(this, p);
		}
	};
}
