#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75E63034C2ED40FA.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C848EA82FA429E41_METHOD_3_924A681277B8C797_OFFSET UNITYSDK_OFFSET(0x19545880)
#define CLASS_3_C848EA82FA429E41_METHOD_3_BE29850B720C74B5_OFFSET UNITYSDK_OFFSET(0x19545460)
#define CLASS_3_C848EA82FA429E41__CTOR_OFFSET UNITYSDK_OFFSET(0x195458E0)

inline static constexpr unsigned int Class_3_C848EA82FA429E41_TypeDefinitionIndex = 76991;

class Class_3_C848EA82FA429E41 : public ::Class_2_75E63034C2ED40FA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C848EA82FA429E41__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_BE29850B720C74B5(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_C848EA82FA429E41_METHOD_3_BE29850B720C74B5_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_924A681277B8C797(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_C848EA82FA429E41_METHOD_3_924A681277B8C797_OFFSET))(this, a1, a2, a3);
	}
};
