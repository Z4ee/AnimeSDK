#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DesignerUserPrefsDomain.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_4_D4509F067C456928_METHOD_4_0EE9A132E4098A12_OFFSET UNITYSDK_OFFSET(0x1C7711A0)
#define CLASS_4_D4509F067C456928_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1C7714A0)
#define CLASS_4_D4509F067C456928_METHOD_4_8A83AFE4D802260F_OFFSET UNITYSDK_OFFSET(0x1C7711E0)
#define CLASS_4_D4509F067C456928_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1C771470)
#define CLASS_4_D4509F067C456928__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7711D0)

inline static constexpr unsigned int Class_4_D4509F067C456928_TypeDefinitionIndex = 21053;

class Class_4_D4509F067C456928 : public ::RPG::GameCore::PredicateConfig
{
public:
	::System::String* BFLIFKBEOPJ; // 0x20
	::System::UInt32 DPICNGBHFAC; // 0x28
	::RPG::GameCore::DesignerUserPrefsDomain POIELLDDNFM; // 0x2C
	::System::Boolean JJODEAGKDOH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D4509F067C456928__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_0EE9A132E4098A12(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_D4509F067C456928*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_D4509F067C456928*&))((::PBYTE)hIl2Cpp + CLASS_4_D4509F067C456928_METHOD_4_0EE9A132E4098A12_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8A83AFE4D802260F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_D4509F067C456928* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_D4509F067C456928*))((::PBYTE)hIl2Cpp + CLASS_4_D4509F067C456928_METHOD_4_8A83AFE4D802260F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_D4509F067C456928*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_D4509F067C456928*&))((::PBYTE)hIl2Cpp + CLASS_4_D4509F067C456928_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_D4509F067C456928* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_D4509F067C456928*))((::PBYTE)hIl2Cpp + CLASS_4_D4509F067C456928_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
