#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_1D7B69991D584C07;
class Class_1_49DA0019D59F36B2;
class Class_2_22C4B636012AE7A6;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_22123BE1C8713EE3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16466860)
#define CLASS_2_22123BE1C8713EE3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16466980)
#define CLASS_2_22123BE1C8713EE3_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x16466180)
#define CLASS_2_22123BE1C8713EE3_METHOD_2_676E831338583C9D_OFFSET UNITYSDK_OFFSET(0x164662F0)
#define CLASS_2_22123BE1C8713EE3_METHOD_2_8290F76E5BF655A5_OFFSET UNITYSDK_OFFSET(0x16466520)
#define CLASS_2_22123BE1C8713EE3_METHOD_2_8C8250FDCEC2AC09_OFFSET UNITYSDK_OFFSET(0x16466590)
#define CLASS_2_22123BE1C8713EE3_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x16466710)
#define CLASS_2_22123BE1C8713EE3_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x16466620)
#define CLASS_2_22123BE1C8713EE3_METHOD_2_CC75865AF9CCA3AF_OFFSET UNITYSDK_OFFSET(0x16466360)
#define CLASS_2_22123BE1C8713EE3__CTOR_OFFSET UNITYSDK_OFFSET(0x16466A70)

inline static constexpr unsigned int Class_2_22123BE1C8713EE3_TypeDefinitionIndex = 68461;

class Class_2_22123BE1C8713EE3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Action_1<::Class_1_CA217ABF4E3B4F3F*>* Field_2_0; // 0x60
	::Class_2_22C4B636012AE7A6* Field_2_1; // 0x68
	::System::Collections::Generic::List_1<::System::String*>* Field_2_2; // 0x70
	::RPG::GameCore::LevelUIComponent* Field_2_3; // 0x78

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

	::System::Void Method_2_8290F76E5BF655A5(::System::Action_1<::Class_1_CA217ABF4E3B4F3F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_CA217ABF4E3B4F3F*>*))((::PBYTE)hIl2Cpp + CLASS_2_22123BE1C8713EE3_METHOD_2_8290F76E5BF655A5_OFFSET))(this, a1);
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
