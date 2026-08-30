#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinKeywordMatchMode.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_E5320A584E778351_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0xCA2A3D0)
#define CLASS_4_E5320A584E778351_METHOD_4_690EB21B07B220FD_OFFSET UNITYSDK_OFFSET(0xCA2A090)
#define CLASS_4_E5320A584E778351_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0xCA2A3A0)
#define CLASS_4_E5320A584E778351_METHOD_4_F9001DC69711467A_OFFSET UNITYSDK_OFFSET(0xCA2A0D0)
#define CLASS_4_E5320A584E778351__CTOR_OFFSET UNITYSDK_OFFSET(0xCA2A0C0)

inline static constexpr unsigned int Class_4_E5320A584E778351_TypeDefinitionIndex = 19685;

class Class_4_E5320A584E778351 : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::System::UInt32>* PLGIENFBKDB; // 0x20
	::RPG::GameCore::DynamicFloat* FEHABNJEENK; // 0x28
	::System::Boolean DKFAKDGFDGD; // 0x30
	::RPG::GameCore::FateRinKeywordMatchMode ELINAHCICBC; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E5320A584E778351__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_690EB21B07B220FD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E5320A584E778351*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E5320A584E778351*&))((::PBYTE)hIl2Cpp + CLASS_4_E5320A584E778351_METHOD_4_690EB21B07B220FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F9001DC69711467A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E5320A584E778351* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E5320A584E778351*))((::PBYTE)hIl2Cpp + CLASS_4_E5320A584E778351_METHOD_4_F9001DC69711467A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_E5320A584E778351*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E5320A584E778351*&))((::PBYTE)hIl2Cpp + CLASS_4_E5320A584E778351_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_E5320A584E778351* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E5320A584E778351*))((::PBYTE)hIl2Cpp + CLASS_4_E5320A584E778351_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
