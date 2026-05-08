#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F198DE4AF67D1F0B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF2005D0)
#define CLASS_2_F198DE4AF67D1F0B_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF200340)
#define CLASS_2_F198DE4AF67D1F0B_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0xF200630)
#define CLASS_2_F198DE4AF67D1F0B_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0xF200B70)
#define CLASS_2_F198DE4AF67D1F0B_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0xF2008D0)
#define CLASS_2_F198DE4AF67D1F0B_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xF2001D0)
#define CLASS_2_F198DE4AF67D1F0B_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xF200AE0)
#define CLASS_2_F198DE4AF67D1F0B_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0xF2003C0)
#define CLASS_2_F198DE4AF67D1F0B_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xF200180)
#define CLASS_2_F198DE4AF67D1F0B_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xF2002D0)
#define CLASS_2_F198DE4AF67D1F0B_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0xF200980)
#define CLASS_2_F198DE4AF67D1F0B__CTOR_OFFSET UNITYSDK_OFFSET(0xF200970)

inline static constexpr unsigned int Class_2_F198DE4AF67D1F0B_TypeDefinitionIndex = 54522;

class Class_2_F198DE4AF67D1F0B : public ::MoleMole::Config::ConfigViewObjectTraitBase
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F198DE4AF67D1F0B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_F198DE4AF67D1F0B_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
	{
		return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F198DE4AF67D1F0B_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F198DE4AF67D1F0B_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_F198DE4AF67D1F0B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F198DE4AF67D1F0B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_F91ACF27C085FD90* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + CLASS_2_F198DE4AF67D1F0B_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_F198DE4AF67D1F0B_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	static ::Class_2_F198DE4AF67D1F0B* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_F198DE4AF67D1F0B*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_F198DE4AF67D1F0B_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + CLASS_2_F198DE4AF67D1F0B_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}

	static ::Class_2_F198DE4AF67D1F0B* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_F198DE4AF67D1F0B*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F198DE4AF67D1F0B_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F198DE4AF67D1F0B_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}
};
