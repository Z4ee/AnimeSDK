#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9AA6670)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA66B0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsSponsorControl___c_TypeDefinitionIndex = 61016;

	class LimaoNewsSponsorControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsSponsorControl___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsSponsorControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsSponsorControl___c_TypeDefinitionIndex)->GetStaticField(0x29960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
