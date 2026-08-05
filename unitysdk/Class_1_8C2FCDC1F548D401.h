#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ConfigDungeonRegisterRuleBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8C2FCDC1F548D401_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E55EC0)
#define CLASS_1_8C2FCDC1F548D401_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18E55B10)
#define CLASS_1_8C2FCDC1F548D401_METHOD_1_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x18E55F20)
#define CLASS_1_8C2FCDC1F548D401_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x18E55B90)
#define CLASS_1_8C2FCDC1F548D401__CTOR_OFFSET UNITYSDK_OFFSET(0x18E56200)

inline static constexpr unsigned int Class_1_8C2FCDC1F548D401_TypeDefinitionIndex = 62963;

class Class_1_8C2FCDC1F548D401 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDungeonRegisterRuleBase*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C2FCDC1F548D401__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_8C2FCDC1F548D401_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C2FCDC1F548D401_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_8C2FCDC1F548D401_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C2FCDC1F548D401_METHOD_1_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}
};
