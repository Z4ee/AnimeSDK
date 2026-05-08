#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_B44E4D859BE5ED1F_Class_1_78C94C2A2718E176;
namespace MoleMole::Config { class ConfigInteractEntry; }

#define CLASS_1_B44E4D859BE5ED1F_CLASS_1_89772F53F303DCAD_METHOD_1_53029F0B87EA2E44_OFFSET UNITYSDK_OFFSET(0x12C43F80)
#define CLASS_1_B44E4D859BE5ED1F_CLASS_1_89772F53F303DCAD__CTOR_OFFSET UNITYSDK_OFFSET(0x12C43F70)

inline static constexpr unsigned int Class_1_B44E4D859BE5ED1F_Class_1_89772F53F303DCAD_TypeDefinitionIndex = 46170;

class Class_1_B44E4D859BE5ED1F_Class_1_89772F53F303DCAD : public ::System::Object
{
public:
	::Class_1_B44E4D859BE5ED1F_Class_1_78C94C2A2718E176* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B44E4D859BE5ED1F_CLASS_1_89772F53F303DCAD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_53029F0B87EA2E44(::MoleMole::Config::ConfigInteractEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigInteractEntry*))((::PBYTE)hIl2Cpp + CLASS_1_B44E4D859BE5ED1F_CLASS_1_89772F53F303DCAD_METHOD_1_53029F0B87EA2E44_OFFSET))(this, a1);
	}
};
