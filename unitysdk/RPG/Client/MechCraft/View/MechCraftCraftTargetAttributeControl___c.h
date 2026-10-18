#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1495;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD637AF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD637B30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C___BINDICON_B__3_0_OFFSET UNITYSDK_OFFSET(0xD637B40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C___BINDTEXT_B__4_0_OFFSET UNITYSDK_OFFSET(0xD637B60)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftTargetAttributeControl___c_TypeDefinitionIndex = 79948;

	class MechCraftCraftTargetAttributeControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_0_16E4307DCC419505_1495*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1495*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MechCraftCraftTargetAttributeControl___c_TypeDefinitionIndex)->GetStaticField(0x59910);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1495*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1495*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MechCraftCraftTargetAttributeControl___c_TypeDefinitionIndex)->GetStaticField(0x59918);
		}
		static ::RPG::Client::MechCraft::View::MechCraftCraftTargetAttributeControl___c** StaticGet___9()
		{
			return (::RPG::Client::MechCraft::View::MechCraftCraftTargetAttributeControl___c**)Il2CppClass::FromTypeDefinitionIndex(MechCraftCraftTargetAttributeControl___c_TypeDefinitionIndex)->GetStaticField(0x59920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C__CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::String*>* __BindIcon_b__3_0(::Class_0_16E4307DCC419505_1495* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1495*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C___BINDICON_B__3_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindText_b__4_0(::Class_0_16E4307DCC419505_1495* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1495*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C___BINDTEXT_B__4_0_OFFSET))(this, a1);
		}
	};
}
