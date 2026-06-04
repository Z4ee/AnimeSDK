#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4E0C8860CC2DF441;
class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimAnimatorListenConfig; }

#define CLASS_1_4A36859935C7ABE9_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x13663190)
#define CLASS_1_4A36859935C7ABE9_METHOD_1_281255C747FAABE8_OFFSET UNITYSDK_OFFSET(0x136632D0)
#define CLASS_1_4A36859935C7ABE9_METHOD_1_2BC685AEA39CD9DE_OFFSET UNITYSDK_OFFSET(0x13663DD0)
#define CLASS_1_4A36859935C7ABE9_METHOD_1_37271A3CB72783D5_OFFSET UNITYSDK_OFFSET(0x13663910)
#define CLASS_1_4A36859935C7ABE9_METHOD_1_AB70FF25B0F862BF_OFFSET UNITYSDK_OFFSET(0x13663B30)
#define CLASS_1_4A36859935C7ABE9_METHOD_1_B7F991DC594C3820_OFFSET UNITYSDK_OFFSET(0x13663F30)
#define CLASS_1_4A36859935C7ABE9_METHOD_1_C0E6E6C9C428BAF7_OFFSET UNITYSDK_OFFSET(0x13663BB0)
#define CLASS_1_4A36859935C7ABE9_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x13663870)
#define CLASS_1_4A36859935C7ABE9__CTOR_OFFSET UNITYSDK_OFFSET(0x13662FF0)

inline static constexpr unsigned int Class_1_4A36859935C7ABE9_TypeDefinitionIndex = 71431;

class Class_1_4A36859935C7ABE9 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_0; // 0x10
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_1; // 0x18
	::Class_1_B4357A1C72BABC6B* Field_1_2; // 0x20
	::Class_3_1E4F9B0ED3BF21DE* Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_281255C747FAABE8(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_METHOD_1_281255C747FAABE8_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB70FF25B0F862BF(::System::Int32 a1, ::Class_1_4E0C8860CC2DF441* a2, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_4E0C8860CC2DF441*, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_METHOD_1_AB70FF25B0F862BF_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_37271A3CB72783D5(::RPG::GameCore::FiveDimAnimatorListenConfig* a1, ::System::Int32 a2, ::Class_1_4E0C8860CC2DF441* a3, ::Class_1_4E0C8860CC2DF441* a4, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimAnimatorListenConfig*, ::System::Int32, ::Class_1_4E0C8860CC2DF441*, ::Class_1_4E0C8860CC2DF441*, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_METHOD_1_37271A3CB72783D5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_C0E6E6C9C428BAF7(::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_METHOD_1_C0E6E6C9C428BAF7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_2BC685AEA39CD9DE(::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_METHOD_1_2BC685AEA39CD9DE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B7F991DC594C3820(::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>*, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4A36859935C7ABE9_METHOD_1_B7F991DC594C3820_OFFSET))(this, a1, a2, a3, a4);
	}
};
