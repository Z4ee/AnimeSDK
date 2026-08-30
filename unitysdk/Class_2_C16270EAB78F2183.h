#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_1C30CE192ABE4C54;
namespace RPG::Client { class CustomButton; }
namespace RPG::Client { class MonoTieMuQTE; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_C16270EAB78F2183_METHOD_2_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x19C3D1E0)
#define CLASS_2_C16270EAB78F2183_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x19C3D0C0)
#define CLASS_2_C16270EAB78F2183_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x19C3D050)
#define CLASS_2_C16270EAB78F2183_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19C3CDF0)
#define CLASS_2_C16270EAB78F2183_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x19C3CF00)
#define CLASS_2_C16270EAB78F2183_METHOD_2_D951EE47D243444C_OFFSET UNITYSDK_OFFSET(0x19C3CC90)
#define CLASS_2_C16270EAB78F2183_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x19C3C9D0)
#define CLASS_2_C16270EAB78F2183__CTOR_OFFSET UNITYSDK_OFFSET(0x19C3CC20)
#define CLASS_2_C16270EAB78F2183__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x19C3CA40)
#define CLASS_2_C16270EAB78F2183__ONTICK_OFFSET UNITYSDK_OFFSET(0x19C3CEA0)
#define CLASS_2_C16270EAB78F2183__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19C3CCF0)
#define CLASS_2_C16270EAB78F2183__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x19C3CE50)

inline static constexpr unsigned int Class_2_C16270EAB78F2183_TypeDefinitionIndex = 72238;

class Class_2_C16270EAB78F2183 : public ::RPG::Client::UIController
{
public:
	::UnityEngine::UI::Slider* EBLLEMNBNBO; // 0x188
	::RPG::Client::CustomButton* EBKBADIICEA; // 0x190
	::Class_1_1C30CE192ABE4C54* CGGGPPBMFID; // 0x198
	::RPG::Client::MonoTieMuQTE* MKIEHCGKMIA; // 0x1A0
	::System::Single EKEGNJACGEA; // 0x1A8
	::System::Single EBOBPBINAAO; // 0x1AC
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x1B0
	::System::Single EJNMGLJJEOO; // 0x1B4
	::System::Boolean INJJGMIGFFD; // 0x1B8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183__CTOR_OFFSET))(this);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void Method_2_D951EE47D243444C(::Class_1_1C30CE192ABE4C54* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C30CE192ABE4C54*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_D951EE47D243444C_OFFSET))(this, a1, a2);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_1092C5537716905B_OFFSET))(this);
	}
};
