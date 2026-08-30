#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_1D7B69991D584C07;
class Class_1_49DA0019D59F36B2;
class Class_2_22C4B636012AE7A6;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_22123BE1C8713EE3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC381BF0)
#define CLASS_2_22123BE1C8713EE3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC381D10)
#define CLASS_2_22123BE1C8713EE3_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xC381510)
#define CLASS_2_22123BE1C8713EE3_METHOD_2_676E831338583C9D_OFFSET UNITYSDK_OFFSET(0xC381680)
#define CLASS_2_22123BE1C8713EE3_METHOD_2_8290F76E5BF655A5_OFFSET UNITYSDK_OFFSET(0xC3818B0)
#define CLASS_2_22123BE1C8713EE3_METHOD_2_8C8250FDCEC2AC09_OFFSET UNITYSDK_OFFSET(0xC381920)
#define CLASS_2_22123BE1C8713EE3_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0xC381AA0)
#define CLASS_2_22123BE1C8713EE3_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xC3819B0)
#define CLASS_2_22123BE1C8713EE3_METHOD_2_CC75865AF9CCA3AF_OFFSET UNITYSDK_OFFSET(0xC3816F0)
#define CLASS_2_22123BE1C8713EE3__CTOR_OFFSET UNITYSDK_OFFSET(0xC381E00)

inline static constexpr unsigned int Class_2_22123BE1C8713EE3_TypeDefinitionIndex = 71655;

class Class_2_22123BE1C8713EE3 : public ::Class_1_34917908B7833130
{
public:
	::System::Action_1<::Class_1_34917908B7833130*>* BJENMMLEOEC; // 0x60
	::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x68
	::System::Collections::Generic::List_1<::System::String*>* APEGJHGDNCA; // 0x70
	::Class_2_22C4B636012AE7A6* GOGLDOBLLAI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22123BE1C8713EE3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22123BE1C8713EE3_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_676E831338583C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22123BE1C8713EE3_METHOD_2_676E831338583C9D_OFFSET))(this);
	}

	::System::Void Method_2_8290F76E5BF655A5(::System::Action_1<::Class_1_34917908B7833130*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_34917908B7833130*>*))((::PBYTE)hIl2Cpp + CLASS_2_22123BE1C8713EE3_METHOD_2_8290F76E5BF655A5_OFFSET))(this, a1);
	}

	::System::Void Method_2_CC75865AF9CCA3AF(::Class_1_1D7B69991D584C07* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1D7B69991D584C07*))((::PBYTE)hIl2Cpp + CLASS_2_22123BE1C8713EE3_METHOD_2_CC75865AF9CCA3AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8250FDCEC2AC09(::Class_1_49DA0019D59F36B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49DA0019D59F36B2*))((::PBYTE)hIl2Cpp + CLASS_2_22123BE1C8713EE3_METHOD_2_8C8250FDCEC2AC09_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_22123BE1C8713EE3_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_22123BE1C8713EE3_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22123BE1C8713EE3_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22123BE1C8713EE3_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
