#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75E63034C2ED40FA.h"

class Class_1_A7993FD8B166AE9B;
class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
class Class_3_E6ABB31B8050F1C6;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3FED23C9586EC066_METHOD_3_0B1B50AF6976A147_OFFSET UNITYSDK_OFFSET(0xB8B0120)
#define CLASS_3_3FED23C9586EC066_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0xB8B00C0)
#define CLASS_3_3FED23C9586EC066__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B0490)

inline static constexpr unsigned int Class_3_3FED23C9586EC066_TypeDefinitionIndex = 77024;

class Class_3_3FED23C9586EC066 : public ::Class_2_75E63034C2ED40FA
{
public:
	::Class_1_A7993FD8B166AE9B* LGEFCADNPMN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FED23C9586EC066__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_E6ABB31B8050F1C6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E6ABB31B8050F1C6*))((::PBYTE)hIl2Cpp + CLASS_3_3FED23C9586EC066_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0B1B50AF6976A147(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_3FED23C9586EC066_METHOD_3_0B1B50AF6976A147_OFFSET))(this, a1, a2, a3);
	}
};
