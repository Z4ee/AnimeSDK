#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9AA6E70)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA6EB0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsSponsorItemControl___c_TypeDefinitionIndex = 61018;

	class LimaoNewsSponsorItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsSponsorItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsSponsorItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsSponsorItemControl___c_TypeDefinitionIndex)->GetStaticField(0x299D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORITEMCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORITEMCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
