#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_37DBD84F940778DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D141A0)
#define CLASS_1_37DBD84F940778DD_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x15D143E0)
#define CLASS_1_37DBD84F940778DD_METHOD_1_5BD6755423AFF5A2_OFFSET UNITYSDK_OFFSET(0x15D14AF0)
#define CLASS_1_37DBD84F940778DD_METHOD_1_5D6CD31BA2372F92_OFFSET UNITYSDK_OFFSET(0x15D13CC0)
#define CLASS_1_37DBD84F940778DD_METHOD_1_7003271FF3C0F5CC_OFFSET UNITYSDK_OFFSET(0x15D14A40)
#define CLASS_1_37DBD84F940778DD_METHOD_1_75FDA1D0BC8497ED_OFFSET UNITYSDK_OFFSET(0x15D14430)
#define CLASS_1_37DBD84F940778DD_TICK_OFFSET UNITYSDK_OFFSET(0x15D13C60)
#define CLASS_1_37DBD84F940778DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D14B60)
#define CLASS_1_37DBD84F940778DD__CTOR_OFFSET UNITYSDK_OFFSET(0x15D13B40)

inline static constexpr unsigned int Class_1_37DBD84F940778DD_TypeDefinitionIndex = 68284;

class Class_1_37DBD84F940778DD : public ::System::Object
{
public:
	static ::System::Single* StaticGet_PFMGGKEBLCC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_37DBD84F940778DD_TypeDefinitionIndex)->GetStaticField(0x7540);
	}
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* DPPOMJHENPM; // 0x10
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* EKJCECJEIFP; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* OGGKEINNCFD; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* EHEHGMDHNGP; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* PODMJJANGML; // 0x38
	::System::Boolean FFDNCNPILJP; // 0x40

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

	::System::Void Method_1_5D6CD31BA2372F92()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37DBD84F940778DD_METHOD_1_5D6CD31BA2372F92_OFFSET))(this);
	}

	::System::Void Method_1_7003271FF3C0F5CC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_37DBD84F940778DD_METHOD_1_7003271FF3C0F5CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_5BD6755423AFF5A2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_37DBD84F940778DD_METHOD_1_5BD6755423AFF5A2_OFFSET))(this, a1);
	}
};
