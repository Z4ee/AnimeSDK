#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StaticListViewItem; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_STATICLISTVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0FD770)
#define RPG_CLIENT_STATICLISTVIEW___C__CLEAR_B__49_0_OFFSET UNITYSDK_OFFSET(0xE0FD7B0)
#define RPG_CLIENT_STATICLISTVIEW___C__CLEAR_B__49_1_OFFSET UNITYSDK_OFFSET(0xE0FD820)
#define RPG_CLIENT_STATICLISTVIEW___C__CLEAR_B__49_2_OFFSET UNITYSDK_OFFSET(0xE0FDB10)
#define RPG_CLIENT_STATICLISTVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE0FD7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int StaticListView___c_TypeDefinitionIndex = 72583;

	class StaticListView___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::Collections::Generic::List_1<::RPG::Client::StaticListViewItem*>*, ::System::Collections::Generic::Queue_1<::RPG::Client::StaticListViewItem*>*>** StaticGet___9__49_1()
		{
			return (::System::Action_2<::System::Collections::Generic::List_1<::RPG::Client::StaticListViewItem*>*, ::System::Collections::Generic::Queue_1<::RPG::Client::StaticListViewItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(StaticListView___c_TypeDefinitionIndex)->GetStaticField(0x2D3C0);
		}
		static ::System::Comparison_1<::RPG::Client::StaticListViewItem*>** StaticGet___9__49_0()
		{
			return (::System::Comparison_1<::RPG::Client::StaticListViewItem*>**)Il2CppClass::FromTypeDefinitionIndex(StaticListView___c_TypeDefinitionIndex)->GetStaticField(0x2D3C8);
		}
		static ::System::Comparison_1<::RPG::Client::StaticListViewItem*>** StaticGet___9__49_2()
		{
			return (::System::Comparison_1<::RPG::Client::StaticListViewItem*>**)Il2CppClass::FromTypeDefinitionIndex(StaticListView___c_TypeDefinitionIndex)->GetStaticField(0x2D3D0);
		}
		static ::RPG::Client::StaticListView___c** StaticGet___9()
		{
			return (::RPG::Client::StaticListView___c**)Il2CppClass::FromTypeDefinitionIndex(StaticListView___c_TypeDefinitionIndex)->GetStaticField(0x2D3D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Clear_b__49_0(::RPG::Client::StaticListViewItem* a1, ::RPG::Client::StaticListViewItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::StaticListViewItem*, ::RPG::Client::StaticListViewItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW___C__CLEAR_B__49_0_OFFSET))(this, a1, a2);
		}

		::System::Void _Clear_b__49_1(::System::Collections::Generic::List_1<::RPG::Client::StaticListViewItem*>* a1, ::System::Collections::Generic::Queue_1<::RPG::Client::StaticListViewItem*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::StaticListViewItem*>*, ::System::Collections::Generic::Queue_1<::RPG::Client::StaticListViewItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW___C__CLEAR_B__49_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 _Clear_b__49_2(::RPG::Client::StaticListViewItem* a1, ::RPG::Client::StaticListViewItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::StaticListViewItem*, ::RPG::Client::StaticListViewItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW___C__CLEAR_B__49_2_OFFSET))(this, a1, a2);
		}
	};
}
