#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4BF92DF76700F8F7_METHOD_3_1D6661B57C7D4A6D_OFFSET UNITYSDK_OFFSET(0x8CF1E50)
#define CLASS_3_4BF92DF76700F8F7__CTOR_OFFSET UNITYSDK_OFFSET(0x8CF2000)

inline static constexpr unsigned int Class_3_4BF92DF76700F8F7_TypeDefinitionIndex = 63019;

class Class_3_4BF92DF76700F8F7 : public ::Class_2_C994EBB81CDF74CE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4BF92DF76700F8F7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_1D6661B57C7D4A6D(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_4BF92DF76700F8F7_METHOD_3_1D6661B57C7D4A6D_OFFSET))(this, a1, a2, a3);
	}
};
