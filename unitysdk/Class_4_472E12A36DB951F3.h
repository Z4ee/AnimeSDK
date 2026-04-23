#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_4_472E12A36DB951F3_METHOD_4_2D82175F1B3B2673_OFFSET UNITYSDK_OFFSET(0x1835F6D0)
#define CLASS_4_472E12A36DB951F3_METHOD_4_690EB21B07B220FD_OFFSET UNITYSDK_OFFSET(0x1835F600)
#define CLASS_4_472E12A36DB951F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1835F680)

inline static constexpr unsigned int Class_4_472E12A36DB951F3_TypeDefinitionIndex = 21323;

class Class_4_472E12A36DB951F3 : public ::RPG::GameCore::PredicateConfig
{
public:
	::System::String* Field_4_0; // 0x20
	::RPG::GameCore::DynamicFloat* Field_4_2; // 0x28
	::RPG::GameCore::CompareType Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_472E12A36DB951F3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_690EB21B07B220FD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_472E12A36DB951F3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_472E12A36DB951F3*&))((::PBYTE)hIl2Cpp + CLASS_4_472E12A36DB951F3_METHOD_4_690EB21B07B220FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_2D82175F1B3B2673(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_472E12A36DB951F3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_472E12A36DB951F3*))((::PBYTE)hIl2Cpp + CLASS_4_472E12A36DB951F3_METHOD_4_2D82175F1B3B2673_OFFSET))(a1, a2);
	}
};
