#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_324;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BFDC66908917A5FC_METHOD_1_18C90B4C50EC21A3_OFFSET UNITYSDK_OFFSET(0x1E75F3A0)
#define CLASS_1_BFDC66908917A5FC_METHOD_1_B186592E7EC6FB80_OFFSET UNITYSDK_OFFSET(0x1E75EED0)
#define CLASS_1_BFDC66908917A5FC_METHOD_1_E76AA3F30C4E80FA_OFFSET UNITYSDK_OFFSET(0x1E75F250)
#define CLASS_1_BFDC66908917A5FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E75F1C0)

inline static constexpr unsigned int Class_1_BFDC66908917A5FC_TypeDefinitionIndex = 42410;

class Class_1_BFDC66908917A5FC : public ::System::Object
{
public:
	static ::Class_1_BFDC66908917A5FC** StaticGet_EFLHEPNNJJN()
	{
		return (::Class_1_BFDC66908917A5FC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFDC66908917A5FC_TypeDefinitionIndex)->GetStaticField(0x602A0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* MHCJMICIIBM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFDC66908917A5FC__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_324* Method_1_B186592E7EC6FB80()
	{
		return ((::Class_0_16E4307DCC419505_324*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFDC66908917A5FC_METHOD_1_B186592E7EC6FB80_OFFSET))();
	}

	::System::Object* Method_1_E76AA3F30C4E80FA(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_BFDC66908917A5FC_METHOD_1_E76AA3F30C4E80FA_OFFSET))(this, a1);
	}

	::System::Void Method_1_18C90B4C50EC21A3(::System::Type* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BFDC66908917A5FC_METHOD_1_18C90B4C50EC21A3_OFFSET))(this, a1, a2);
	}
};
