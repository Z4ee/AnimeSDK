#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_30;
class Class_1_BBDB4FC982910AAE;
class Class_1_D22BBD5AAECFE505;
namespace Entitas { class IEntity; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F878001C4B922748_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A4BC30)
#define CLASS_1_F878001C4B922748_GET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x10A4BE90)
#define CLASS_1_F878001C4B922748_METHOD_1_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0x10A4BA50)
#define CLASS_1_F878001C4B922748_METHOD_1_756ABE9091C7642E_OFFSET UNITYSDK_OFFSET(0x10A4B9F0)
#define CLASS_1_F878001C4B922748_METHOD_1_B857A14BD8816D61_OFFSET UNITYSDK_OFFSET(0x10A4B870)
#define CLASS_1_F878001C4B922748_SET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x10A4BEA0)
#define CLASS_1_F878001C4B922748_TICK_OFFSET UNITYSDK_OFFSET(0x10A4BA90)
#define CLASS_1_F878001C4B922748__CTOR_OFFSET UNITYSDK_OFFSET(0x10A4B7C0)

inline static constexpr unsigned int Class_1_F878001C4B922748_TypeDefinitionIndex = 62304;

class Class_1_F878001C4B922748 : public ::System::Object
{
public:
	::Class_1_BBDB4FC982910AAE* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_D22BBD5AAECFE505*>* Field_1_2; // 0x18
	::System::Int32 _EntityRuntimeID_k__BackingField; // 0x20

	::System::Void _ctor(::Class_1_BBDB4FC982910AAE* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BBDB4FC982910AAE*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F878001C4B922748__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B857A14BD8816D61(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_F878001C4B922748_METHOD_1_B857A14BD8816D61_OFFSET))(this, a1);
	}

	::Entitas::IEntity* Method_1_756ABE9091C7642E()
	{
		return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F878001C4B922748_METHOD_1_756ABE9091C7642E_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_30* Method_1_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F878001C4B922748_METHOD_1_218F2836DA51D562_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F878001C4B922748_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F878001C4B922748_DISPOSE_OFFSET))(this);
	}

	::System::Int32 get_EntityRuntimeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F878001C4B922748_GET_ENTITYRUNTIMEID_OFFSET))(this);
	}

	::System::Void set_EntityRuntimeID(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F878001C4B922748_SET_ENTITYRUNTIMEID_OFFSET))(this, value);
	}
};
