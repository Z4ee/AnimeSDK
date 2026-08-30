#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/Struct_2_875B08BB13E31BEE.h"
#include "unitysdk/System/Object.h"

class Class_1_8E307E51EDDD52B9;
class Class_1_98133438BFCB56ED;

#define CLASS_1_63A64186D7D60B09_METHOD_1_4F71A3C1633C28D0_OFFSET UNITYSDK_OFFSET(0xE8B6950)
#define CLASS_1_63A64186D7D60B09_METHOD_1_C9AD03BD3B583EEE_OFFSET UNITYSDK_OFFSET(0xE8B5620)
#define CLASS_1_63A64186D7D60B09__CTOR_OFFSET UNITYSDK_OFFSET(0xE8B79A0)

inline static constexpr unsigned int Class_1_63A64186D7D60B09_TypeDefinitionIndex = 53904;

class Class_1_63A64186D7D60B09 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63A64186D7D60B09__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C9AD03BD3B583EEE(::Class_1_98133438BFCB56ED* a1, ::Class_1_98133438BFCB56ED* a2, ::Struct_2_875B08BB13E31BEE& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_98133438BFCB56ED*, ::Class_1_98133438BFCB56ED*, ::Struct_2_875B08BB13E31BEE&))((::PBYTE)hIl2Cpp + CLASS_1_63A64186D7D60B09_METHOD_1_C9AD03BD3B583EEE_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_4F71A3C1633C28D0(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixVec2 a5, ::RPG::GameCore::FixVec2 a6, ::Class_1_8E307E51EDDD52B9* a7, ::System::Boolean& a8, ::RPG::GameCore::FixVec2& a9, ::RPG::GameCore::FixPoint& a10)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::Class_1_8E307E51EDDD52B9*, ::System::Boolean&, ::RPG::GameCore::FixVec2&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_63A64186D7D60B09_METHOD_1_4F71A3C1633C28D0_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}
};
