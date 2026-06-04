#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_BE37E8E5B7815649;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F341E76BCE497F11_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1427E6D0)
#define CLASS_2_F341E76BCE497F11_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x1427E670)
#define CLASS_2_F341E76BCE497F11_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x1427DA00)
#define CLASS_2_F341E76BCE497F11_METHOD_2_6C9963159B9A9A14_OFFSET UNITYSDK_OFFSET(0x1427E2A0)
#define CLASS_2_F341E76BCE497F11_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x1427DB40)
#define CLASS_2_F341E76BCE497F11_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x1427DF20)
#define CLASS_2_F341E76BCE497F11_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1427DA90)
#define CLASS_2_F341E76BCE497F11_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1427DED0)
#define CLASS_2_F341E76BCE497F11__CTOR_OFFSET UNITYSDK_OFFSET(0x1427E5A0)
#define CLASS_2_F341E76BCE497F11__ONBIND_OFFSET UNITYSDK_OFFSET(0x1427D7D0)
#define CLASS_2_F341E76BCE497F11___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1427E610)

inline static constexpr unsigned int Class_2_F341E76BCE497F11_TypeDefinitionIndex = 67192;

class Class_2_F341E76BCE497F11 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_1; // 0x60
	::RPG::GameCore::GameEntity* Field_2_2; // 0x68
	::System::Collections::Generic::List_1<::Class_2_BE37E8E5B7815649*>* Field_2_3; // 0x70
	::System::Int32 Field_2_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F341E76BCE497F11__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F341E76BCE497F11__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F341E76BCE497F11_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F341E76BCE497F11_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F341E76BCE497F11_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F341E76BCE497F11_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_2_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F341E76BCE497F11_METHOD_2_ED65AE7582736594_OFFSET))(this);
	}

	::System::Void Method_2_6C9963159B9A9A14(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F341E76BCE497F11_METHOD_2_6C9963159B9A9A14_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F341E76BCE497F11___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F341E76BCE497F11_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F341E76BCE497F11_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
