#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9AA2DD0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA2E10)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsPostItemControl___c_TypeDefinitionIndex = 61014;

	class LimaoNewsPostItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsPostItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsPostItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostItemControl___c_TypeDefinitionIndex)->GetStaticField(0x297D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTITEMCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTITEMCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
