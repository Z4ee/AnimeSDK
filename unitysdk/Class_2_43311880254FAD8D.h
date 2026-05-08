#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/StimulusEventItem.h"

class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_43311880254FAD8D_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1568ADC0)
#define CLASS_2_43311880254FAD8D_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1568AAA0)
#define CLASS_2_43311880254FAD8D_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x1568AE20)
#define CLASS_2_43311880254FAD8D_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x1568B2B0)
#define CLASS_2_43311880254FAD8D_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x1568AB20)
#define CLASS_2_43311880254FAD8D_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0x1568B010)
#define CLASS_2_43311880254FAD8D_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x1568A930)
#define CLASS_2_43311880254FAD8D_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x1568B0C0)
#define CLASS_2_43311880254FAD8D_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x1568A8E0)
#define CLASS_2_43311880254FAD8D_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1568AA30)
#define CLASS_2_43311880254FAD8D_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x1568B150)
#define CLASS_2_43311880254FAD8D__CTOR_OFFSET UNITYSDK_OFFSET(0x1568B0B0)

inline static constexpr unsigned int Class_2_43311880254FAD8D_TypeDefinitionIndex = 48368;

class Class_2_43311880254FAD8D : public ::MoleMole::Config::ConfigViewObjectTraitBase
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::StimulusEventItem>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43311880254FAD8D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_43311880254FAD8D_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
	{
		return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43311880254FAD8D_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43311880254FAD8D_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_43311880254FAD8D_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43311880254FAD8D_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_F91ACF27C085FD90* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + CLASS_2_43311880254FAD8D_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + CLASS_2_43311880254FAD8D_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}

	static ::Class_2_43311880254FAD8D* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_43311880254FAD8D*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_43311880254FAD8D_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_43311880254FAD8D* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_43311880254FAD8D*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43311880254FAD8D_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43311880254FAD8D_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_43311880254FAD8D_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};
