#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_B352564924EC2DFE.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
class Class_1_F157DD73C7C08100;
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_C23483ED058006CE_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF7AB420)
#define CLASS_2_C23483ED058006CE_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF7AA720)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_001296DDB7E01A54_OFFSET UNITYSDK_OFFSET(0xF7AB480)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0xF7AA7A0)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0xF7ABAF0)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_1CDA0051FD244886_OFFSET UNITYSDK_OFFSET(0xF7A9BA0)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0xF7AA4D0)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xF7AA6B0)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF7ABCA0)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0xF7AB990)
#define CLASS_2_C23483ED058006CE_1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xF7AA5B0)
#define CLASS_2_C23483ED058006CE_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF7AB900)

inline static constexpr unsigned int Class_2_C23483ED058006CE_1_TypeDefinitionIndex = 73451;

class Class_2_C23483ED058006CE_1 : public ::Class_1_8088D8743C1058EF
{
public:
	::Class_1_ED5EE319EA265EB6* Field_2_2; // 0x30
	::Struct_2_B352564924EC2DFE<::System::String*> Field_2_1; // 0x38
	::Struct_2_B352564924EC2DFE<::UnityEngine::Vector3> Field_2_3; // 0x58
	::Class_1_F157DD73C7C08100* Field_2_0; // 0x78
	::MoleMole::Config::EffectAutoDynamicValue* Field_2_6; // 0x80
	::Struct_2_B352564924EC2DFE<::UnityEngine::Vector3> Field_2_4; // 0x88
	::Class_1_ED5EE319EA265EB6* Field_2_5; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1CDA0051FD244886()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_1CDA0051FD244886_OFFSET))(this);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
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

	::System::Boolean Method_2_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_001296DDB7E01A54(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_001296DDB7E01A54_OFFSET))(this, a1, a2);
	}

	static ::Class_2_C23483ED058006CE_1* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_C23483ED058006CE_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_C23483ED058006CE_1* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_C23483ED058006CE_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
