#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_24193089A4D2255F;
class Class_3_8BA693384C2819F6;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B582BC0A5BC956FE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x124BFCA0)
#define CLASS_3_B582BC0A5BC956FE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124BFCE0)
#define CLASS_3_B582BC0A5BC956FE__CTOR_OFFSET UNITYSDK_OFFSET(0x124BFC30)
#define CLASS_3_B582BC0A5BC956FE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x124C02D0)

inline static constexpr unsigned int Class_3_B582BC0A5BC956FE_TypeDefinitionIndex = 49674;

class Class_3_B582BC0A5BC956FE : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8BA693384C2819F6*>
{
public:
	::System::Collections::Generic::List_1<::Class_2_24193089A4D2255F*>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8BA693384C2819F6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8BA693384C2819F6*))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
