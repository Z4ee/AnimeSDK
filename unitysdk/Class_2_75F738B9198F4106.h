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

#define CLASS_2_75F738B9198F4106_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x107527B0)
#define CLASS_2_75F738B9198F4106_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10751D50)
#define CLASS_2_75F738B9198F4106_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x10752C80)
#define CLASS_2_75F738B9198F4106_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x10751DD0)
#define CLASS_2_75F738B9198F4106_METHOD_2_82F37E818D9FE609_OFFSET UNITYSDK_OFFSET(0x10752810)
#define CLASS_2_75F738B9198F4106_METHOD_2_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x10751340)
#define CLASS_2_75F738B9198F4106_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x10751B20)
#define CLASS_2_75F738B9198F4106_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x10751CE0)
#define CLASS_2_75F738B9198F4106_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10752E30)
#define CLASS_2_75F738B9198F4106_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x10752EC0)
#define CLASS_2_75F738B9198F4106_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x10751BE0)
#define CLASS_2_75F738B9198F4106__CTOR_OFFSET UNITYSDK_OFFSET(0x10752BF0)

inline static constexpr unsigned int Class_2_75F738B9198F4106_TypeDefinitionIndex = 87618;

class Class_2_75F738B9198F4106 : public ::Class_1_8088D8743C1058EF
{
public:
	::Struct_2_B352564924EC2DFE<::UnityEngine::Vector3> Field_2_3; // 0x30
	::Struct_2_B352564924EC2DFE<::UnityEngine::Vector3> Field_2_2; // 0x50
	::Class_1_ED5EE319EA265EB6* Field_2_4; // 0x70
	::Class_1_F157DD73C7C08100* Field_2_0; // 0x78
	::Struct_2_B352564924EC2DFE<::System::String*> Field_2_1; // 0x80
	::MoleMole::Config::EffectAutoDynamicValue* Field_2_5; // 0xA0

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

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_75F738B9198F4106* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_75F738B9198F4106*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_2_75F738B9198F4106* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_75F738B9198F4106*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_82F37E818D9FE609(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_82F37E818D9FE609_OFFSET))(this, a1, a2);
	}
};
