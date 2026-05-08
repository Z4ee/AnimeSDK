#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_3FA5D0827BD681C1;
class Class_1_5FA9CCDDD9957726;
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6F6EB808C601ACFC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x127E5AA0)
#define CLASS_1_6F6EB808C601ACFC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x127E51E0)
#define CLASS_1_6F6EB808C601ACFC_METHOD_1_1943FA7E230C2956_OFFSET UNITYSDK_OFFSET(0x127E6100)
#define CLASS_1_6F6EB808C601ACFC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x127E60F0)
#define CLASS_1_6F6EB808C601ACFC_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x127E5260)
#define CLASS_1_6F6EB808C601ACFC_METHOD_1_8AAEAE494DBBAACE_OFFSET UNITYSDK_OFFSET(0x127E5B00)
#define CLASS_1_6F6EB808C601ACFC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x127E60E0)
#define CLASS_1_6F6EB808C601ACFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x127E60A0)
#define CLASS_1_6F6EB808C601ACFC__CTOR_OFFSET UNITYSDK_OFFSET(0x127E6090)

inline static constexpr unsigned int Class_1_6F6EB808C601ACFC_TypeDefinitionIndex = 53400;

class Class_1_6F6EB808C601ACFC : public ::System::Object
{
public:
	static ::Class_1_3FA5D0827BD681C1** StaticGet_Field_1_5()
	{
		return (::Class_1_3FA5D0827BD681C1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F6EB808C601ACFC_TypeDefinitionIndex)->GetStaticField(0x47F20);
	}
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>* Field_1_2; // 0x10
	::Class_1_5FA9CCDDD9957726* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicValue*>* Field_1_3; // 0x28
	::System::Int32 Field_1_0; // 0x30
	::System::Boolean Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F6EB808C601ACFC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F6EB808C601ACFC__CCTOR_OFFSET))();
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_6F6EB808C601ACFC_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F6EB808C601ACFC_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_5FA9CCDDD9957726* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FA9CCDDD9957726*))((::PBYTE)hIl2Cpp + CLASS_1_6F6EB808C601ACFC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8AAEAE494DBBAACE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F6EB808C601ACFC_METHOD_1_8AAEAE494DBBAACE_OFFSET))(this, a1, a2);
	}

	::Class_1_5FA9CCDDD9957726* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5FA9CCDDD9957726*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F6EB808C601ACFC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_1943FA7E230C2956(::Class_1_5FA9CCDDD9957726* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FA9CCDDD9957726*))((::PBYTE)hIl2Cpp + CLASS_1_6F6EB808C601ACFC_METHOD_1_1943FA7E230C2956_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_6F6EB808C601ACFC_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
