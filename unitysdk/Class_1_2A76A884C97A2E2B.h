#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_5FA9CCDDD9957726;
class Class_1_6657081C8A94CA44;
class Class_1_8C28E085C991E9A7;
class Class_1_B8726C3723B428F0;
class Class_1_F8A4F21F742B6836;
namespace MoleMole::Config { class ConfigCommonLevelData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2A76A884C97A2E2B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15CA7020)
#define CLASS_1_2A76A884C97A2E2B_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15CA63F0)
#define CLASS_1_2A76A884C97A2E2B_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x15CA6470)
#define CLASS_1_2A76A884C97A2E2B_METHOD_1_46BAE982627C8007_OFFSET UNITYSDK_OFFSET(0x15CA7080)
#define CLASS_1_2A76A884C97A2E2B__CTOR_OFFSET UNITYSDK_OFFSET(0x15CA75E0)

inline static constexpr unsigned int Class_1_2A76A884C97A2E2B_TypeDefinitionIndex = 65646;

class Class_1_2A76A884C97A2E2B : public ::System::Object
{
public:
	::Class_1_6657081C8A94CA44* Field_1_0; // 0x10
	::Class_1_F8A4F21F742B6836* Field_1_2; // 0x18
	::Class_1_B8726C3723B428F0* Field_1_5; // 0x20
	::Class_1_5FA9CCDDD9957726* Field_1_1; // 0x28
	::Class_1_8C28E085C991E9A7* Field_1_3; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCommonLevelData*>* Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A76A884C97A2E2B__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_2A76A884C97A2E2B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2A76A884C97A2E2B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_46BAE982627C8007(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2A76A884C97A2E2B_METHOD_1_46BAE982627C8007_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_2A76A884C97A2E2B_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}
};
