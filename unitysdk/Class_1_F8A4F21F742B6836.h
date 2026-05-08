#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EB457EC35BBF1AAD.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

class Class_1_01E3578B80D3E1F9;
class Class_1_03F2053FCA365751;
class Class_1_204C453CC79AE4E0;
class Class_1_204C453CC79AE4E0_1;
class Class_1_204C453CC79AE4E0_2;
class Class_1_236FD73ABC492E3F;
class Class_1_50E88D52C3691096;
class Class_1_E068A47EE62497D2;
namespace MoleMole::Config { class ConfigFloorMetaData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F8A4F21F742B6836_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF64C920)
#define CLASS_1_F8A4F21F742B6836_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF64B110)
#define CLASS_1_F8A4F21F742B6836_METHOD_1_24A25E33E8D4A2E6_OFFSET UNITYSDK_OFFSET(0xF64C980)
#define CLASS_1_F8A4F21F742B6836_METHOD_1_6A15987D2A7C1E5E_OFFSET UNITYSDK_OFFSET(0xF64D350)
#define CLASS_1_F8A4F21F742B6836_METHOD_1_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0xF64B190)
#define CLASS_1_F8A4F21F742B6836_METHOD_1_BDA520D867D7D6E1_1_OFFSET UNITYSDK_OFFSET(0xF64D2B0)
#define CLASS_1_F8A4F21F742B6836_METHOD_1_BDA520D867D7D6E1_2_OFFSET UNITYSDK_OFFSET(0xF64D2D0)
#define CLASS_1_F8A4F21F742B6836_METHOD_1_BDA520D867D7D6E1_3_OFFSET UNITYSDK_OFFSET(0xF64D6D0)
#define CLASS_1_F8A4F21F742B6836_METHOD_1_BDA520D867D7D6E1_OFFSET UNITYSDK_OFFSET(0xF64D290)
#define CLASS_1_F8A4F21F742B6836_METHOD_1_CFF5E0EC96C3EF6F_1_OFFSET UNITYSDK_OFFSET(0xF64D6F0)
#define CLASS_1_F8A4F21F742B6836_METHOD_1_CFF5E0EC96C3EF6F_2_OFFSET UNITYSDK_OFFSET(0xF64D750)
#define CLASS_1_F8A4F21F742B6836_METHOD_1_CFF5E0EC96C3EF6F_3_OFFSET UNITYSDK_OFFSET(0xF64D7B0)
#define CLASS_1_F8A4F21F742B6836_METHOD_1_CFF5E0EC96C3EF6F_OFFSET UNITYSDK_OFFSET(0xF64D2F0)
#define CLASS_1_F8A4F21F742B6836_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xF64D6B0)
#define CLASS_1_F8A4F21F742B6836__CTOR_OFFSET UNITYSDK_OFFSET(0xF64D280)

inline static constexpr unsigned int Class_1_F8A4F21F742B6836_TypeDefinitionIndex = 47652;

class Class_1_F8A4F21F742B6836 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_11; // 0x10
	::System::String* Field_1_1; // 0x18
	::Class_1_E068A47EE62497D2* Field_1_13; // 0x20
	::Class_1_03F2053FCA365751* Field_1_5; // 0x28
	::MoleMole::Config::ConfigFloorMetaData* Field_1_6; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x38
	::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* Field_1_14; // 0x40
	::System::String* Field_1_3; // 0x48
	::System::String* Field_1_2; // 0x50
	::System::Collections::Generic::List_1<::Class_1_01E3578B80D3E1F9*>* Field_1_12; // 0x58
	::System::String* Field_1_10; // 0x60
	::Enum_3_EB457EC35BBF1AAD Field_1_8; // 0x68
	::System::Int32 Field_1_4; // 0x6C
	::System::Int32 Field_1_0; // 0x70
	::System::UInt64 Field_1_9; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8A4F21F742B6836__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_F8A4F21F742B6836_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F8A4F21F742B6836_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_204C453CC79AE4E0_1*>* Method_1_BDA520D867D7D6E1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_204C453CC79AE4E0_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8A4F21F742B6836_METHOD_1_BDA520D867D7D6E1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_50E88D52C3691096*>* Method_1_BDA520D867D7D6E1_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_50E88D52C3691096*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8A4F21F742B6836_METHOD_1_BDA520D867D7D6E1_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_204C453CC79AE4E0*>* Method_1_BDA520D867D7D6E1_2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_204C453CC79AE4E0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8A4F21F742B6836_METHOD_1_BDA520D867D7D6E1_2_OFFSET))(this);
	}

	::System::Void Method_1_CFF5E0EC96C3EF6F(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_204C453CC79AE4E0_1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_204C453CC79AE4E0_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_F8A4F21F742B6836_METHOD_1_CFF5E0EC96C3EF6F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_F8A4F21F742B6836_METHOD_1_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_24A25E33E8D4A2E6(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F8A4F21F742B6836_METHOD_1_24A25E33E8D4A2E6_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* Method_1_6A15987D2A7C1E5E()
	{
		return ((::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8A4F21F742B6836_METHOD_1_6A15987D2A7C1E5E_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8A4F21F742B6836_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_204C453CC79AE4E0_2*>* Method_1_BDA520D867D7D6E1_3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_204C453CC79AE4E0_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8A4F21F742B6836_METHOD_1_BDA520D867D7D6E1_3_OFFSET))(this);
	}

	::System::Void Method_1_CFF5E0EC96C3EF6F_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_50E88D52C3691096*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_50E88D52C3691096*>*))((::PBYTE)hIl2Cpp + CLASS_1_F8A4F21F742B6836_METHOD_1_CFF5E0EC96C3EF6F_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFF5E0EC96C3EF6F_2(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_204C453CC79AE4E0*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_204C453CC79AE4E0*>*))((::PBYTE)hIl2Cpp + CLASS_1_F8A4F21F742B6836_METHOD_1_CFF5E0EC96C3EF6F_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFF5E0EC96C3EF6F_3(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_204C453CC79AE4E0_2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_204C453CC79AE4E0_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_F8A4F21F742B6836_METHOD_1_CFF5E0EC96C3EF6F_3_OFFSET))(this, a1);
	}
};
