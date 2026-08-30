#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_5F2CC178AD0CBB77_METHOD_1_5A9446C22EB45706_OFFSET UNITYSDK_OFFSET(0x1C8DDFA0)
#define CLASS_1_5F2CC178AD0CBB77__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DE1D0)

inline static constexpr unsigned int Class_1_5F2CC178AD0CBB77_TypeDefinitionIndex = 10966;

class Class_1_5F2CC178AD0CBB77 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::Client::TextID>* LDCCBCIIIEC; // 0x10
	::Il2CppArray<::System::UInt32>* EJDNMAFLACG; // 0x18
	::System::UInt32 PHFMCACHFIJ; // 0x20
	::RPG::Client::TextID MJOOFPBABEA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F2CC178AD0CBB77__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_5A9446C22EB45706(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_5F2CC178AD0CBB77*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_5F2CC178AD0CBB77*&))((::PBYTE)hIl2Cpp + CLASS_1_5F2CC178AD0CBB77_METHOD_1_5A9446C22EB45706_OFFSET))(a1, a2);
	}
};
