#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAdventureSettingConflictShowInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DF95282726A91A64_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xAD03BF0)
#define CLASS_1_DF95282726A91A64_METHOD_1_5CC3E83085F8132A_OFFSET UNITYSDK_OFFSET(0xAD03CE0)
#define CLASS_1_DF95282726A91A64_METHOD_1_9E57E9BDF636A45F_OFFSET UNITYSDK_OFFSET(0xAD03C00)
#define CLASS_1_DF95282726A91A64__CTOR_OFFSET UNITYSDK_OFFSET(0xAD03DB0)

inline static constexpr unsigned int Class_1_DF95282726A91A64_TypeDefinitionIndex = 60009;

class Class_1_DF95282726A91A64 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF95282726A91A64__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF95282726A91A64_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_1_9E57E9BDF636A45F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF95282726A91A64_METHOD_1_9E57E9BDF636A45F_OFFSET))(this, a1);
	}

	::RPG::Client::IAdventureSettingConflictShowInfo* Method_1_5CC3E83085F8132A(::System::String* a1, ::System::String* a2)
	{
		return ((::RPG::Client::IAdventureSettingConflictShowInfo*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF95282726A91A64_METHOD_1_5CC3E83085F8132A_OFFSET))(this, a1, a2);
	}
};
