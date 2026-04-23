#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_6D3A625BE1D0B270;
class Class_1_9015B34004B876E5;
class Class_2_5D383A48C6769A2A;
class Class_2_D029B21B05075340;
class Class_2_D80D1FE3E32C9633;
namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_6E86851755BB142B_METHOD_2_0C60A530AA0118C2_OFFSET UNITYSDK_OFFSET(0x11DF3510)
#define CLASS_2_6E86851755BB142B_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11DF3960)
#define CLASS_2_6E86851755BB142B_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x11DF35D0)
#define CLASS_2_6E86851755BB142B_METHOD_2_746322D065084F77_OFFSET UNITYSDK_OFFSET(0x11DF3560)
#define CLASS_2_6E86851755BB142B_METHOD_2_8F8D080EF5D1D761_OFFSET UNITYSDK_OFFSET(0x11DF3D00)
#define CLASS_2_6E86851755BB142B_METHOD_2_9079FE2639801498_OFFSET UNITYSDK_OFFSET(0x11DF3B90)
#define CLASS_2_6E86851755BB142B_METHOD_2_C73972D70B679A3D_OFFSET UNITYSDK_OFFSET(0x11DF3AD0)
#define CLASS_2_6E86851755BB142B_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x11DF3770)
#define CLASS_2_6E86851755BB142B__CTOR_OFFSET UNITYSDK_OFFSET(0x11DF3E70)
#define CLASS_2_6E86851755BB142B__ONBIND_OFFSET UNITYSDK_OFFSET(0x11DF3310)
#define CLASS_2_6E86851755BB142B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11DF3EA0)

inline static constexpr unsigned int Class_2_6E86851755BB142B_TypeDefinitionIndex = 66582;

class Class_2_6E86851755BB142B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_1_6D3A625BE1D0B270* Field_2_6; // 0x60
	::UnityEngine::UI::Button* Field_2_5; // 0x68
	::UnityEngine::UI::Image* Field_2_4; // 0x70
	::Class_2_D029B21B05075340* Field_2_1; // 0x78
	::Class_2_D80D1FE3E32C9633* Field_2_3; // 0x80
	::Class_1_9015B34004B876E5* Field_2_9; // 0x88
	::Class_2_5D383A48C6769A2A* Field_2_2; // 0x90
	::RPG::Client::GridFightRole* Field_2_7; // 0x98
	::RPG::GameCore::BattleGridFightTeamTraitData* Field_2_8; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E86851755BB142B__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E86851755BB142B__ONBIND_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_0C60A530AA0118C2()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E86851755BB142B_METHOD_2_0C60A530AA0118C2_OFFSET))(this);
	}

	::System::Void Method_2_746322D065084F77(::Class_1_6D3A625BE1D0B270* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D3A625BE1D0B270*))((::PBYTE)hIl2Cpp + CLASS_2_6E86851755BB142B_METHOD_2_746322D065084F77_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E86851755BB142B_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E86851755BB142B_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E86851755BB142B_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_C73972D70B679A3D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E86851755BB142B_METHOD_2_C73972D70B679A3D_OFFSET))(this);
	}

	::System::Void Method_2_9079FE2639801498(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6E86851755BB142B_METHOD_2_9079FE2639801498_OFFSET))(this, a1);
	}

	::RPG::GameCore::GridFightManager* Method_2_8F8D080EF5D1D761()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E86851755BB142B_METHOD_2_8F8D080EF5D1D761_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E86851755BB142B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
