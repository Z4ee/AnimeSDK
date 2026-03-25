#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/RPG/Client/Prop/ScenePuzzleItemBase.h"
#include "unitysdk/RPG/Client/Prop/VortexBoxItemType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class VortexBoxPuzzleBoard; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0xA171D20)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_METHOD_6_88667086FB91B538_OFFSET UNITYSDK_OFFSET(0xA175E20)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_METHOD_6_8FA0679D147955F9_OFFSET UNITYSDK_OFFSET(0xA175A80)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_METHOD_6_F9725EED05F07EC1_OFFSET UNITYSDK_OFFSET(0xA175CD0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_MOVE_OFFSET UNITYSDK_OFFSET(0xA174170)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA175B10)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_REFERSHPOSITION_OFFSET UNITYSDK_OFFSET(0xA171BD0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_RESET_OFFSET UNITYSDK_OFFSET(0xA172810)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_SETBOXSELECT_OFFSET UNITYSDK_OFFSET(0xA175BD0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_SETCANDRAG_OFFSET UNITYSDK_OFFSET(0xA172040)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_SETFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xA173A50)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_VORTEXDRAG_OFFSET UNITYSDK_OFFSET(0xA1738F0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_VORTEXEXPAND_OFFSET UNITYSDK_OFFSET(0xA173BB0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xA175F00)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA175EE0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA175F60)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int VortexBoxPuzzleItem_TypeDefinitionIndex = 64309;

	class VortexBoxPuzzleItem : public ::RPG::Client::Prop::ScenePuzzleItemBase
	{
	public:
		static ::System::Int32* StaticGet_Field_6_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VortexBoxPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x4340);
		}
		::RPG::Client::Prop::VortexBoxPuzzleBoard* Board; // 0x20
		::RPG::Client::Prop::BoxmanCoord Coord; // 0x28
		::System::String* OptionTextmapID; // 0x30
		::RPG::Client::Prop::VortexBoxItemType ItemType; // 0x38
		::System::Single YOffset; // 0x3C
		::RPG::Client::Prop::BoxmanCoord ResetCoord; // 0x40
		::System::Int32 BoxIndex; // 0x48
		::UnityEngine::Vector3 Field_6_7; // 0x4C
		::System::Nullable_1<::System::Boolean> Field_6_8; // 0x58
		::System::Single Speed; // 0x5C
		::UnityEngine::AnimationCurve* MoveCurve; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_INIT_OFFSET))(this);
		}

		::System::Void Move(::RPG::Client::Prop::BoxmanDir a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_MOVE_OFFSET))(this, a1, a2);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_ONSELECT_OFFSET))(this);
		}

		::System::Void SetBoxSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_SETBOXSELECT_OFFSET))(this, a1);
		}

		::System::Void VortexExpand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_VORTEXEXPAND_OFFSET))(this);
		}

		::System::Void VortexDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_VORTEXDRAG_OFFSET))(this);
		}

		::System::Void SetCanDrag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_SETCANDRAG_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_F9725EED05F07EC1(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_METHOD_6_F9725EED05F07EC1_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_6_8FA0679D147955F9(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_METHOD_6_8FA0679D147955F9_OFFSET))(this, a1);
		}

		::System::Void Method_6_88667086FB91B538()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_METHOD_6_88667086FB91B538_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_RESET_OFFSET))(this);
		}

		::System::Void RefershPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_REFERSHPOSITION_OFFSET))(this);
		}

		::System::Void SetFinishState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM_SETFINISHSTATE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM___IFIXBASEPROXY_ONSELECT_OFFSET))(this);
		}
	};
}
