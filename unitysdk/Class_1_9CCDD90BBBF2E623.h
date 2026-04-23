#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/Struct_2_4AF9BC2DDB90BD8E.h"
#include "unitysdk/System/Object.h"

class Class_1_98133438BFCB56ED;

#define CLASS_1_9CCDD90BBBF2E623_METHOD_1_149C7070A763383C_OFFSET UNITYSDK_OFFSET(0x11D7DC80)
#define CLASS_1_9CCDD90BBBF2E623_METHOD_1_C5AEB466E1D3A296_OFFSET UNITYSDK_OFFSET(0x11D79D00)
#define CLASS_1_9CCDD90BBBF2E623__CTOR_OFFSET UNITYSDK_OFFSET(0x11D7EA70)

inline static constexpr unsigned int Class_1_9CCDD90BBBF2E623_TypeDefinitionIndex = 49470;

class Class_1_9CCDD90BBBF2E623 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CCDD90BBBF2E623__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C5AEB466E1D3A296(::Class_1_98133438BFCB56ED* a1, ::Class_1_98133438BFCB56ED* a2, ::Struct_2_4AF9BC2DDB90BD8E& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_98133438BFCB56ED*, ::Class_1_98133438BFCB56ED*, ::Struct_2_4AF9BC2DDB90BD8E&))((::PBYTE)hIl2Cpp + CLASS_1_9CCDD90BBBF2E623_METHOD_1_C5AEB466E1D3A296_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_149C7070A763383C(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixVec2 a5, ::RPG::GameCore::FixVec2 a6, ::RPG::GameCore::FixPoint a7, ::System::Boolean& a8, ::RPG::GameCore::FixVec2& a9, ::RPG::GameCore::FixPoint& a10)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint, ::System::Boolean&, ::RPG::GameCore::FixVec2&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_9CCDD90BBBF2E623_METHOD_1_149C7070A763383C_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}
};
