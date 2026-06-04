#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/Struct_2_875B08BB13E31BEE.h"
#include "unitysdk/System/Object.h"

class Class_1_98133438BFCB56ED;

#define CLASS_1_54AB32BA5BA74DB1_METHOD_1_621D61F95355453B_OFFSET UNITYSDK_OFFSET(0x139EE8D0)
#define CLASS_1_54AB32BA5BA74DB1_METHOD_1_8E2459E21F333B97_OFFSET UNITYSDK_OFFSET(0x139ECD40)
#define CLASS_1_54AB32BA5BA74DB1__CTOR_OFFSET UNITYSDK_OFFSET(0x139EF160)

inline static constexpr unsigned int Class_1_54AB32BA5BA74DB1_TypeDefinitionIndex = 50137;

class Class_1_54AB32BA5BA74DB1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54AB32BA5BA74DB1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8E2459E21F333B97(::Class_1_98133438BFCB56ED* a1, ::Class_1_98133438BFCB56ED* a2, ::Struct_2_875B08BB13E31BEE& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_98133438BFCB56ED*, ::Class_1_98133438BFCB56ED*, ::Struct_2_875B08BB13E31BEE&))((::PBYTE)hIl2Cpp + CLASS_1_54AB32BA5BA74DB1_METHOD_1_8E2459E21F333B97_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_621D61F95355453B(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixVec2 a5, ::RPG::GameCore::FixVec2 a6, ::RPG::GameCore::FixPoint a7, ::System::Boolean& a8, ::RPG::GameCore::FixVec2& a9, ::RPG::GameCore::FixPoint& a10)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint, ::System::Boolean&, ::RPG::GameCore::FixVec2&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_54AB32BA5BA74DB1_METHOD_1_621D61F95355453B_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}
};
