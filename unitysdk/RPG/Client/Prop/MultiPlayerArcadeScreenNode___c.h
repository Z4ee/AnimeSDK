#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MultiPlayerActivityInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16129C40)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16129C80)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE___C___SWITCHNODES_B__3_0_OFFSET UNITYSDK_OFFSET(0x16129C90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int MultiPlayerArcadeScreenNode___c_TypeDefinitionIndex = 77715;

	class MultiPlayerArcadeScreenNode___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Prop::MultiPlayerArcadeScreenNode___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::MultiPlayerArcadeScreenNode___c**)Il2CppClass::FromTypeDefinitionIndex(MultiPlayerArcadeScreenNode___c_TypeDefinitionIndex)->GetStaticField(0x63CD0);
		}
		static ::System::Func_2<::RPG::Client::MultiPlayerActivityInfo*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::MultiPlayerActivityInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MultiPlayerArcadeScreenNode___c_TypeDefinitionIndex)->GetStaticField(0x63CD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __SwitchNodes_b__3_0(::RPG::Client::MultiPlayerActivityInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MultiPlayerActivityInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE___C___SWITCHNODES_B__3_0_OFFSET))(this, a1);
		}
	};
}
