#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_2EF7AC7A6C04963E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
class Class_1_F157DD73C7C08100;
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_C23483ED058006CE_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10FDE420)
#define CLASS_2_C23483ED058006CE_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10FDD4E0)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_001296DDB7E01A54_OFFSET UNITYSDK_OFFSET(0x10FDE480)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x10FDD560)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x10FDEA90)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x10FDC990)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x10FDD470)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10FDEA00)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x10FDEC40)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x10FDD370)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0x10FDD280)
#define CLASS_2_C23483ED058006CE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10FDE970)

inline static constexpr unsigned int Class_2_C23483ED058006CE_1_TypeDefinitionIndex = 79000;

class Class_2_C23483ED058006CE_1 : public ::Class_1_8088D8743C1058EF
{
public:
	::Class_1_ED5EE319EA265EB6* Field_2_1; // 0x30
	::System::String* Field_2_6; // 0x38
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_4; // 0x40
	::Class_1_F157DD73C7C08100* Field_2_0; // 0x60
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_2; // 0x68
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_3; // 0x88
	::Class_1_ED5EE319EA265EB6* Field_2_5; // 0xA8
	::MoleMole::Config::EffectAutoDynamicValue* Field_2_7; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_2_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_0578713EDB32B89E_OFFSET))(this, a1);
	}

	static ::Class_2_C23483ED058006CE_1* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_C23483ED058006CE_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_001296DDB7E01A54(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_001296DDB7E01A54_OFFSET))(this, a1, a2);
	}

	static ::Class_2_C23483ED058006CE_1* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_C23483ED058006CE_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
