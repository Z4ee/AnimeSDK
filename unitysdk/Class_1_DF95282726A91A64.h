#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAdventureSettingConflictShowInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DF95282726A91A64_METHOD_1_5CC3E83085F8132A_OFFSET UNITYSDK_OFFSET(0x15F7B0E0)
#define CLASS_1_DF95282726A91A64_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x15F7B020)
#define CLASS_1_DF95282726A91A64_METHOD_1_C6E14CE377D03CE0_OFFSET UNITYSDK_OFFSET(0x15F7B070)
#define CLASS_1_DF95282726A91A64__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7B1B0)

inline static constexpr unsigned int Class_1_DF95282726A91A64_TypeDefinitionIndex = 61294;

class Class_1_DF95282726A91A64 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF95282726A91A64__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF95282726A91A64_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Boolean Method_1_C6E14CE377D03CE0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF95282726A91A64_METHOD_1_C6E14CE377D03CE0_OFFSET))(this, a1);
	}

	::RPG::Client::IAdventureSettingConflictShowInfo* Method_1_5CC3E83085F8132A(::System::String* a1, ::System::String* a2)
	{
		return ((::RPG::Client::IAdventureSettingConflictShowInfo*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF95282726A91A64_METHOD_1_5CC3E83085F8132A_OFFSET))(this, a1, a2);
	}
};
