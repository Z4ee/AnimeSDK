#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_52474CA701E7E36D_CLASS_1_FC27B2AA72B76129_METHOD_1_E70529043CD01253_OFFSET UNITYSDK_OFFSET(0x18D1AA40)
#define CLASS_1_52474CA701E7E36D_CLASS_1_FC27B2AA72B76129_METHOD_1_F741817FEC212E8A_OFFSET UNITYSDK_OFFSET(0x18D1AB90)
#define CLASS_1_52474CA701E7E36D_CLASS_1_FC27B2AA72B76129__CTOR_OFFSET UNITYSDK_OFFSET(0x18D1B250)

inline static constexpr unsigned int Class_1_52474CA701E7E36D_Class_1_FC27B2AA72B76129_TypeDefinitionIndex = 63432;

class Class_1_52474CA701E7E36D_Class_1_FC27B2AA72B76129 : public ::System::Object
{
public:
	::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>* KADJIDHNIEM; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::JsonConfig*>* HPGAKAOBMCO; // 0x18

	::System::Void _ctor(::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_52474CA701E7E36D_CLASS_1_FC27B2AA72B76129__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::JsonConfig* Method_1_E70529043CD01253(::System::String* a1)
	{
		return ((::RPG::GameCore::JsonConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52474CA701E7E36D_CLASS_1_FC27B2AA72B76129_METHOD_1_E70529043CD01253_OFFSET))(this, a1);
	}

	::System::Void Method_1_F741817FEC212E8A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52474CA701E7E36D_CLASS_1_FC27B2AA72B76129_METHOD_1_F741817FEC212E8A_OFFSET))(this, a1);
	}
};
