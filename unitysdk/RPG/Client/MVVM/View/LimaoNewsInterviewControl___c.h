#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A97BA0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9A97BE0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsInterviewControl___c_TypeDefinitionIndex = 61002;

	class LimaoNewsInterviewControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsInterviewControl___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsInterviewControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsInterviewControl___c_TypeDefinitionIndex)->GetStaticField(0x29040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
