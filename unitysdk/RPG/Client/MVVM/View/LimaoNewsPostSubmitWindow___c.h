#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9AA3EC0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA3F00)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsPostSubmitWindow___c_TypeDefinitionIndex = 61029;

	class LimaoNewsPostSubmitWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsPostSubmitWindow___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsPostSubmitWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostSubmitWindow___c_TypeDefinitionIndex)->GetStaticField(0x29860);
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
