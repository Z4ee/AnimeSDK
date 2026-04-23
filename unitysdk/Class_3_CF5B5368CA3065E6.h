#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimBubbleTalkInfo; }
namespace System { class String; }

#define CLASS_3_CF5B5368CA3065E6_METHOD_3_BE513DA00D254FDB_OFFSET UNITYSDK_OFFSET(0x182653D0)
#define CLASS_3_CF5B5368CA3065E6_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x18265330)
#define CLASS_3_CF5B5368CA3065E6__CTOR_OFFSET UNITYSDK_OFFSET(0x18265390)

inline static constexpr unsigned int Class_3_CF5B5368CA3065E6_TypeDefinitionIndex = 20367;

class Class_3_CF5B5368CA3065E6 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::Int16>* Field_3_2; // 0x18
	::System::String* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::FiveDimBubbleTalkInfo*>* Field_3_3; // 0x28
	::System::UInt32 Field_3_7; // 0x30
	::System::Boolean Field_3_0; // 0x34
	::System::Boolean Field_3_4; // 0x35
	::System::Boolean Field_3_6; // 0x36
	::System::Single Field_3_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF5B5368CA3065E6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CF5B5368CA3065E6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CF5B5368CA3065E6*&))((::PBYTE)hIl2Cpp + CLASS_3_CF5B5368CA3065E6_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BE513DA00D254FDB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CF5B5368CA3065E6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CF5B5368CA3065E6*))((::PBYTE)hIl2Cpp + CLASS_3_CF5B5368CA3065E6_METHOD_3_BE513DA00D254FDB_OFFSET))(a1, a2);
	}
};
