#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA75E7A0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA75E7E0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsPostSubmitWindow___c_TypeDefinitionIndex = 68482;

	class LimaoNewsPostSubmitWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsPostSubmitWindow___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsPostSubmitWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostSubmitWindow___c_TypeDefinitionIndex)->GetStaticField(0x1BF90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
