#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/Struct_2_4AF9BC2DDB90BD8E.h"
#include "unitysdk/System/Object.h"

class Class_1_8E307E51EDDD52B9;
class Class_1_98133438BFCB56ED;

#define CLASS_1_28142FCFEF069374_METHOD_1_189D7C31B7B16956_OFFSET UNITYSDK_OFFSET(0x11BCD130)
#define CLASS_1_28142FCFEF069374_METHOD_1_8E2459E21F333B97_OFFSET UNITYSDK_OFFSET(0x11BCA860)
#define CLASS_1_28142FCFEF069374__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCEDF0)

inline static constexpr unsigned int Class_1_28142FCFEF069374_TypeDefinitionIndex = 49471;

class Class_1_28142FCFEF069374 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28142FCFEF069374__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8E2459E21F333B97(::Class_1_98133438BFCB56ED* a1, ::Class_1_98133438BFCB56ED* a2, ::Struct_2_4AF9BC2DDB90BD8E& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_98133438BFCB56ED*, ::Class_1_98133438BFCB56ED*, ::Struct_2_4AF9BC2DDB90BD8E&))((::PBYTE)hIl2Cpp + CLASS_1_28142FCFEF069374_METHOD_1_8E2459E21F333B97_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_189D7C31B7B16956(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixVec2 a5, ::RPG::GameCore::FixVec2 a6, ::Class_1_8E307E51EDDD52B9* a7, ::System::Boolean& a8, ::RPG::GameCore::FixVec2& a9, ::RPG::GameCore::FixPoint& a10)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::Class_1_8E307E51EDDD52B9*, ::System::Boolean&, ::RPG::GameCore::FixVec2&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_28142FCFEF069374_METHOD_1_189D7C31B7B16956_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}
};
