#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BBE48024BDD3E027;
class Class_1_BBE48024BDD3E027_Class_3_AE31F159F362893C;
namespace RPG::Client { class IAssetOperation; }

#define CLASS_1_BBE48024BDD3E027___C__DISPLAYCLASS37_0__ASYNCLOADDATABLOCK_B__0_OFFSET UNITYSDK_OFFSET(0xB722570)
#define CLASS_1_BBE48024BDD3E027___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB71F220)

inline static constexpr unsigned int Class_1_BBE48024BDD3E027___c__DisplayClass37_0_TypeDefinitionIndex = 49610;

class Class_1_BBE48024BDD3E027___c__DisplayClass37_0 : public ::System::Object
{
public:
	::Class_1_BBE48024BDD3E027_Class_3_AE31F159F362893C* cb; // 0x10
	::Class_1_BBE48024BDD3E027* __4__this; // 0x18
	::System::Int32 blockId; // 0x20
	::System::Boolean finished; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AsyncLoadDataBlock_b__0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027___C__DISPLAYCLASS37_0__ASYNCLOADDATABLOCK_B__0_OFFSET))(this, a1);
	}
};
