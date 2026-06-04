#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_37DBD84F940778DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B7C440)
#define CLASS_1_37DBD84F940778DD_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x13B7C680)
#define CLASS_1_37DBD84F940778DD_METHOD_1_7003271FF3C0F5CC_OFFSET UNITYSDK_OFFSET(0x13B7CCF0)
#define CLASS_1_37DBD84F940778DD_METHOD_1_75FDA1D0BC8497ED_OFFSET UNITYSDK_OFFSET(0x13B7C6D0)
#define CLASS_1_37DBD84F940778DD_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x13B7BEE0)
#define CLASS_1_37DBD84F940778DD_METHOD_1_F64A108D4C7DAA57_OFFSET UNITYSDK_OFFSET(0x13B7CDA0)
#define CLASS_1_37DBD84F940778DD_TICK_OFFSET UNITYSDK_OFFSET(0x13B7BE80)
#define CLASS_1_37DBD84F940778DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B7CE10)
#define CLASS_1_37DBD84F940778DD__CTOR_OFFSET UNITYSDK_OFFSET(0x13B7BD60)

inline static constexpr unsigned int Class_1_37DBD84F940778DD_TypeDefinitionIndex = 63870;

class Class_1_37DBD84F940778DD : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_37DBD84F940778DD_TypeDefinitionIndex)->GetStaticField(0x12460);
	}
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_2; // 0x18
	::RPG::GameCore::GameWorld* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_6; // 0x38
	::System::Boolean Field_1_7; // 0x40

	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_37DBD84F940778DD__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_37DBD84F940778DD__CCTOR_OFFSET))();
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_37DBD84F940778DD_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37DBD84F940778DD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_37DBD84F940778DD_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_75FDA1D0BC8497ED(::System::Boolean a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_37DBD84F940778DD_METHOD_1_75FDA1D0BC8497ED_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37DBD84F940778DD_METHOD_1_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Void Method_1_7003271FF3C0F5CC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_37DBD84F940778DD_METHOD_1_7003271FF3C0F5CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_F64A108D4C7DAA57(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_37DBD84F940778DD_METHOD_1_F64A108D4C7DAA57_OFFSET))(this, a1);
	}
};
