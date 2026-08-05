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

#define CLASS_2_C23483ED058006CE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13C4F420)
#define CLASS_2_C23483ED058006CE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13C4E4B0)
#define CLASS_2_C23483ED058006CE_METHOD_2_001296DDB7E01A54_OFFSET UNITYSDK_OFFSET(0x13C4F480)
#define CLASS_2_C23483ED058006CE_METHOD_2_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x13C4E530)
#define CLASS_2_C23483ED058006CE_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x13C4FA00)
#define CLASS_2_C23483ED058006CE_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13C4E4A0)
#define CLASS_2_C23483ED058006CE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13C4FD10)
#define CLASS_2_C23483ED058006CE_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x13C4FBB0)
#define CLASS_2_C23483ED058006CE_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x13C4E3A0)
#define CLASS_2_C23483ED058006CE_METHOD_2_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0x13C4E2B0)
#define CLASS_2_C23483ED058006CE_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x13C4D9C0)
#define CLASS_2_C23483ED058006CE__CTOR_OFFSET UNITYSDK_OFFSET(0x13C4F970)

inline static constexpr unsigned int Class_2_C23483ED058006CE_TypeDefinitionIndex = 66462;

class Class_2_C23483ED058006CE : public ::Class_1_8088D8743C1058EF
{
public:
	::System::String* Field_2_11; // 0x30
	::MoleMole::Config::EffectAutoDynamicValue* Field_2_10; // 0x38
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_7; // 0x40
	::Class_1_ED5EE319EA265EB6* Field_2_0; // 0x60
	::Class_1_ED5EE319EA265EB6* Field_2_4; // 0x68
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_6; // 0x70
	::Class_1_F157DD73C7C08100* Field_2_1; // 0x90
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_5; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_METHOD_2_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_001296DDB7E01A54(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_METHOD_2_001296DDB7E01A54_OFFSET))(this, a1, a2);
	}

	static ::Class_2_C23483ED058006CE* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_C23483ED058006CE*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_C23483ED058006CE* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_C23483ED058006CE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_METHOD_2_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23483ED058006CE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
