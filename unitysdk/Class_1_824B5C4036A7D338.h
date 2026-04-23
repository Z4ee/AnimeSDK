#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_552;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class IPoolableComponent; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_824B5C4036A7D338_CLEAR_OFFSET UNITYSDK_OFFSET(0x91C8480)
#define CLASS_1_824B5C4036A7D338_METHOD_1_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0x91C86F0)
#define CLASS_1_824B5C4036A7D338_METHOD_1_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x91C84F0)
#define CLASS_1_824B5C4036A7D338_METHOD_1_7EA127DE55AAA205_OFFSET UNITYSDK_OFFSET(0x91C88A0)
#define CLASS_1_824B5C4036A7D338_METHOD_1_9C1F668AC136A1A1_OFFSET UNITYSDK_OFFSET(0x91C8930)
#define CLASS_1_824B5C4036A7D338__CTOR_OFFSET UNITYSDK_OFFSET(0x91C89A0)

inline static constexpr unsigned int Class_1_824B5C4036A7D338_TypeDefinitionIndex = 54768;

class Class_1_824B5C4036A7D338 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::Client::IPoolableComponent*>* Field_1_2; // 0x10
	::UnityEngine::GameObject* Field_1_0; // 0x18
	::Collections::Pooled::PooledList_1<::Class_0_16E4307DCC419505_552*>* Field_1_5; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Boolean Field_1_1; // 0x2C
	::System::Single Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_824B5C4036A7D338__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_824B5C4036A7D338_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_824B5C4036A7D338_METHOD_1_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_1_0DA2366A4A7DBAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_824B5C4036A7D338_METHOD_1_0DA2366A4A7DBAA7_OFFSET))(this);
	}

	::System::Void Method_1_7EA127DE55AAA205(::Class_0_16E4307DCC419505_552* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_552*))((::PBYTE)hIl2Cpp + CLASS_1_824B5C4036A7D338_METHOD_1_7EA127DE55AAA205_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C1F668AC136A1A1(::Class_0_16E4307DCC419505_552* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_552*))((::PBYTE)hIl2Cpp + CLASS_1_824B5C4036A7D338_METHOD_1_9C1F668AC136A1A1_OFFSET))(this, a1);
	}
};
