#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_4_472E12A36DB951F3_METHOD_4_2D82175F1B3B2673_OFFSET UNITYSDK_OFFSET(0x1CB24F90)
#define CLASS_4_472E12A36DB951F3_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1CB251F0)
#define CLASS_4_472E12A36DB951F3_METHOD_4_6D3BD31FF07A4A8E_OFFSET UNITYSDK_OFFSET(0x1CB24F50)
#define CLASS_4_472E12A36DB951F3_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1CB251C0)
#define CLASS_4_472E12A36DB951F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB24F80)

inline static constexpr unsigned int Class_4_472E12A36DB951F3_TypeDefinitionIndex = 22196;

class Class_4_472E12A36DB951F3 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicFloat* PJGLBPCJFEK; // 0x20
	::System::String* LLOBIMGOPOP; // 0x28
	::RPG::GameCore::CompareType OOFECODHNPJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_472E12A36DB951F3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_6D3BD31FF07A4A8E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_472E12A36DB951F3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_472E12A36DB951F3*&))((::PBYTE)hIl2Cpp + CLASS_4_472E12A36DB951F3_METHOD_4_6D3BD31FF07A4A8E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_2D82175F1B3B2673(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_472E12A36DB951F3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_472E12A36DB951F3*))((::PBYTE)hIl2Cpp + CLASS_4_472E12A36DB951F3_METHOD_4_2D82175F1B3B2673_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_472E12A36DB951F3*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_472E12A36DB951F3*&))((::PBYTE)hIl2Cpp + CLASS_4_472E12A36DB951F3_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_472E12A36DB951F3* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_472E12A36DB951F3*))((::PBYTE)hIl2Cpp + CLASS_4_472E12A36DB951F3_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
