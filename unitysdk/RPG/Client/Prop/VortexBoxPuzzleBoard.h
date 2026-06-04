#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/RPG/Client/Prop/ScenePuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class VortexBoxPuzzleItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_CANITEMMOVE_OFFSET UNITYSDK_OFFSET(0xC638EA0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_DIFFBYDIR_OFFSET UNITYSDK_OFFSET(0xC639000)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC639610)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_GETITEM_OFFSET UNITYSDK_OFFSET(0xC6390A0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0xC639C20)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xC638670)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC638030)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC637FE0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_ITEM2BOARDLOCAL_OFFSET UNITYSDK_OFFSET(0xC63AB30)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_METHOD_7_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0xC63AA60)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_METHOD_7_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC63AE80)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_METHOD_7_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xC638180)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_METHOD_7_B7DE96E81A4BD953_OFFSET UNITYSDK_OFFSET(0xC639C80)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_METHOD_7_EA1355C3DBBA00B4_OFFSET UNITYSDK_OFFSET(0xC638C50)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_ONITEMMOVEFINISH_OFFSET UNITYSDK_OFFSET(0xC638BC0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_REFRESHCANDRAGITEM_OFFSET UNITYSDK_OFFSET(0xC638250)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xC639140)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_TRYDRAGBOX_OFFSET UNITYSDK_OFFSET(0xC639EB0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_TRYMOVEVORTEX_OFFSET UNITYSDK_OFFSET(0xC639B60)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xC63AAE0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_WORLDFORWARDRIGHT2DIR_OFFSET UNITYSDK_OFFSET(0xC63ACA0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_WORLDPOSITION2COORD_OFFSET UNITYSDK_OFFSET(0xC63ABF0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xC63B600)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC63B500)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC63B710)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC63B6A0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC63B610)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xC63B6B0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0xC63B7B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int VortexBoxPuzzleBoard_TypeDefinitionIndex = 73375;

	class VortexBoxPuzzleBoard : public ::RPG::Client::Prop::ScenePuzzleBoardBase
	{
	public:
		static ::System::Single* StaticGet_Field_7_0()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VortexBoxPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x90C0);
		}
		// static const ::System::String* Field_7_1; // 0x0
		::Il2CppArray<::RPG::Client::Prop::VortexBoxPuzzleItem*>* Field_7_2; // 0x50
		::UnityEngine::Vector3 Origin; // 0x58
		::UnityEngine::Vector3 Forward; // 0x64
		::UnityEngine::Vector3 Right; // 0x70
		::System::Single GridSize; // 0x7C
		::System::Int32 MaxRow; // 0x80
		::System::Int32 MaxCol; // 0x84
		::System::Single FinalDragDist; // 0x88
		::System::String* FailCustomString; // 0x90
		::RPG::Client::Prop::VortexBoxPuzzleItem* Field_7_11; // 0x98
		::System::Boolean Field_7_12; // 0xA0
		::System::Boolean Field_7_13; // 0xA1
		::System::Boolean Field_7_14; // 0xA2
		::System::Int32 Field_7_15; // 0xA4
		::System::Int32 Field_7_16; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Void OnItemMoveFinish(::RPG::Client::Prop::VortexBoxPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::VortexBoxPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_ONITEMMOVEFINISH_OFFSET))(this, a1);
		}

		::System::Void RefreshCanDragItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_REFRESHCANDRAGITEM_OFFSET))(this);
		}

		::System::Boolean CanItemMove(::RPG::Client::Prop::VortexBoxPuzzleItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::VortexBoxPuzzleItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_CANITEMMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void TryMoveVortex(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_TRYMOVEVORTEX_OFFSET))(this, a1);
		}

		::System::Void TryDragBox()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_TRYDRAGBOX_OFFSET))(this);
		}

		::System::Void Method_7_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_METHOD_7_A239DF324AF4215D_OFFSET))(this);
		}

		::System::UInt32 Method_7_2372762F4122DEB8()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_METHOD_7_2372762F4122DEB8_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 Item2BoardLocal(::RPG::Client::Prop::VortexBoxPuzzleItem* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::VortexBoxPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_ITEM2BOARDLOCAL_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::BoxmanCoord WorldPosition2Coord(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::Prop::BoxmanCoord(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_WORLDPOSITION2COORD_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::BoxmanDir WorldForwardRight2Dir(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::Prop::BoxmanDir(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_WORLDFORWARDRIGHT2DIR_OFFSET))(this, a1);
		}

		static ::RPG::Client::Prop::BoxmanCoord DiffByDir(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::RPG::Client::Prop::BoxmanCoord(*)(::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_DIFFBYDIR_OFFSET))(a1);
		}

		::RPG::Client::Prop::VortexBoxPuzzleItem* GetItem(::RPG::Client::Prop::BoxmanCoord a1)
		{
			return ((::RPG::Client::Prop::VortexBoxPuzzleItem*(*)(::PVOID, ::RPG::Client::Prop::BoxmanCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_GETITEM_OFFSET))(this, a1);
		}

		::System::Boolean Method_7_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_METHOD_7_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_7_EA1355C3DBBA00B4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_METHOD_7_EA1355C3DBBA00B4_OFFSET))(this);
		}

		::System::Void Method_7_B7DE96E81A4BD953(::RPG::Client::Prop::VortexBoxPuzzleItem* a1, ::RPG::Client::Prop::BoxmanDir a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::VortexBoxPuzzleItem*, ::RPG::Client::Prop::BoxmanDir, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_METHOD_7_B7DE96E81A4BD953_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEBOARD___IFIXBASEPROXY_UPDATE_OFFSET))(this);
		}
	};
}
