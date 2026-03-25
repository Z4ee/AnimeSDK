#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StaticListViewItem; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_STATICLISTVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4E8140)
#define RPG_CLIENT_STATICLISTVIEW___C__CLEAR_B__42_0_OFFSET UNITYSDK_OFFSET(0xA4E8180)
#define RPG_CLIENT_STATICLISTVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E8170)

namespace RPG::Client
{
	inline static constexpr unsigned int StaticListView___c_TypeDefinitionIndex = 59553;

	class StaticListView___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::StaticListViewItem*>** StaticGet___9__42_0()
		{
			return (::System::Comparison_1<::RPG::Client::StaticListViewItem*>**)Il2CppClass::FromTypeDefinitionIndex(StaticListView___c_TypeDefinitionIndex)->GetStaticField(0x27710);
		}
		static ::RPG::Client::StaticListView___c** StaticGet___9()
		{
			return (::RPG::Client::StaticListView___c**)Il2CppClass::FromTypeDefinitionIndex(StaticListView___c_TypeDefinitionIndex)->GetStaticField(0x27718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Clear_b__42_0(::RPG::Client::StaticListViewItem* a, ::RPG::Client::StaticListViewItem* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::StaticListViewItem*, ::RPG::Client::StaticListViewItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW___C__CLEAR_B__42_0_OFFSET))(this, a, b);
		}
	};
}
