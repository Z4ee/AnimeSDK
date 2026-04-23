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

#define CLASS_1_61E6A7EA36922A99_METHOD_1_0E4ABAE0E0083B68_OFFSET UNITYSDK_OFFSET(0x90E7870)
#define CLASS_1_61E6A7EA36922A99_METHOD_1_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0x90E7C50)
#define CLASS_1_61E6A7EA36922A99_METHOD_1_1A54E3DF1B02B1B9_OFFSET UNITYSDK_OFFSET(0x90E7D50)
#define CLASS_1_61E6A7EA36922A99_METHOD_1_411584AA0B63B002_OFFSET UNITYSDK_OFFSET(0x90E82F0)
#define CLASS_1_61E6A7EA36922A99_METHOD_1_44ADCF34FA579BEA_OFFSET UNITYSDK_OFFSET(0x90E83B0)
#define CLASS_1_61E6A7EA36922A99_METHOD_1_6CC07D0DC1B1BF2E_OFFSET UNITYSDK_OFFSET(0x90E81B0)
#define CLASS_1_61E6A7EA36922A99_METHOD_1_8832696BEA081724_OFFSET UNITYSDK_OFFSET(0x90E7DE0)
#define CLASS_1_61E6A7EA36922A99_METHOD_1_A3750E5E9A0D89E5_OFFSET UNITYSDK_OFFSET(0x90E8000)
#define CLASS_1_61E6A7EA36922A99_METHOD_1_CF0EF72A03B510AB_OFFSET UNITYSDK_OFFSET(0x90E7F10)
#define CLASS_1_61E6A7EA36922A99_METHOD_1_EDE297510EA50F79_OFFSET UNITYSDK_OFFSET(0x90E7A80)
#define CLASS_1_61E6A7EA36922A99__CTOR_OFFSET UNITYSDK_OFFSET(0x90E84E0)

inline static constexpr unsigned int Class_1_61E6A7EA36922A99_TypeDefinitionIndex = 50757;

class Class_1_61E6A7EA36922A99 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_FD27315C6663B104*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::PoolList_1<::Class_1_FD27315C6663B104*>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61E6A7EA36922A99__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_0E4ABAE0E0083B68(::RPG::GameCore::EntityRelationMemberType a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_FD27315C6663B104* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityRelationMemberType, ::RPG::GameCore::GameEntity*, ::Class_1_FD27315C6663B104*))((::PBYTE)hIl2Cpp + CLASS_1_61E6A7EA36922A99_METHOD_1_0E4ABAE0E0083B68_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_EDE297510EA50F79(::RPG::GameCore::GameEntity* a1, ::Class_1_FD27315C6663B104* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_FD27315C6663B104*))((::PBYTE)hIl2Cpp + CLASS_1_61E6A7EA36922A99_METHOD_1_EDE297510EA50F79_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_61E6A7EA36922A99_METHOD_1_1622EF55C818E85D_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A54E3DF1B02B1B9(::Class_1_FD27315C6663B104* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD27315C6663B104*))((::PBYTE)hIl2Cpp + CLASS_1_61E6A7EA36922A99_METHOD_1_1A54E3DF1B02B1B9_OFFSET))(this, a1);
	}

	::Class_1_FD27315C6663B104* Method_1_8832696BEA081724(::RPG::GameCore::EntityRelationType a1)
	{
		return ((::Class_1_FD27315C6663B104*(*)(::PVOID, ::RPG::GameCore::EntityRelationType))((::PBYTE)hIl2Cpp + CLASS_1_61E6A7EA36922A99_METHOD_1_8832696BEA081724_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF0EF72A03B510AB(::Class_1_FD27315C6663B104* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD27315C6663B104*))((::PBYTE)hIl2Cpp + CLASS_1_61E6A7EA36922A99_METHOD_1_CF0EF72A03B510AB_OFFSET))(this, a1);
	}

	::Class_1_FD27315C6663B104* Method_1_A3750E5E9A0D89E5(::RPG::GameCore::EntityRelationType a1, ::System::Boolean a2)
	{
		return ((::Class_1_FD27315C6663B104*(*)(::PVOID, ::RPG::GameCore::EntityRelationType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_61E6A7EA36922A99_METHOD_1_A3750E5E9A0D89E5_OFFSET))(this, a1, a2);
	}

	::Class_1_FD27315C6663B104* Method_1_6CC07D0DC1B1BF2E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::EntityRelationType a2)
	{
		return ((::Class_1_FD27315C6663B104*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityRelationType))((::PBYTE)hIl2Cpp + CLASS_1_61E6A7EA36922A99_METHOD_1_6CC07D0DC1B1BF2E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_FD27315C6663B104*>* Method_1_411584AA0B63B002(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_FD27315C6663B104*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_61E6A7EA36922A99_METHOD_1_411584AA0B63B002_OFFSET))(this, a1);
	}

	::System::Void Method_1_44ADCF34FA579BEA(::RPG::GameCore::EntityRelationType a1, ::System::Collections::Generic::List_1<::Class_1_FD27315C6663B104*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRelationType, ::System::Collections::Generic::List_1<::Class_1_FD27315C6663B104*>*))((::PBYTE)hIl2Cpp + CLASS_1_61E6A7EA36922A99_METHOD_1_44ADCF34FA579BEA_OFFSET))(this, a1, a2);
	}
};
