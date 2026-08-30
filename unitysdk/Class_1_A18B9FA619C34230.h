#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define CLASS_1_A18B9FA619C34230_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x1D5CFAB0)
#define CLASS_1_A18B9FA619C34230__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CFFB0)

inline static constexpr unsigned int Class_1_A18B9FA619C34230_TypeDefinitionIndex = 14902;

class Class_1_A18B9FA619C34230 : public ::System::Object
{
public:
	::System::String* OMKFHNLHBBB; // 0x10
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* OICGFNGNLOE; // 0x18
	::System::String* OLOIFNNLKJP; // 0x20
	::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x28
	::System::UInt32 DBALOLNOLGL; // 0x30
	::System::UInt32 AAGKEBFHLMC; // 0x34
	::RPG::Client::TextID NMAHGFAPENI; // 0x38
	::RPG::Client::TextID MOEDOCHOCPJ; // 0x48
	::RPG::Client::TextID MJOOFPBABEA; // 0x58
	::System::UInt32 PHFMCACHFIJ; // 0x68
	::System::UInt32 DPCMGDIIAKN; // 0x6C
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
