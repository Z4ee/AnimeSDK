#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA74A8F0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA74A930)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsInterviewTabItemControl___c_TypeDefinitionIndex = 68448;

	class LimaoNewsInterviewTabItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsInterviewTabItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsInterviewTabItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsInterviewTabItemControl___c_TypeDefinitionIndex)->GetStaticField(0x1B240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
