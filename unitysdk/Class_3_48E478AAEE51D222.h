#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75E63034C2ED40FA.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
class Class_3_E6ABB31B8050F1C6;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_48E478AAEE51D222_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0xC0C64E0)
#define CLASS_3_48E478AAEE51D222_METHOD_3_6EBB5E5434621FC5_OFFSET UNITYSDK_OFFSET(0xC0C6530)
#define CLASS_3_48E478AAEE51D222_METHOD_3_924A681277B8C797_OFFSET UNITYSDK_OFFSET(0xC0C6EF0)
#define CLASS_3_48E478AAEE51D222__CTOR_OFFSET UNITYSDK_OFFSET(0xC0C6F50)

inline static constexpr unsigned int Class_3_48E478AAEE51D222_TypeDefinitionIndex = 76989;

class Class_3_48E478AAEE51D222 : public ::Class_2_75E63034C2ED40FA
{
public:
	::Class_3_E6ABB31B8050F1C6* PDENFEFCAGN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48E478AAEE51D222__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_E6ABB31B8050F1C6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E6ABB31B8050F1C6*))((::PBYTE)hIl2Cpp + CLASS_3_48E478AAEE51D222_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_6EBB5E5434621FC5(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_48E478AAEE51D222_METHOD_3_6EBB5E5434621FC5_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_924A681277B8C797(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_48E478AAEE51D222_METHOD_3_924A681277B8C797_OFFSET))(this, a1, a2, a3);
	}
};
