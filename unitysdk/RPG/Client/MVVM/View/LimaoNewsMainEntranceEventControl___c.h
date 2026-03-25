#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCEEVENTCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A9E890)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCEEVENTCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9A9E8D0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsMainEntranceEventControl___c_TypeDefinitionIndex = 60983;

	class LimaoNewsMainEntranceEventControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsMainEntranceEventControl___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsMainEntranceEventControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsMainEntranceEventControl___c_TypeDefinitionIndex)->GetStaticField(0x29270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCEEVENTCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCEEVENTCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
