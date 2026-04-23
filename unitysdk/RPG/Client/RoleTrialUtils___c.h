#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarDemoModuleConfigRow; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROLETRIALUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB12F170)
#define RPG_CLIENT_ROLETRIALUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB12F1A0)
#define RPG_CLIENT_ROLETRIALUTILS___C__GETSORTEDAVATARDEMOLIST_B__0_0_OFFSET UNITYSDK_OFFSET(0xB12F1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoleTrialUtils___c_TypeDefinitionIndex = 62579;

	class RoleTrialUtils___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RoleTrialUtils___c** StaticGet___9()
		{
			return (::RPG::Client::RoleTrialUtils___c**)Il2CppClass::FromTypeDefinitionIndex(RoleTrialUtils___c_TypeDefinitionIndex)->GetStaticField(0x1BC40);
		}
		static ::System::Comparison_1<::RPG::GameCore::AvatarDemoModuleConfigRow*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::AvatarDemoModuleConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RoleTrialUtils___c_TypeDefinitionIndex)->GetStaticField(0x1BC48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedAvatarDemoList_b__0_0(::RPG::GameCore::AvatarDemoModuleConfigRow* x, ::RPG::GameCore::AvatarDemoModuleConfigRow* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarDemoModuleConfigRow*, ::RPG::GameCore::AvatarDemoModuleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS___C__GETSORTEDAVATARDEMOLIST_B__0_0_OFFSET))(this, x, y);
		}
	};
}
