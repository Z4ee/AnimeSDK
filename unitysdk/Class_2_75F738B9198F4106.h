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

#define CLASS_2_75F738B9198F4106_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178A9700)
#define CLASS_2_75F738B9198F4106_FROMFLX_OFFSET UNITYSDK_OFFSET(0x178A8CA0)
#define CLASS_2_75F738B9198F4106_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x178A9DC0)
#define CLASS_2_75F738B9198F4106_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x178A8D20)
#define CLASS_2_75F738B9198F4106_METHOD_2_82F37E818D9FE609_OFFSET UNITYSDK_OFFSET(0x178A9760)
#define CLASS_2_75F738B9198F4106_METHOD_2_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x178A8300)
#define CLASS_2_75F738B9198F4106_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x178A8AD0)
#define CLASS_2_75F738B9198F4106_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x178A8C90)
#define CLASS_2_75F738B9198F4106_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x178A9D30)
#define CLASS_2_75F738B9198F4106_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x178A9BD0)
#define CLASS_2_75F738B9198F4106_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x178A8B90)
#define CLASS_2_75F738B9198F4106__CTOR_OFFSET UNITYSDK_OFFSET(0x178A9B40)

inline static constexpr unsigned int Class_2_75F738B9198F4106_TypeDefinitionIndex = 51224;

class Class_2_75F738B9198F4106 : public ::Class_1_8088D8743C1058EF
{
public:
	::Class_1_F157DD73C7C08100* Field_2_1; // 0x30
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_7; // 0x38
	::MoleMole::Config::EffectAutoDynamicValue* Field_2_4; // 0x58
	::Class_1_ED5EE319EA265EB6* Field_2_5; // 0x60
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_6; // 0x68
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_0; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_75F738B9198F4106* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_75F738B9198F4106*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_82F37E818D9FE609(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_82F37E818D9FE609_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_2_75F738B9198F4106* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_75F738B9198F4106*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
