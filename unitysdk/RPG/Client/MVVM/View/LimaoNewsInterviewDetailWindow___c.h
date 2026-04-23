#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDETAILWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA749E10)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDETAILWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA749E50)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsInterviewDetailWindow___c_TypeDefinitionIndex = 68445;

	class LimaoNewsInterviewDetailWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsInterviewDetailWindow___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsInterviewDetailWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsInterviewDetailWindow___c_TypeDefinitionIndex)->GetStaticField(0x1B1D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDETAILWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDETAILWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
