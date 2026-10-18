#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_11547817CAC659C4.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftDirectionType.h"
#include "unitysdk/Struct_2_BDFB1B98046CDD46.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_D05699509194BF9B;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_99E7DA6DA7D835C7_METHOD_3_785ACCD0CB57E314_OFFSET UNITYSDK_OFFSET(0x1C56B5C0)
#define CLASS_3_99E7DA6DA7D835C7_METHOD_3_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1C56B570)
#define CLASS_3_99E7DA6DA7D835C7__CTOR_OFFSET UNITYSDK_OFFSET(0x1C555E60)

inline static constexpr unsigned int Class_3_99E7DA6DA7D835C7_TypeDefinitionIndex = 41779;

class Class_3_99E7DA6DA7D835C7 : public ::Class_2_11547817CAC659C4
{
public:
	::RPG::Client::MechCraft::MechCraftDirectionType BGNACBGBMHG; // 0x18
	::System::Single OHEALPINCGL; // 0x1C
	::UnityEngine::Vector2Int JGLJCHGAIHP; // 0x20

	::System::Void _ctor(::System::Single a1, ::RPG::Client::MechCraft::MechCraftDirectionType a2, ::UnityEngine::Vector2Int a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::Client::MechCraft::MechCraftDirectionType, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_3_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7_METHOD_3_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* Method_3_785ACCD0CB57E314(::Class_1_D05699509194BF9B* a1, ::Struct_2_BDFB1B98046CDD46 a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Class_1_D05699509194BF9B*, ::Struct_2_BDFB1B98046CDD46))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7_METHOD_3_785ACCD0CB57E314_OFFSET))(this, a1, a2);
	}
};
