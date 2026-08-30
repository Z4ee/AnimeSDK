#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_7960AFC189023812___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC14B4E0)
#define CLASS_2_7960AFC189023812___C__DISPLAYCLASS5_0___TRYAPPLY_B__0_OFFSET UNITYSDK_OFFSET(0xC14B640)

inline static constexpr unsigned int Class_2_7960AFC189023812___c__DisplayClass5_0_TypeDefinitionIndex = 76980;

class Class_2_7960AFC189023812___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* bannedChimeraIDs; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7960AFC189023812___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryApply_b__0(::RPG::Client::ChimeraDuelChimeraData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelChimeraData*))((::PBYTE)hIl2Cpp + CLASS_2_7960AFC189023812___C__DISPLAYCLASS5_0___TRYAPPLY_B__0_OFFSET))(this, a1);
	}
};
