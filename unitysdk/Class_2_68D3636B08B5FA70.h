#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class MonoInControlButton; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_68D3636B08B5FA70_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x14002AA0)
#define CLASS_2_68D3636B08B5FA70_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x14002AC0)
#define CLASS_2_68D3636B08B5FA70_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x14002C90)
#define CLASS_2_68D3636B08B5FA70_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x140034C0)
#define CLASS_2_68D3636B08B5FA70_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x14003520)
#define CLASS_2_68D3636B08B5FA70_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x14003460)
#define CLASS_2_68D3636B08B5FA70_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14002DF0)
#define CLASS_2_68D3636B08B5FA70_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x14002B80)
#define CLASS_2_68D3636B08B5FA70_METHOD_2_D1B8EDD075FF9494_OFFSET UNITYSDK_OFFSET(0x14002EB0)
#define CLASS_2_68D3636B08B5FA70_METHOD_2_FF396CC145481CA0_OFFSET UNITYSDK_OFFSET(0x14002AD0)
#define CLASS_2_68D3636B08B5FA70_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x14002AB0)
#define CLASS_2_68D3636B08B5FA70__CTOR_OFFSET UNITYSDK_OFFSET(0x140033C0)
#define CLASS_2_68D3636B08B5FA70__ONBIND_OFFSET UNITYSDK_OFFSET(0x140029E0)
#define CLASS_2_68D3636B08B5FA70___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x14003400)

inline static constexpr unsigned int Class_2_68D3636B08B5FA70_TypeDefinitionIndex = 67602;

class Class_2_68D3636B08B5FA70 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::UI::Text* Field_2_2; // 0x60
	::UnityEngine::UI::Button* Field_2_3; // 0x68
	::RPG::GameCore::LevelDataComponent* Field_2_4; // 0x70
	::RPG::Client::MonoInControlButton* Field_2_5; // 0x78
	::System::Boolean Field_2_6; // 0x80
	::System::Int32 _Index_k__BackingField; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68D3636B08B5FA70__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68D3636B08B5FA70__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68D3636B08B5FA70_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_68D3636B08B5FA70_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68D3636B08B5FA70_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_FF396CC145481CA0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_68D3636B08B5FA70_METHOD_2_FF396CC145481CA0_OFFSET))(this, a1);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68D3636B08B5FA70_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68D3636B08B5FA70_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68D3636B08B5FA70_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_D1B8EDD075FF9494(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_68D3636B08B5FA70_METHOD_2_D1B8EDD075FF9494_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68D3636B08B5FA70___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68D3636B08B5FA70_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68D3636B08B5FA70_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68D3636B08B5FA70_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}
};
