#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1569CA70)
#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1569CAB0)
#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER___C__PARSEACCOUNTINFO_B__21_0_OFFSET UNITYSDK_OFFSET(0x1569CAC0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int InternalAccountListDropdownItemHandler___c_TypeDefinitionIndex = 8968;

	class InternalAccountListDropdownItemHandler___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::InternalAccountListDropdownItemHandler___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::InternalAccountListDropdownItemHandler___c**)Il2CppClass::FromTypeDefinitionIndex(InternalAccountListDropdownItemHandler___c_TypeDefinitionIndex)->GetStaticField(0x2C230);
		}
		static ::System::Action_2<::UnityEngine::GameObject*, ::System::String*>** StaticGet___9__21_0()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InternalAccountListDropdownItemHandler___c_TypeDefinitionIndex)->GetStaticField(0x2C238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ParseAccountInfo_b__21_0(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER___C__PARSEACCOUNTINFO_B__21_0_OFFSET))(this, a1, a2);
		}
	};
}
