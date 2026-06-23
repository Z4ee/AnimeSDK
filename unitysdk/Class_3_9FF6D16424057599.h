#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2F64460E7C7A0A4C.h"

namespace MoleMole { class UIMainCityGuideItemWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_9FF6D16424057599_METHOD_3_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x11505780)
#define CLASS_3_9FF6D16424057599_METHOD_3_A0DC5467BAA81F98_OFFSET UNITYSDK_OFFSET(0x115068E0)
#define CLASS_3_9FF6D16424057599_METHOD_3_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x11505890)
#define CLASS_3_9FF6D16424057599_METHOD_3_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x11505E30)
#define CLASS_3_9FF6D16424057599_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11506220)
#define CLASS_3_9FF6D16424057599_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x11506850)
#define CLASS_3_9FF6D16424057599_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11506190)
#define CLASS_3_9FF6D16424057599_METHOD_3_EBFB381C44EDC319_OFFSET UNITYSDK_OFFSET(0x115062B0)
#define CLASS_3_9FF6D16424057599__CTOR_OFFSET UNITYSDK_OFFSET(0x11506170)

inline static constexpr unsigned int Class_3_9FF6D16424057599_TypeDefinitionIndex = 46207;

class Class_3_9FF6D16424057599 : public ::Class_2_2F64460E7C7A0A4C<::Class_3_9FF6D16424057599*>
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::Entity*, ::MoleMole::UIMainCityGuideItemWidgetController*>* Field_3_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FF6D16424057599__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FF6D16424057599_METHOD_3_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_3_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FF6D16424057599_METHOD_3_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_3_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FF6D16424057599_METHOD_3_BFB00779E460D7A3_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FF6D16424057599_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FF6D16424057599_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_EBFB381C44EDC319(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_9FF6D16424057599_METHOD_3_EBFB381C44EDC319_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FF6D16424057599_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_A0DC5467BAA81F98(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_9FF6D16424057599_METHOD_3_A0DC5467BAA81F98_OFFSET))(this, a1);
	}
};
