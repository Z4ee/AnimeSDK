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

#define CLASS_2_C16270EAB78F2183_METHOD_2_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x144CF3C0)
#define CLASS_2_C16270EAB78F2183_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x144CF320)
#define CLASS_2_C16270EAB78F2183_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x144CF2B0)
#define CLASS_2_C16270EAB78F2183_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x144CEFF0)
#define CLASS_2_C16270EAB78F2183_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x144CF100)
#define CLASS_2_C16270EAB78F2183_METHOD_2_D951EE47D243444C_OFFSET UNITYSDK_OFFSET(0x144CEE90)
#define CLASS_2_C16270EAB78F2183_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x144CEC00)
#define CLASS_2_C16270EAB78F2183__CTOR_OFFSET UNITYSDK_OFFSET(0x144CEE50)
#define CLASS_2_C16270EAB78F2183__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x144CEC70)
#define CLASS_2_C16270EAB78F2183__ONTICK_OFFSET UNITYSDK_OFFSET(0x144CF0A0)
#define CLASS_2_C16270EAB78F2183__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x144CEEF0)
#define CLASS_2_C16270EAB78F2183__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x144CF050)
#define CLASS_2_C16270EAB78F2183___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x144CF520)
#define CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x144CF5A0)
#define CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x144CF6C0)
#define CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x144CF600)
#define CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x144CF660)

inline static constexpr unsigned int Class_2_C16270EAB78F2183_TypeDefinitionIndex = 67557;

class Class_2_C16270EAB78F2183 : public ::RPG::Client::UIController
{
public:
	::RPG::Client::MonoTieMuQTE* Field_2_0; // 0x180
	::Class_1_1C30CE192ABE4C54* Field_2_1; // 0x188
	::RPG::Client::CustomButton* Field_2_2; // 0x190
	::UnityEngine::UI::Slider* Field_2_3; // 0x198
	::System::Boolean Field_2_4; // 0x1A0
	::System::Single Field_2_5; // 0x1A4
	::RPG::GameCore::StringHash Field_2_6; // 0x1A8
	::System::Single Field_2_7; // 0x1AC
	::System::Single Field_2_8; // 0x1B0

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

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_1092C5537716905B_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}
};
