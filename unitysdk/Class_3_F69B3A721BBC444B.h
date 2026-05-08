#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_9EBF632273D0F552;
class Class_3_0C1E17B078496185;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F69B3A721BBC444B_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x14105270)
#define CLASS_3_F69B3A721BBC444B_METHOD_3_38E0EABD8C933E2D_OFFSET UNITYSDK_OFFSET(0x141057F0)
#define CLASS_3_F69B3A721BBC444B_METHOD_3_5930E1E4B05DF866_OFFSET UNITYSDK_OFFSET(0x14105630)
#define CLASS_3_F69B3A721BBC444B_METHOD_3_66CEE9A82F107F72_OFFSET UNITYSDK_OFFSET(0x14105B10)
#define CLASS_3_F69B3A721BBC444B_METHOD_3_7938C21935F395DB_OFFSET UNITYSDK_OFFSET(0x14105D70)
#define CLASS_3_F69B3A721BBC444B_METHOD_3_9AC500DE3DB1ECCF_OFFSET UNITYSDK_OFFSET(0x141054E0)
#define CLASS_3_F69B3A721BBC444B_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x141061E0)
#define CLASS_3_F69B3A721BBC444B_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x14105A80)
#define CLASS_3_F69B3A721BBC444B__CTOR_OFFSET UNITYSDK_OFFSET(0x14105490)

inline static constexpr unsigned int Class_3_F69B3A721BBC444B_TypeDefinitionIndex = 70164;

class Class_3_F69B3A721BBC444B : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F69B3A721BBC444B__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F69B3A721BBC444B_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_9AC500DE3DB1ECCF(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_F69B3A721BBC444B_METHOD_3_9AC500DE3DB1ECCF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5930E1E4B05DF866(::Class_3_0C1E17B078496185* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_0C1E17B078496185*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F69B3A721BBC444B_METHOD_3_5930E1E4B05DF866_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_38E0EABD8C933E2D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F69B3A721BBC444B_METHOD_3_38E0EABD8C933E2D_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F69B3A721BBC444B_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_66CEE9A82F107F72(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F69B3A721BBC444B_METHOD_3_66CEE9A82F107F72_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_7938C21935F395DB(::Class_3_0C1E17B078496185* a1, ::System::Int32 a2, ::System::Action_2<::System::Boolean, ::Class_1_9EBF632273D0F552*>* a3)
	{
		return ((::System::Boolean(*)(::Class_3_0C1E17B078496185*, ::System::Int32, ::System::Action_2<::System::Boolean, ::Class_1_9EBF632273D0F552*>*))((::PBYTE)hIl2Cpp + CLASS_3_F69B3A721BBC444B_METHOD_3_7938C21935F395DB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F69B3A721BBC444B_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}
};
