#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/Struct_2_4AF9BC2DDB90BD8E.h"
#include "unitysdk/System/Object.h"

class Class_1_15FBD59BB965022C;
class Class_1_98133438BFCB56ED;

#define CLASS_1_1A48B5EE5F412453_METHOD_1_8D369FCF5649B334_OFFSET UNITYSDK_OFFSET(0x1179EF30)
#define CLASS_1_1A48B5EE5F412453_METHOD_1_E53FD4098C91140E_OFFSET UNITYSDK_OFFSET(0x1179E6B0)
#define CLASS_1_1A48B5EE5F412453__CTOR_OFFSET UNITYSDK_OFFSET(0x117A0020)

inline static constexpr unsigned int Class_1_1A48B5EE5F412453_TypeDefinitionIndex = 49469;

class Class_1_1A48B5EE5F412453 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A48B5EE5F412453__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E53FD4098C91140E(::Class_1_98133438BFCB56ED* a1, ::Class_1_98133438BFCB56ED* a2, ::Struct_2_4AF9BC2DDB90BD8E& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_98133438BFCB56ED*, ::Class_1_98133438BFCB56ED*, ::Struct_2_4AF9BC2DDB90BD8E&))((::PBYTE)hIl2Cpp + CLASS_1_1A48B5EE5F412453_METHOD_1_E53FD4098C91140E_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_8D369FCF5649B334(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::Class_1_15FBD59BB965022C* a3, ::Class_1_15FBD59BB965022C* a4, ::RPG::GameCore::FixVec2 a5, ::RPG::GameCore::FixVec2 a6, ::RPG::GameCore::FixPoint& a7, ::RPG::GameCore::FixVec2& a8)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::Class_1_15FBD59BB965022C*, ::Class_1_15FBD59BB965022C*, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixVec2&))((::PBYTE)hIl2Cpp + CLASS_1_1A48B5EE5F412453_METHOD_1_8D369FCF5649B334_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}
};
