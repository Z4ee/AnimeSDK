#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_417A24669F2F689C;
class Class_2_C3C162BA7C6E9D7E;
namespace MoleMole::Config { class DynamicFloat; }

#define CLASS_1_D8E5417044FE13EF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x123A5D80)
#define CLASS_1_D8E5417044FE13EF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x123A4E80)
#define CLASS_1_D8E5417044FE13EF_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x123A4F00)
#define CLASS_1_D8E5417044FE13EF_METHOD_1_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0x123A4800)
#define CLASS_1_D8E5417044FE13EF_METHOD_1_6A03C0134352525C_OFFSET UNITYSDK_OFFSET(0x123A5DE0)
#define CLASS_1_D8E5417044FE13EF_METHOD_1_73131A6923E32428_OFFSET UNITYSDK_OFFSET(0x123A4930)
#define CLASS_1_D8E5417044FE13EF_METHOD_1_F00D5207B9BA6D1B_OFFSET UNITYSDK_OFFSET(0x123A46D0)
#define CLASS_1_D8E5417044FE13EF__CTOR_OFFSET UNITYSDK_OFFSET(0x123A62D0)

inline static constexpr unsigned int Class_1_D8E5417044FE13EF_TypeDefinitionIndex = 82405;

class Class_1_D8E5417044FE13EF : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_0; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_7; // 0x18
	::MoleMole::Config::DynamicFloat* Field_1_4; // 0x20
	::MoleMole::Config::DynamicFloat* Field_1_6; // 0x28
	::MoleMole::Config::DynamicFloat* Field_1_11; // 0x30
	::MoleMole::Config::DynamicFloat* Field_1_5; // 0x38
	::MoleMole::Config::DynamicFloat* Field_1_10; // 0x40
	::System::Int32 Field_1_2; // 0x48
	::MoleMole::Config::BuffGroupName Field_1_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F00D5207B9BA6D1B(::Class_1_417A24669F2F689C* a1, ::Class_2_C3C162BA7C6E9D7E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_417A24669F2F689C*, ::Class_2_C3C162BA7C6E9D7E*))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF_METHOD_1_F00D5207B9BA6D1B_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6A03C0134352525C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF_METHOD_1_6A03C0134352525C_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_3B5C6D652C514B37(::Class_1_417A24669F2F689C* a1)
	{
		return ((::System::Void(*)(::Class_1_417A24669F2F689C*))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF_METHOD_1_3B5C6D652C514B37_OFFSET))(a1);
	}

	::System::Void Method_1_73131A6923E32428(::System::Int32 a1, ::Class_1_417A24669F2F689C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_417A24669F2F689C*))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF_METHOD_1_73131A6923E32428_OFFSET))(this, a1, a2);
	}
};
