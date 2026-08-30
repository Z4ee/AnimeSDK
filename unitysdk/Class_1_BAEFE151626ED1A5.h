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

#define CLASS_1_BAEFE151626ED1A5_METHOD_1_397E0CAA8DD2A7DE_OFFSET UNITYSDK_OFFSET(0x178F01F0)
#define CLASS_1_BAEFE151626ED1A5_METHOD_1_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x178EFEA0)
#define CLASS_1_BAEFE151626ED1A5_METHOD_1_411584AA0B63B002_OFFSET UNITYSDK_OFFSET(0x178F0560)
#define CLASS_1_BAEFE151626ED1A5_METHOD_1_4E8FB664AE370D1D_OFFSET UNITYSDK_OFFSET(0x178F0420)
#define CLASS_1_BAEFE151626ED1A5_METHOD_1_940918FEDA1F3064_OFFSET UNITYSDK_OFFSET(0x178F00E0)
#define CLASS_1_BAEFE151626ED1A5_METHOD_1_944FEE10DF3D2DA7_OFFSET UNITYSDK_OFFSET(0x178EFB60)
#define CLASS_1_BAEFE151626ED1A5_METHOD_1_D773F4B153AA32D7_OFFSET UNITYSDK_OFFSET(0x178EFF50)
#define CLASS_1_BAEFE151626ED1A5_METHOD_1_DA701A5A1A8E286E_OFFSET UNITYSDK_OFFSET(0x178EF890)
#define CLASS_1_BAEFE151626ED1A5_METHOD_1_DC30AF9835EF378E_OFFSET UNITYSDK_OFFSET(0x178F0610)
#define CLASS_1_BAEFE151626ED1A5_METHOD_1_EA9B142E5A847C05_OFFSET UNITYSDK_OFFSET(0x178EFD90)
#define CLASS_1_BAEFE151626ED1A5__CTOR_OFFSET UNITYSDK_OFFSET(0x178F07D0)

inline static constexpr unsigned int Class_1_BAEFE151626ED1A5_TypeDefinitionIndex = 55233;

class Class_1_BAEFE151626ED1A5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_93D49642C859FF1D*>* HPGMBOKOGAA; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::PoolList_1<::Class_1_93D49642C859FF1D*>*>* IFIOACKDCIF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAEFE151626ED1A5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_DA701A5A1A8E286E(::RPG::GameCore::EntityRelationMemberType a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_93D49642C859FF1D* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityRelationMemberType, ::RPG::GameCore::GameEntity*, ::Class_1_93D49642C859FF1D*))((::PBYTE)hIl2Cpp + CLASS_1_BAEFE151626ED1A5_METHOD_1_DA701A5A1A8E286E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_944FEE10DF3D2DA7(::RPG::GameCore::GameEntity* a1, ::Class_1_93D49642C859FF1D* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_93D49642C859FF1D*))((::PBYTE)hIl2Cpp + CLASS_1_BAEFE151626ED1A5_METHOD_1_944FEE10DF3D2DA7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EA9B142E5A847C05(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BAEFE151626ED1A5_METHOD_1_EA9B142E5A847C05_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B10EBB5408EF02E(::Class_1_93D49642C859FF1D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93D49642C859FF1D*))((::PBYTE)hIl2Cpp + CLASS_1_BAEFE151626ED1A5_METHOD_1_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::Class_1_93D49642C859FF1D* Method_1_D773F4B153AA32D7(::RPG::GameCore::EntityRelationType a1)
	{
		return ((::Class_1_93D49642C859FF1D*(*)(::PVOID, ::RPG::GameCore::EntityRelationType))((::PBYTE)hIl2Cpp + CLASS_1_BAEFE151626ED1A5_METHOD_1_D773F4B153AA32D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_940918FEDA1F3064(::Class_1_93D49642C859FF1D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93D49642C859FF1D*))((::PBYTE)hIl2Cpp + CLASS_1_BAEFE151626ED1A5_METHOD_1_940918FEDA1F3064_OFFSET))(this, a1);
	}

	::Class_1_93D49642C859FF1D* Method_1_397E0CAA8DD2A7DE(::RPG::GameCore::EntityRelationType a1, ::System::Boolean a2)
	{
		return ((::Class_1_93D49642C859FF1D*(*)(::PVOID, ::RPG::GameCore::EntityRelationType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BAEFE151626ED1A5_METHOD_1_397E0CAA8DD2A7DE_OFFSET))(this, a1, a2);
	}

	::Class_1_93D49642C859FF1D* Method_1_4E8FB664AE370D1D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::EntityRelationType a2)
	{
		return ((::Class_1_93D49642C859FF1D*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityRelationType))((::PBYTE)hIl2Cpp + CLASS_1_BAEFE151626ED1A5_METHOD_1_4E8FB664AE370D1D_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_93D49642C859FF1D*>* Method_1_411584AA0B63B002(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_93D49642C859FF1D*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BAEFE151626ED1A5_METHOD_1_411584AA0B63B002_OFFSET))(this, a1);
	}

	::System::Void Method_1_DC30AF9835EF378E(::RPG::GameCore::EntityRelationType a1, ::System::Collections::Generic::List_1<::Class_1_93D49642C859FF1D*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRelationType, ::System::Collections::Generic::List_1<::Class_1_93D49642C859FF1D*>*))((::PBYTE)hIl2Cpp + CLASS_1_BAEFE151626ED1A5_METHOD_1_DC30AF9835EF378E_OFFSET))(this, a1, a2);
	}
};
