#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0E365382A55F3447_Class_1_90B29E9104B098EB.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }

#define CLASS_1_0E365382A55F3447_CLASS_2_8BF9815F32EA9EC6__CTOR_OFFSET UNITYSDK_OFFSET(0x15469320)

inline static constexpr unsigned int Class_1_0E365382A55F3447_Class_2_8BF9815F32EA9EC6_TypeDefinitionIndex = 49559;

class Class_1_0E365382A55F3447_Class_2_8BF9815F32EA9EC6 : public ::Class_1_0E365382A55F3447_Class_1_90B29E9104B098EB
{
public:
	::System::Void _ctor(::RPG::Client::IAssetOperation* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_CLASS_2_8BF9815F32EA9EC6__CTOR_OFFSET))(this, a1, a2);
	}
};
