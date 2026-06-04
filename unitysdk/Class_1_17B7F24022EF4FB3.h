#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RhythmType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_17B7F24022EF4FB3_METHOD_1_7A772A33A90355AA_OFFSET UNITYSDK_OFFSET(0x18F523A0)
#define CLASS_1_17B7F24022EF4FB3__CTOR_OFFSET UNITYSDK_OFFSET(0x18F52540)

inline static constexpr unsigned int Class_1_17B7F24022EF4FB3_TypeDefinitionIndex = 12207;

class Class_1_17B7F24022EF4FB3 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::RhythmType Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17B7F24022EF4FB3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_7A772A33A90355AA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_17B7F24022EF4FB3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_17B7F24022EF4FB3*&))((::PBYTE)hIl2Cpp + CLASS_1_17B7F24022EF4FB3_METHOD_1_7A772A33A90355AA_OFFSET))(a1, a2);
	}
};
