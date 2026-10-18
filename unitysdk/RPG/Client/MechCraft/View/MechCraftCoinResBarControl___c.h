#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD5F5FD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD5F6010)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL___C___ONBINDVIEWMODEL_B__10_6_OFFSET UNITYSDK_OFFSET(0xD5F6020)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCoinResBarControl___c_TypeDefinitionIndex = 79813;

	class MechCraftCoinResBarControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::String*>** StaticGet___9__10_6()
		{
			return (::System::Func_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MechCraftCoinResBarControl___c_TypeDefinitionIndex)->GetStaticField(0x57310);
		}
		static ::RPG::Client::MechCraft::View::MechCraftCoinResBarControl___c** StaticGet___9()
		{
			return (::RPG::Client::MechCraft::View::MechCraftCoinResBarControl___c**)Il2CppClass::FromTypeDefinitionIndex(MechCraftCoinResBarControl___c_TypeDefinitionIndex)->GetStaticField(0x57318);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL___C__CTOR_OFFSET))(this);
		}

		::System::String* __OnBindViewModel_b__10_6(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL___C___ONBINDVIEWMODEL_B__10_6_OFFSET))(this, a1);
		}
	};
}
