#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_767;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__BOUGHTEXP_B__3_0_OFFSET UNITYSDK_OFFSET(0xBAE0700)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBAE05E0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE0620)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__GETALLMESSAGE_B__7_0_OFFSET UNITYSDK_OFFSET(0xBAE09A0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__TICKROUND_B__6_0_OFFSET UNITYSDK_OFFSET(0xBAE08C0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDEQUIP_B__4_0_OFFSET UNITYSDK_OFFSET(0xBAE07E0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDORB_B__2_0_OFFSET UNITYSDK_OFFSET(0xBAE0630)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAssistant___c_TypeDefinitionIndex = 60156;

	class GridFightAssistant___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_0_16E4307DCC419505_767*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::Class_0_16E4307DCC419505_767*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x29310);
		}
		static ::System::Action_1<::Class_0_16E4307DCC419505_767*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::Class_0_16E4307DCC419505_767*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x29318);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_767*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_767*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x29320);
		}
		static ::System::Action_1<::Class_0_16E4307DCC419505_767*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::Class_0_16E4307DCC419505_767*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x29328);
		}
		static ::System::Action_1<::Class_0_16E4307DCC419505_767*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::Class_0_16E4307DCC419505_767*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x29330);
		}
		static ::RPG::Client::GridFightAssistant___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightAssistant___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x29338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__CTOR_OFFSET))(this);
		}

		::System::Void _UsedOrb_b__2_0(::Class_0_16E4307DCC419505_767* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_767*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDORB_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _BoughtExp_b__3_0(::Class_0_16E4307DCC419505_767* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_767*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__BOUGHTEXP_B__3_0_OFFSET))(this, a1);
		}

		::System::Void _UsedEquip_b__4_0(::Class_0_16E4307DCC419505_767* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_767*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDEQUIP_B__4_0_OFFSET))(this, a1);
		}

		::System::Void _TickRound_b__6_0(::Class_0_16E4307DCC419505_767* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_767*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__TICKROUND_B__6_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetAllMessage_b__7_0(::Class_0_16E4307DCC419505_767* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_767*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__GETALLMESSAGE_B__7_0_OFFSET))(this, a1);
		}
	};
}
