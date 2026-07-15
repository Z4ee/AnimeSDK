#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0E365382A55F3447_Class_1_90B29E9104B098EB.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }

#define CLASS_1_0E365382A55F3447_CLASS_2_D4465E627C7DC439_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x17018090)
#define CLASS_1_0E365382A55F3447_CLASS_2_D4465E627C7DC439__CTOR_OFFSET UNITYSDK_OFFSET(0x17018080)

inline static constexpr unsigned int Class_1_0E365382A55F3447_Class_2_D4465E627C7DC439_TypeDefinitionIndex = 47280;

class Class_1_0E365382A55F3447_Class_2_D4465E627C7DC439 : public ::Class_1_0E365382A55F3447_Class_1_90B29E9104B098EB
{
public:
	::System::Int32 Field_2_0; // 0x28

	::System::Void _ctor(::RPG::Client::IAssetOperation* a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::RPG::Client::OnAssetOperationDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_CLASS_2_D4465E627C7DC439__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_CLASS_2_D4465E627C7DC439_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}
};
