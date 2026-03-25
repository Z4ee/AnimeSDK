#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define CLASS_4_C42FA8E003EE7719_METHOD_4_690EB21B07B220FD_OFFSET UNITYSDK_OFFSET(0x16EE4CF0)
#define CLASS_4_C42FA8E003EE7719_METHOD_4_8A83AFE4D802260F_OFFSET UNITYSDK_OFFSET(0x16EE4DD0)
#define CLASS_4_C42FA8E003EE7719__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE4D70)

inline static constexpr unsigned int Class_4_C42FA8E003EE7719_TypeDefinitionIndex = 20520;

class Class_4_C42FA8E003EE7719 : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_4_1; // 0x20
	::System::String* Field_4_2; // 0x28
	::RPG::GameCore::DynamicFloat* Field_4_0; // 0x30
	::System::Boolean Field_4_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C42FA8E003EE7719__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_690EB21B07B220FD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C42FA8E003EE7719*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C42FA8E003EE7719*&))((::PBYTE)hIl2Cpp + CLASS_4_C42FA8E003EE7719_METHOD_4_690EB21B07B220FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8A83AFE4D802260F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C42FA8E003EE7719* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C42FA8E003EE7719*))((::PBYTE)hIl2Cpp + CLASS_4_C42FA8E003EE7719_METHOD_4_8A83AFE4D802260F_OFFSET))(a1, a2);
	}
};
