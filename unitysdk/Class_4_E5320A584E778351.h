#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinKeywordMatchMode.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_E5320A584E778351_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1B2EB0E0)
#define CLASS_4_E5320A584E778351_METHOD_4_690EB21B07B220FD_OFFSET UNITYSDK_OFFSET(0x1B2EADA0)
#define CLASS_4_E5320A584E778351_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1B2EB0B0)
#define CLASS_4_E5320A584E778351_METHOD_4_F9001DC69711467A_OFFSET UNITYSDK_OFFSET(0x1B2EADE0)
#define CLASS_4_E5320A584E778351__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EADD0)

inline static constexpr unsigned int Class_4_E5320A584E778351_TypeDefinitionIndex = 19144;

class Class_4_E5320A584E778351 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_4_0; // 0x20
	::Il2CppArray<::System::UInt32>* Field_4_1; // 0x28
	::System::Boolean Field_4_2; // 0x30
	::RPG::GameCore::FateRinKeywordMatchMode Field_4_3; // 0x34

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
