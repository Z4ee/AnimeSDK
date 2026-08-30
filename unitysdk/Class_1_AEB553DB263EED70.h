#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_AEB553DB263EED70__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7F6BE0)

inline static constexpr unsigned int Class_1_AEB553DB263EED70_TypeDefinitionIndex = 10361;

class Class_1_AEB553DB263EED70 : public ::System::Object
{
public:
	::System::Func_2<::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::FixPoint>* GGNHJGFPMDN; // 0x10
	::System::Int32 HEFPHPPEPJM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB553DB263EED70__CTOR_OFFSET))(this);
	}
};
