#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_RENDEROPTIONSMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAFBA7F0)
#define RPG_CLIENT_RENDEROPTIONSMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAFBA820)
#define RPG_CLIENT_RENDEROPTIONSMANAGER___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0xAFBA830)
#define RPG_CLIENT_RENDEROPTIONSMANAGER___C___CTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0xAFBA8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RenderOptionsManager___c_TypeDefinitionIndex = 64693;

	class RenderOptionsManager___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RenderOptionsManager___c** StaticGet___9()
		{
			return (::RPG::Client::RenderOptionsManager___c**)Il2CppClass::FromTypeDefinitionIndex(RenderOptionsManager___c_TypeDefinitionIndex)->GetStaticField(0x15340);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RenderOptionsManager___c_TypeDefinitionIndex)->GetStaticField(0x15348);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RenderOptionsManager___c_TypeDefinitionIndex)->GetStaticField(0x15350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__1_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER___C___CTOR_B__1_0_OFFSET))(this);
		}

		::System::Void __ctor_b__1_1(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER___C___CTOR_B__1_1_OFFSET))(this, state);
		}
	};
}
