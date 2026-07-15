#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BuildInAnimParam.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_84AEE1C12D6177DE_CLASS_1_273ED8FCC39D80E7_METHOD_1_8DB9E2155504EDD4_OFFSET UNITYSDK_OFFSET(0x16A009E0)
#define CLASS_1_84AEE1C12D6177DE_CLASS_1_273ED8FCC39D80E7__CTOR_OFFSET UNITYSDK_OFFSET(0x16A00E70)

inline static constexpr unsigned int Class_1_84AEE1C12D6177DE_Class_1_273ED8FCC39D80E7_TypeDefinitionIndex = 56395;

class Class_1_84AEE1C12D6177DE_Class_1_273ED8FCC39D80E7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::BuildInAnimParam>* Field_1_0; // 0x10
	::Il2CppArray<::System::Int32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_CLASS_1_273ED8FCC39D80E7__CTOR_OFFSET))(this);
	}

	static ::Class_1_84AEE1C12D6177DE_Class_1_273ED8FCC39D80E7* Method_1_8DB9E2155504EDD4()
	{
		return ((::Class_1_84AEE1C12D6177DE_Class_1_273ED8FCC39D80E7*(*)())((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_CLASS_1_273ED8FCC39D80E7_METHOD_1_8DB9E2155504EDD4_OFFSET))();
	}
};
