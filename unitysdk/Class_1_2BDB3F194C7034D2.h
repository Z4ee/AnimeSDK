#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_473;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class IPoolableComponent; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_2BDB3F194C7034D2_CLEAR_OFFSET UNITYSDK_OFFSET(0x87D91E0)
#define CLASS_1_2BDB3F194C7034D2_METHOD_1_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0x87D9450)
#define CLASS_1_2BDB3F194C7034D2_METHOD_1_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x87D9250)
#define CLASS_1_2BDB3F194C7034D2_METHOD_1_7EA127DE55AAA205_OFFSET UNITYSDK_OFFSET(0x87D9600)
#define CLASS_1_2BDB3F194C7034D2_METHOD_1_9C1F668AC136A1A1_OFFSET UNITYSDK_OFFSET(0x87D9690)
#define CLASS_1_2BDB3F194C7034D2__CTOR_OFFSET UNITYSDK_OFFSET(0x87D9700)

inline static constexpr unsigned int Class_1_2BDB3F194C7034D2_TypeDefinitionIndex = 48023;

class Class_1_2BDB3F194C7034D2 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::Il2CppArray<::RPG::Client::IPoolableComponent*>* Field_1_2; // 0x18
	::Collections::Pooled::PooledList_1<::Class_0_16E4307DCC419505_473*>* Field_1_4; // 0x20
	::System::Boolean Field_1_1; // 0x28
	::System::Int32 Field_1_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BDB3F194C7034D2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BDB3F194C7034D2_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BDB3F194C7034D2_METHOD_1_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_1_0DA2366A4A7DBAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BDB3F194C7034D2_METHOD_1_0DA2366A4A7DBAA7_OFFSET))(this);
	}

	::System::Void Method_1_7EA127DE55AAA205(::Class_0_16E4307DCC419505_473* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_473*))((::PBYTE)hIl2Cpp + CLASS_1_2BDB3F194C7034D2_METHOD_1_7EA127DE55AAA205_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C1F668AC136A1A1(::Class_0_16E4307DCC419505_473* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_473*))((::PBYTE)hIl2Cpp + CLASS_1_2BDB3F194C7034D2_METHOD_1_9C1F668AC136A1A1_OFFSET))(this, a1);
	}
};
