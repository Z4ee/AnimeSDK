#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DynamicBoneConfigMap;
namespace System { class Action; }

#define CLASS_1_D91B74B210E9EE24_CLASS_1_010E0E5CEDA765AD_METHOD_1_9B30B7651EB97E98_OFFSET UNITYSDK_OFFSET(0x1874E820)
#define CLASS_1_D91B74B210E9EE24_CLASS_1_010E0E5CEDA765AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1874E810)

inline static constexpr unsigned int Class_1_D91B74B210E9EE24_Class_1_010E0E5CEDA765AD_TypeDefinitionIndex = 61248;

class Class_1_D91B74B210E9EE24_Class_1_010E0E5CEDA765AD : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D91B74B210E9EE24_CLASS_1_010E0E5CEDA765AD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9B30B7651EB97E98(::DynamicBoneConfigMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::DynamicBoneConfigMap*))((::PBYTE)hIl2Cpp + CLASS_1_D91B74B210E9EE24_CLASS_1_010E0E5CEDA765AD_METHOD_1_9B30B7651EB97E98_OFFSET))(this, a1);
	}
};
