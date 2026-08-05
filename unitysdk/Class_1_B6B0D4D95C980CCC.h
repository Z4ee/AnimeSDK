#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1E55E07ADAD2E591.h"
#include "unitysdk/Enum_3_22FC528C31017F2F.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_3F84F94BB18519B8;
class Class_1_3FA5D0827BD681C1;
class Class_1_714AA90574E203E0;
class Class_1_B85817849BC6CF88;
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace MoleMole::Config { class ConfigGadgetMetaData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B6B0D4D95C980CCC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193C8FC0)
#define CLASS_1_B6B0D4D95C980CCC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x193C77A0)
#define CLASS_1_B6B0D4D95C980CCC_METHOD_1_0AE66A01B709FE4C_OFFSET UNITYSDK_OFFSET(0x193C9020)
#define CLASS_1_B6B0D4D95C980CCC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x193C9A40)
#define CLASS_1_B6B0D4D95C980CCC_METHOD_1_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x193C7820)
#define CLASS_1_B6B0D4D95C980CCC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x193C9A30)
#define CLASS_1_B6B0D4D95C980CCC_METHOD_1_A168E12C6BB2E0E2_OFFSET UNITYSDK_OFFSET(0x193C9A50)
#define CLASS_1_B6B0D4D95C980CCC__CCTOR_OFFSET UNITYSDK_OFFSET(0x193C99F0)
#define CLASS_1_B6B0D4D95C980CCC__CTOR_OFFSET UNITYSDK_OFFSET(0x193C99E0)

inline static constexpr unsigned int Class_1_B6B0D4D95C980CCC_TypeDefinitionIndex = 42313;

class Class_1_B6B0D4D95C980CCC : public ::System::Object
{
public:
	static ::Class_1_3FA5D0827BD681C1** StaticGet_Field_1_18()
	{
		return (::Class_1_3FA5D0827BD681C1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6B0D4D95C980CCC_TypeDefinitionIndex)->GetStaticField(0x514F0);
	}
	::System::Collections::Generic::List_1<::System::String*>* Field_1_12; // 0x10
	::Class_1_714AA90574E203E0* Field_1_19; // 0x18
	::MoleMole::Config::ConfigGadgetMetaData* Field_1_14; // 0x20
	::Class_1_3F84F94BB18519B8* Field_1_13; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicValue*>* Field_1_15; // 0x30
	::Class_1_B85817849BC6CF88* Field_1_17; // 0x38
	::System::Int32 Field_1_1; // 0x40
	::System::Int32 Field_1_8; // 0x44
	::System::Int32 Field_1_10; // 0x48
	::System::Int32 Field_1_11; // 0x4C
	::System::Int32 Field_1_5; // 0x50
	::UnityEngine::Vector3 Field_1_6; // 0x54
	::System::Int32 Field_1_9; // 0x60
	::Enum_3_22FC528C31017F2F Field_1_0; // 0x64
	::UnityEngine::Vector3 Field_1_7; // 0x68
	::Enum_3_1E55E07ADAD2E591 Field_1_4; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B0D4D95C980CCC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6B0D4D95C980CCC__CCTOR_OFFSET))();
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_B6B0D4D95C980CCC_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B6B0D4D95C980CCC_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_B85817849BC6CF88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B85817849BC6CF88*))((::PBYTE)hIl2Cpp + CLASS_1_B6B0D4D95C980CCC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0AE66A01B709FE4C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B6B0D4D95C980CCC_METHOD_1_0AE66A01B709FE4C_OFFSET))(this, a1, a2);
	}

	::Class_1_B85817849BC6CF88* Method_1_24748FC20F375725()
	{
		return ((::Class_1_B85817849BC6CF88*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B0D4D95C980CCC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean Method_1_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_B6B0D4D95C980CCC_METHOD_1_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_A168E12C6BB2E0E2(::Class_1_B85817849BC6CF88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B85817849BC6CF88*))((::PBYTE)hIl2Cpp + CLASS_1_B6B0D4D95C980CCC_METHOD_1_A168E12C6BB2E0E2_OFFSET))(this, a1);
	}
};
