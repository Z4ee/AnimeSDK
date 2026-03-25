#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_35C35981E33144CD_METHOD_1_975B9AC31CF05C24_OFFSET UNITYSDK_OFFSET(0x179ABB70)
#define CLASS_1_35C35981E33144CD__CTOR_OFFSET UNITYSDK_OFFSET(0x179ABCA0)

inline static constexpr unsigned int Class_1_35C35981E33144CD_TypeDefinitionIndex = 10825;

class Class_1_35C35981E33144CD : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::RPG::GameCore::HipplenStatType Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35C35981E33144CD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_975B9AC31CF05C24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_35C35981E33144CD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_35C35981E33144CD*&))((::PBYTE)hIl2Cpp + CLASS_1_35C35981E33144CD_METHOD_1_975B9AC31CF05C24_OFFSET))(a1, a2);
	}
};
