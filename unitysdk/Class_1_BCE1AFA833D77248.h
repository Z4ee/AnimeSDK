#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_BCE1AFA833D77248_METHOD_1_7A772A33A90355AA_OFFSET UNITYSDK_OFFSET(0x1D080850)
#define CLASS_1_BCE1AFA833D77248__CTOR_OFFSET UNITYSDK_OFFSET(0x1D080A00)

inline static constexpr unsigned int Class_1_BCE1AFA833D77248_TypeDefinitionIndex = 12969;

class Class_1_BCE1AFA833D77248 : public ::System::Object
{
public:
	::System::String* CEGADPFLPGM; // 0x10
	::System::UInt32 DPPCACLHEIL; // 0x18
	::RPG::GameCore::FixPoint AALPICLABCO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCE1AFA833D77248__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_7A772A33A90355AA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_BCE1AFA833D77248*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_BCE1AFA833D77248*&))((::PBYTE)hIl2Cpp + CLASS_1_BCE1AFA833D77248_METHOD_1_7A772A33A90355AA_OFFSET))(a1, a2);
	}
};
