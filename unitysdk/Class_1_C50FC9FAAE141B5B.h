#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C50FC9FAAE141B5B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1B78E0)
#define CLASS_1_C50FC9FAAE141B5B_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xD1B7B20)
#define CLASS_1_C50FC9FAAE141B5B_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0xD1B74B0)
#define CLASS_1_C50FC9FAAE141B5B_METHOD_1_D815CB60AB918789_OFFSET UNITYSDK_OFFSET(0xD1B82A0)
#define CLASS_1_C50FC9FAAE141B5B_METHOD_1_F64A108D4C7DAA57_OFFSET UNITYSDK_OFFSET(0xD1B8310)
#define CLASS_1_C50FC9FAAE141B5B_METHOD_1_FF744B46CC7C2A46_OFFSET UNITYSDK_OFFSET(0xD1B7B70)
#define CLASS_1_C50FC9FAAE141B5B_TICK_OFFSET UNITYSDK_OFFSET(0xD1B7450)
#define CLASS_1_C50FC9FAAE141B5B__CCTOR_OFFSET UNITYSDK_OFFSET(0xD7B2120)
#define CLASS_1_C50FC9FAAE141B5B__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B7330)

inline static constexpr unsigned int Class_1_C50FC9FAAE141B5B_TypeDefinitionIndex = 55732;

class Class_1_C50FC9FAAE141B5B : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C50FC9FAAE141B5B_TypeDefinitionIndex)->GetStaticField(0x10DF0);
	}
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_4; // 0x10
	::RPG::GameCore::GameWorld* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_3; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* Field_1_1; // 0x38
	::System::Boolean Field_1_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_C50FC9FAAE141B5B__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C50FC9FAAE141B5B__CCTOR_OFFSET))();
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C50FC9FAAE141B5B_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50FC9FAAE141B5B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C50FC9FAAE141B5B_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF744B46CC7C2A46(::System::Boolean a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C50FC9FAAE141B5B_METHOD_1_FF744B46CC7C2A46_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50FC9FAAE141B5B_METHOD_1_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Void Method_1_D815CB60AB918789(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C50FC9FAAE141B5B_METHOD_1_D815CB60AB918789_OFFSET))(this, a1);
	}

	::System::Void Method_1_F64A108D4C7DAA57(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C50FC9FAAE141B5B_METHOD_1_F64A108D4C7DAA57_OFFSET))(this, a1);
	}
};
