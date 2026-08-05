#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_2EF7AC7A6C04963E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_2AEDC13E679EA200_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11E966C0)
#define CLASS_2_2AEDC13E679EA200_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11E96000)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x11E96D10)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x11E96080)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x11E95E60)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x11E95FF0)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11E96C80)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x11E96B20)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x11E95EF0)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_E6899EA6AE497B7E_OFFSET UNITYSDK_OFFSET(0x11E96720)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x11E94A80)
#define CLASS_2_2AEDC13E679EA200__CTOR_OFFSET UNITYSDK_OFFSET(0x11E96A90)

inline static constexpr unsigned int Class_2_2AEDC13E679EA200_TypeDefinitionIndex = 69494;

class Class_2_2AEDC13E679EA200 : public ::Class_1_8088D8743C1058EF
{
public:
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_1; // 0x30
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_0; // 0x50
	::Class_1_ED5EE319EA265EB6* Field_2_7; // 0x70
	::System::Boolean Field_2_6; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_2AEDC13E679EA200* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_2AEDC13E679EA200*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_E6899EA6AE497B7E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_E6899EA6AE497B7E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_2_2AEDC13E679EA200* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_2AEDC13E679EA200*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
