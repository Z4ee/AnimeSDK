#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_2AFBB0F2564F9E40_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1B510050)
#define CLASS_4_2AFBB0F2564F9E40_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1B510020)
#define CLASS_4_2AFBB0F2564F9E40_METHOD_4_9FB7184D9548FFA8_OFFSET UNITYSDK_OFFSET(0x1B50FE10)
#define CLASS_4_2AFBB0F2564F9E40_METHOD_4_B9CA7374CC83C96D_OFFSET UNITYSDK_OFFSET(0x1B50FE50)
#define CLASS_4_2AFBB0F2564F9E40__CTOR_OFFSET UNITYSDK_OFFSET(0x1B50FE40)

inline static constexpr unsigned int Class_4_2AFBB0F2564F9E40_TypeDefinitionIndex = 23346;

class Class_4_2AFBB0F2564F9E40 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20
	::RPG::GameCore::RtBehaviorFlag Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2AFBB0F2564F9E40__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9FB7184D9548FFA8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2AFBB0F2564F9E40*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2AFBB0F2564F9E40*&))((::PBYTE)hIl2Cpp + CLASS_4_2AFBB0F2564F9E40_METHOD_4_9FB7184D9548FFA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B9CA7374CC83C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2AFBB0F2564F9E40* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2AFBB0F2564F9E40*))((::PBYTE)hIl2Cpp + CLASS_4_2AFBB0F2564F9E40_METHOD_4_B9CA7374CC83C96D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_2AFBB0F2564F9E40*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_2AFBB0F2564F9E40*&))((::PBYTE)hIl2Cpp + CLASS_4_2AFBB0F2564F9E40_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_659A18F107B0F4EB(::SimpleJSON::JSONNode* a1, ::Class_4_2AFBB0F2564F9E40* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_2AFBB0F2564F9E40*))((::PBYTE)hIl2Cpp + CLASS_4_2AFBB0F2564F9E40_METHOD_4_659A18F107B0F4EB_OFFSET))(a1, a2);
	}
};
