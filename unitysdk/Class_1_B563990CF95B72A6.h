#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/System/Object.h"

class Class_1_93D49642C859FF1D;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B563990CF95B72A6_METHOD_1_0F07B2660402D7E7_OFFSET UNITYSDK_OFFSET(0x1608EC60)
#define CLASS_1_B563990CF95B72A6_METHOD_1_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x1608E8B0)
#define CLASS_1_B563990CF95B72A6_METHOD_1_411584AA0B63B002_OFFSET UNITYSDK_OFFSET(0x1608EFA0)
#define CLASS_1_B563990CF95B72A6_METHOD_1_4E8FB664AE370D1D_OFFSET UNITYSDK_OFFSET(0x1608EE60)
#define CLASS_1_B563990CF95B72A6_METHOD_1_721DF9FF043B9D75_OFFSET UNITYSDK_OFFSET(0x1608E2D0)
#define CLASS_1_B563990CF95B72A6_METHOD_1_940918FEDA1F3064_OFFSET UNITYSDK_OFFSET(0x1608EB50)
#define CLASS_1_B563990CF95B72A6_METHOD_1_944FEE10DF3D2DA7_OFFSET UNITYSDK_OFFSET(0x1608E570)
#define CLASS_1_B563990CF95B72A6_METHOD_1_D6314456899EFD4E_OFFSET UNITYSDK_OFFSET(0x1608E960)
#define CLASS_1_B563990CF95B72A6_METHOD_1_DC30AF9835EF378E_OFFSET UNITYSDK_OFFSET(0x1608F050)
#define CLASS_1_B563990CF95B72A6_METHOD_1_EA9B142E5A847C05_OFFSET UNITYSDK_OFFSET(0x1608E7A0)
#define CLASS_1_B563990CF95B72A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1608F1E0)

inline static constexpr unsigned int Class_1_B563990CF95B72A6_TypeDefinitionIndex = 52536;

class Class_1_B563990CF95B72A6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_93D49642C859FF1D*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::PoolList_1<::Class_1_93D49642C859FF1D*>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B563990CF95B72A6__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_721DF9FF043B9D75(::RPG::GameCore::EntityRelationMemberType a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_93D49642C859FF1D* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityRelationMemberType, ::RPG::GameCore::GameEntity*, ::Class_1_93D49642C859FF1D*))((::PBYTE)hIl2Cpp + CLASS_1_B563990CF95B72A6_METHOD_1_721DF9FF043B9D75_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_944FEE10DF3D2DA7(::RPG::GameCore::GameEntity* a1, ::Class_1_93D49642C859FF1D* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_93D49642C859FF1D*))((::PBYTE)hIl2Cpp + CLASS_1_B563990CF95B72A6_METHOD_1_944FEE10DF3D2DA7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EA9B142E5A847C05(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B563990CF95B72A6_METHOD_1_EA9B142E5A847C05_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B10EBB5408EF02E(::Class_1_93D49642C859FF1D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93D49642C859FF1D*))((::PBYTE)hIl2Cpp + CLASS_1_B563990CF95B72A6_METHOD_1_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::Class_1_93D49642C859FF1D* Method_1_D6314456899EFD4E(::RPG::GameCore::EntityRelationType a1)
	{
		return ((::Class_1_93D49642C859FF1D*(*)(::PVOID, ::RPG::GameCore::EntityRelationType))((::PBYTE)hIl2Cpp + CLASS_1_B563990CF95B72A6_METHOD_1_D6314456899EFD4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_940918FEDA1F3064(::Class_1_93D49642C859FF1D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93D49642C859FF1D*))((::PBYTE)hIl2Cpp + CLASS_1_B563990CF95B72A6_METHOD_1_940918FEDA1F3064_OFFSET))(this, a1);
	}

	::Class_1_93D49642C859FF1D* Method_1_0F07B2660402D7E7(::RPG::GameCore::EntityRelationType a1, ::System::Boolean a2)
	{
		return ((::Class_1_93D49642C859FF1D*(*)(::PVOID, ::RPG::GameCore::EntityRelationType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B563990CF95B72A6_METHOD_1_0F07B2660402D7E7_OFFSET))(this, a1, a2);
	}

	::Class_1_93D49642C859FF1D* Method_1_4E8FB664AE370D1D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::EntityRelationType a2)
	{
		return ((::Class_1_93D49642C859FF1D*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityRelationType))((::PBYTE)hIl2Cpp + CLASS_1_B563990CF95B72A6_METHOD_1_4E8FB664AE370D1D_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_93D49642C859FF1D*>* Method_1_411584AA0B63B002(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_93D49642C859FF1D*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B563990CF95B72A6_METHOD_1_411584AA0B63B002_OFFSET))(this, a1);
	}

	::System::Void Method_1_DC30AF9835EF378E(::RPG::GameCore::EntityRelationType a1, ::System::Collections::Generic::List_1<::Class_1_93D49642C859FF1D*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRelationType, ::System::Collections::Generic::List_1<::Class_1_93D49642C859FF1D*>*))((::PBYTE)hIl2Cpp + CLASS_1_B563990CF95B72A6_METHOD_1_DC30AF9835EF378E_OFFSET))(this, a1, a2);
	}
};
