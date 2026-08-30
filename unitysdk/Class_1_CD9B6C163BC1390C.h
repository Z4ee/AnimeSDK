#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class ServantSkillRowData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CD9B6C163BC1390C_METHOD_1_D3D0568895BF60B0_OFFSET UNITYSDK_OFFSET(0x12E743E0)
#define CLASS_1_CD9B6C163BC1390C__CTOR_OFFSET UNITYSDK_OFFSET(0x12E745E0)

inline static constexpr unsigned int Class_1_CD9B6C163BC1390C_TypeDefinitionIndex = 62719;

class Class_1_CD9B6C163BC1390C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::ServantSkillRowData*>* PFBKNEFKOLB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD9B6C163BC1390C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_D3D0568895BF60B0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD9B6C163BC1390C_METHOD_1_D3D0568895BF60B0_OFFSET))(this, a1, a2);
	}
};
