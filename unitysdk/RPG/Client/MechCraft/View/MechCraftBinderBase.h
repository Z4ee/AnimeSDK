#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftBinderBase_ComponentEntry; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_METHOD_1_52E15C85F04D5F3B_OFFSET UNITYSDK_OFFSET(0xD5EE090)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xD5E83B0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftBinderBase_TypeDefinitionIndex = 79977;

	class MechCraftBinderBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::View::MechCraftBinderBase_ComponentEntry*>* _Components; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::MechCraft::View::MechCraftBinderBase_ComponentEntry*>* _ComponentDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_52E15C85F04D5F3B(::System::String* a1, ::System::Type* a2, ::UnityEngine::Component*& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Type*, ::UnityEngine::Component*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_METHOD_1_52E15C85F04D5F3B_OFFSET))(this, a1, a2, a3);
		}
	};
}
