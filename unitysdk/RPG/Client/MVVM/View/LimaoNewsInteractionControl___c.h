#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7457F0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA745830)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsInteractionControl___c_TypeDefinitionIndex = 68429;

	class LimaoNewsInteractionControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsInteractionControl___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsInteractionControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsInteractionControl___c_TypeDefinitionIndex)->GetStaticField(0x1AFD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
