#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5A70B04B36C288E4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client::MechCraft::View { class MechCraftCraftBoardGroundControl; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD5FD480)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS17_0___ONLINESETCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0xD600630)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS17_0___ONLINESETCHANGED_B__1_OFFSET UNITYSDK_OFFSET(0xD600720)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS17_0___ONLINESETCHANGED_B__2_OFFSET UNITYSDK_OFFSET(0xD600860)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftBoardGroundControl___c__DisplayClass17_0_TypeDefinitionIndex = 79845;

	class MechCraftCraftBoardGroundControl___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Func_2<::Struct_2_5A70B04B36C288E4, ::System::Boolean>* __9__1; // 0x10
		::System::Func_2<::Struct_2_5A70B04B36C288E4, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* __9__2; // 0x18
		::System::Func_2<::Struct_2_5A70B04B36C288E4, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* __9__0; // 0x20
		::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* oldLines; // 0x28
		::RPG::Client::MechCraft::View::MechCraftCraftBoardGroundControl* __4__this; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* __OnLineSetChanged_b__0(::Struct_2_5A70B04B36C288E4 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Struct_2_5A70B04B36C288E4))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS17_0___ONLINESETCHANGED_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __OnLineSetChanged_b__1(::Struct_2_5A70B04B36C288E4 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_5A70B04B36C288E4))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS17_0___ONLINESETCHANGED_B__1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* __OnLineSetChanged_b__2(::Struct_2_5A70B04B36C288E4 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Struct_2_5A70B04B36C288E4))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS17_0___ONLINESETCHANGED_B__2_OFFSET))(this, a1);
		}
	};
}
