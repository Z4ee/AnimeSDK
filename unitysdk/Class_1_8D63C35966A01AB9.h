#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/System/Object.h"

class Class_1_FD27315C6663B104;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8D63C35966A01AB9_METHOD_1_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0x10C845B0)
#define CLASS_1_8D63C35966A01AB9_METHOD_1_1A54E3DF1B02B1B9_OFFSET UNITYSDK_OFFSET(0x10C846B0)
#define CLASS_1_8D63C35966A01AB9_METHOD_1_22A928A597DD1C1C_OFFSET UNITYSDK_OFFSET(0x10C84900)
#define CLASS_1_8D63C35966A01AB9_METHOD_1_33919CE494F377AD_OFFSET UNITYSDK_OFFSET(0x10C84740)
#define CLASS_1_8D63C35966A01AB9_METHOD_1_411584AA0B63B002_OFFSET UNITYSDK_OFFSET(0x10C84BC0)
#define CLASS_1_8D63C35966A01AB9_METHOD_1_44ADCF34FA579BEA_OFFSET UNITYSDK_OFFSET(0x10C84C80)
#define CLASS_1_8D63C35966A01AB9_METHOD_1_6CC07D0DC1B1BF2E_OFFSET UNITYSDK_OFFSET(0x10C84A80)
#define CLASS_1_8D63C35966A01AB9_METHOD_1_BC33670E1A203691_OFFSET UNITYSDK_OFFSET(0x10C84230)
#define CLASS_1_8D63C35966A01AB9_METHOD_1_E1513374C600EBEC_OFFSET UNITYSDK_OFFSET(0x10C84840)
#define CLASS_1_8D63C35966A01AB9_METHOD_1_F06FD280CF745BB0_OFFSET UNITYSDK_OFFSET(0x10C84410)
#define CLASS_1_8D63C35966A01AB9__CTOR_OFFSET UNITYSDK_OFFSET(0x10C84D70)

inline static constexpr unsigned int Class_1_8D63C35966A01AB9_TypeDefinitionIndex = 44055;

class Class_1_8D63C35966A01AB9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_FD27315C6663B104*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::PoolList_1<::Class_1_FD27315C6663B104*>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D63C35966A01AB9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_BC33670E1A203691(::RPG::GameCore::EntityRelationMemberType a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_FD27315C6663B104* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityRelationMemberType, ::RPG::GameCore::GameEntity*, ::Class_1_FD27315C6663B104*))((::PBYTE)hIl2Cpp + CLASS_1_8D63C35966A01AB9_METHOD_1_BC33670E1A203691_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F06FD280CF745BB0(::RPG::GameCore::GameEntity* a1, ::Class_1_FD27315C6663B104* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_FD27315C6663B104*))((::PBYTE)hIl2Cpp + CLASS_1_8D63C35966A01AB9_METHOD_1_F06FD280CF745BB0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8D63C35966A01AB9_METHOD_1_1622EF55C818E85D_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A54E3DF1B02B1B9(::Class_1_FD27315C6663B104* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD27315C6663B104*))((::PBYTE)hIl2Cpp + CLASS_1_8D63C35966A01AB9_METHOD_1_1A54E3DF1B02B1B9_OFFSET))(this, a1);
	}

	::Class_1_FD27315C6663B104* Method_1_33919CE494F377AD(::RPG::GameCore::EntityRelationType a1)
	{
		return ((::Class_1_FD27315C6663B104*(*)(::PVOID, ::RPG::GameCore::EntityRelationType))((::PBYTE)hIl2Cpp + CLASS_1_8D63C35966A01AB9_METHOD_1_33919CE494F377AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1513374C600EBEC(::Class_1_FD27315C6663B104* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD27315C6663B104*))((::PBYTE)hIl2Cpp + CLASS_1_8D63C35966A01AB9_METHOD_1_E1513374C600EBEC_OFFSET))(this, a1);
	}

	::Class_1_FD27315C6663B104* Method_1_22A928A597DD1C1C(::RPG::GameCore::EntityRelationType a1, ::System::Boolean a2)
	{
		return ((::Class_1_FD27315C6663B104*(*)(::PVOID, ::RPG::GameCore::EntityRelationType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D63C35966A01AB9_METHOD_1_22A928A597DD1C1C_OFFSET))(this, a1, a2);
	}

	::Class_1_FD27315C6663B104* Method_1_6CC07D0DC1B1BF2E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::EntityRelationType a2)
	{
		return ((::Class_1_FD27315C6663B104*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityRelationType))((::PBYTE)hIl2Cpp + CLASS_1_8D63C35966A01AB9_METHOD_1_6CC07D0DC1B1BF2E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_FD27315C6663B104*>* Method_1_411584AA0B63B002(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_FD27315C6663B104*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8D63C35966A01AB9_METHOD_1_411584AA0B63B002_OFFSET))(this, a1);
	}

	::System::Void Method_1_44ADCF34FA579BEA(::RPG::GameCore::EntityRelationType a1, ::System::Collections::Generic::List_1<::Class_1_FD27315C6663B104*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRelationType, ::System::Collections::Generic::List_1<::Class_1_FD27315C6663B104*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D63C35966A01AB9_METHOD_1_44ADCF34FA579BEA_OFFSET))(this, a1, a2);
	}
};
