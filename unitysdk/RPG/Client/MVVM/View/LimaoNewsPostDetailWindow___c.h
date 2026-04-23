#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTDETAILWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA75B320)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTDETAILWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA75B360)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsPostDetailWindow___c_TypeDefinitionIndex = 68477;

	class LimaoNewsPostDetailWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsPostDetailWindow___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsPostDetailWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostDetailWindow___c_TypeDefinitionIndex)->GetStaticField(0x1BD90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTDETAILWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTDETAILWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
