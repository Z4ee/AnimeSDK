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

#define CLASS_2_157110479543DAE3_METHOD_2_0C60A530AA0118C2_OFFSET UNITYSDK_OFFSET(0x8D85690)
#define CLASS_2_157110479543DAE3_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x8D85AE0)
#define CLASS_2_157110479543DAE3_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x8D85750)
#define CLASS_2_157110479543DAE3_METHOD_2_4792FCD3AEEF1D34_OFFSET UNITYSDK_OFFSET(0x8D85C50)
#define CLASS_2_157110479543DAE3_METHOD_2_55D4A1AB7760B930_OFFSET UNITYSDK_OFFSET(0x8D856E0)
#define CLASS_2_157110479543DAE3_METHOD_2_8F8D080EF5D1D761_OFFSET UNITYSDK_OFFSET(0x8D85E80)
#define CLASS_2_157110479543DAE3_METHOD_2_9079FE2639801498_OFFSET UNITYSDK_OFFSET(0x8D85D10)
#define CLASS_2_157110479543DAE3_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x8D858F0)
#define CLASS_2_157110479543DAE3__CTOR_OFFSET UNITYSDK_OFFSET(0x8D85FF0)
#define CLASS_2_157110479543DAE3__ONBIND_OFFSET UNITYSDK_OFFSET(0x8D853D0)
#define CLASS_2_157110479543DAE3___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8D86020)

inline static constexpr unsigned int Class_2_157110479543DAE3_TypeDefinitionIndex = 59190;

class Class_2_157110479543DAE3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Button* Field_2_5; // 0x60
	::Class_2_D029B21B05075340* Field_2_1; // 0x68
	::Class_1_6D3A625BE1D0B270* Field_2_6; // 0x70
	::RPG::Client::GridFightRole* Field_2_7; // 0x78
	::Class_2_D80D1FE3E32C9633* Field_2_3; // 0x80
	::UnityEngine::UI::Image* Field_2_4; // 0x88
	::Class_2_5D383A48C6769A2A* Field_2_2; // 0x90
	::RPG::GameCore::BattleGridFightTeamTraitData* Field_2_8; // 0x98
	::Class_1_9015B34004B876E5* Field_2_9; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_157110479543DAE3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_157110479543DAE3__ONBIND_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_0C60A530AA0118C2()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_157110479543DAE3_METHOD_2_0C60A530AA0118C2_OFFSET))(this);
	}

	::System::Void Method_2_55D4A1AB7760B930(::Class_1_6D3A625BE1D0B270* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D3A625BE1D0B270*))((::PBYTE)hIl2Cpp + CLASS_2_157110479543DAE3_METHOD_2_55D4A1AB7760B930_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_157110479543DAE3_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_157110479543DAE3_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_157110479543DAE3_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_4792FCD3AEEF1D34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_157110479543DAE3_METHOD_2_4792FCD3AEEF1D34_OFFSET))(this);
	}

	::System::Void Method_2_9079FE2639801498(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_157110479543DAE3_METHOD_2_9079FE2639801498_OFFSET))(this, a1);
	}

	::RPG::GameCore::GridFightManager* Method_2_8F8D080EF5D1D761()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_157110479543DAE3_METHOD_2_8F8D080EF5D1D761_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_157110479543DAE3___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
