#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_1_4E0C8860CC2DF441;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimAnimatorListenConfig; }

#define CLASS_1_4A36859935C7ABE9_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x1064BD30)
#define CLASS_1_4A36859935C7ABE9_METHOD_1_37271A3CB72783D5_OFFSET UNITYSDK_OFFSET(0x1064C760)
#define CLASS_1_4A36859935C7ABE9_METHOD_1_7818988ABC82AE34_OFFSET UNITYSDK_OFFSET(0x1064CD30)
#define CLASS_1_4A36859935C7ABE9_METHOD_1_7D356A110AD8F40E_OFFSET UNITYSDK_OFFSET(0x1064CC10)
#define CLASS_1_4A36859935C7ABE9_METHOD_1_9D823981E0FCEE70_OFFSET UNITYSDK_OFFSET(0x1064CA00)
#define CLASS_1_4A36859935C7ABE9_METHOD_1_A31288DAB0A08F4C_OFFSET UNITYSDK_OFFSET(0x1064BE90)
#define CLASS_1_4A36859935C7ABE9_METHOD_1_AB70FF25B0F862BF_OFFSET UNITYSDK_OFFSET(0x1064C980)
#define CLASS_1_4A36859935C7ABE9_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1064C620)
#define CLASS_1_4A36859935C7ABE9__CTOR_OFFSET UNITYSDK_OFFSET(0x1064BB10)

inline static constexpr unsigned int Class_1_4A36859935C7ABE9_TypeDefinitionIndex = 62600;

class Class_1_4A36859935C7ABE9 : public ::System::Object
{
public:
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x10
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x18
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x20
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0x28

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_A31288DAB0A08F4C(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_METHOD_1_A31288DAB0A08F4C_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB70FF25B0F862BF(::System::Int32 a1, ::Class_1_4E0C8860CC2DF441* a2, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_4E0C8860CC2DF441*, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_METHOD_1_AB70FF25B0F862BF_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_37271A3CB72783D5(::RPG::GameCore::FiveDimAnimatorListenConfig* a1, ::System::Int32 a2, ::Class_1_4E0C8860CC2DF441* a3, ::Class_1_4E0C8860CC2DF441* a4, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimAnimatorListenConfig*, ::System::Int32, ::Class_1_4E0C8860CC2DF441*, ::Class_1_4E0C8860CC2DF441*, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_METHOD_1_37271A3CB72783D5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_9D823981E0FCEE70(::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_METHOD_1_9D823981E0FCEE70_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_7D356A110AD8F40E(::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_METHOD_1_7D356A110AD8F40E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7818988ABC82AE34(::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* a1, ::Class_2_9DD8A46984F1AFFD* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>*, ::Class_2_9DD8A46984F1AFFD*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_METHOD_1_7818988ABC82AE34_OFFSET))(this, a1, a2, a3, a4);
	}
};
