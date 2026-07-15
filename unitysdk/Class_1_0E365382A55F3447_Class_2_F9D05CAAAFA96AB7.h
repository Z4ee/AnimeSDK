#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0E365382A55F3447_Class_1_90B29E9104B098EB.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }

#define CLASS_1_0E365382A55F3447_CLASS_2_F9D05CAAAFA96AB7_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x17018020)
#define CLASS_1_0E365382A55F3447_CLASS_2_F9D05CAAAFA96AB7_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x17017F70)
#define CLASS_1_0E365382A55F3447_CLASS_2_F9D05CAAAFA96AB7__CTOR_OFFSET UNITYSDK_OFFSET(0x170174B0)

inline static constexpr unsigned int Class_1_0E365382A55F3447_Class_2_F9D05CAAAFA96AB7_TypeDefinitionIndex = 47281;

class Class_1_0E365382A55F3447_Class_2_F9D05CAAAFA96AB7 : public ::Class_1_0E365382A55F3447_Class_1_90B29E9104B098EB
{
public:
	::System::Single Field_2_0; // 0x28

	::System::Void _ctor(::RPG::Client::IAssetOperation* a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::RPG::Client::OnAssetOperationDelegate*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_CLASS_2_F9D05CAAAFA96AB7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_CLASS_2_F9D05CAAAFA96AB7_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_CLASS_2_F9D05CAAAFA96AB7_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}
};
