#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A98D20)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9A98D60)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsInterviewTabItemControl___c_TypeDefinitionIndex = 60995;

	class LimaoNewsInterviewTabItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsInterviewTabItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsInterviewTabItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsInterviewTabItemControl___c_TypeDefinitionIndex)->GetStaticField(0x290C0);
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
