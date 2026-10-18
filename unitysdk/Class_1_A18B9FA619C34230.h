#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define CLASS_1_A18B9FA619C34230_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x1D1E6400)
#define CLASS_1_A18B9FA619C34230__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E6900)

inline static constexpr unsigned int Class_1_A18B9FA619C34230_TypeDefinitionIndex = 15067;

class Class_1_A18B9FA619C34230 : public ::System::Object
{
public:
	::System::String* OMKFHNLHBBB; // 0x10
	::System::String* OLOIFNNLKJP; // 0x18
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* OICGFNGNLOE; // 0x20
	::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x28
	::RPG::Client::TextID NMAHGFAPENI; // 0x30
	::RPG::Client::TextID MOEDOCHOCPJ; // 0x40
	::System::UInt32 AAGKEBFHLMC; // 0x50
	::System::UInt32 DPCMGDIIAKN; // 0x54
	::System::UInt32 PHFMCACHFIJ; // 0x58
	::System::UInt32 DBALOLNOLGL; // 0x5C
	::RPG::Client::TextID MJOOFPBABEA; // 0x60
	::RPG::Client::TextID HGHFCLHKJNJ; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A18B9FA619C34230__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A18B9FA619C34230*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A18B9FA619C34230*&))((::PBYTE)hIl2Cpp + CLASS_1_A18B9FA619C34230_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
