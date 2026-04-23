#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_284;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BFDC66908917A5FC_METHOD_1_18C90B4C50EC21A3_OFFSET UNITYSDK_OFFSET(0x19DB5620)
#define CLASS_1_BFDC66908917A5FC_METHOD_1_41055516364D36FC_OFFSET UNITYSDK_OFFSET(0x19DB5540)
#define CLASS_1_BFDC66908917A5FC_METHOD_1_B186592E7EC6FB80_OFFSET UNITYSDK_OFFSET(0x19DB5250)
#define CLASS_1_BFDC66908917A5FC__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB54B0)

inline static constexpr unsigned int Class_1_BFDC66908917A5FC_TypeDefinitionIndex = 39808;

class Class_1_BFDC66908917A5FC : public ::System::Object
{
public:
	static ::Class_1_BFDC66908917A5FC** StaticGet_Field_1_0()
	{
		return (::Class_1_BFDC66908917A5FC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFDC66908917A5FC_TypeDefinitionIndex)->GetStaticField(0x22B10);
	}
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFDC66908917A5FC__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_284* Method_1_B186592E7EC6FB80()
	{
		return ((::Class_0_16E4307DCC419505_284*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFDC66908917A5FC_METHOD_1_B186592E7EC6FB80_OFFSET))();
	}

	::System::Object* Method_1_41055516364D36FC(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_BFDC66908917A5FC_METHOD_1_41055516364D36FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_18C90B4C50EC21A3(::System::Type* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BFDC66908917A5FC_METHOD_1_18C90B4C50EC21A3_OFFSET))(this, a1, a2);
	}
};
