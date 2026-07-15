#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_5F2CC178AD0CBB77_METHOD_1_5A9446C22EB45706_OFFSET UNITYSDK_OFFSET(0x1ACDCF50)
#define CLASS_1_5F2CC178AD0CBB77__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACDD180)

inline static constexpr unsigned int Class_1_5F2CC178AD0CBB77_TypeDefinitionIndex = 10591;

class Class_1_5F2CC178AD0CBB77 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::Il2CppArray<::RPG::Client::TextID>* Field_1_1; // 0x18
	::RPG::Client::TextID Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F2CC178AD0CBB77__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_5A9446C22EB45706(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_5F2CC178AD0CBB77*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_5F2CC178AD0CBB77*&))((::PBYTE)hIl2Cpp + CLASS_1_5F2CC178AD0CBB77_METHOD_1_5A9446C22EB45706_OFFSET))(a1, a2);
	}
};
