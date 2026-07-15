#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PlayRogueOptionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CE1760D3B26C5D42_DISPOSE_OFFSET UNITYSDK_OFFSET(0x170268D0)
#define CLASS_2_CE1760D3B26C5D42_METHOD_2_0ABEB23FF62F8B8F_OFFSET UNITYSDK_OFFSET(0x17027180)
#define CLASS_2_CE1760D3B26C5D42_METHOD_2_0B934AF65CEA173B_OFFSET UNITYSDK_OFFSET(0x17026E80)
#define CLASS_2_CE1760D3B26C5D42_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x170270B0)
#define CLASS_2_CE1760D3B26C5D42_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x17026FF0)
#define CLASS_2_CE1760D3B26C5D42_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17026A00)
#define CLASS_2_CE1760D3B26C5D42_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17026C30)
#define CLASS_2_CE1760D3B26C5D42_TICK_OFFSET UNITYSDK_OFFSET(0x17026C80)
#define CLASS_2_CE1760D3B26C5D42__CTOR_OFFSET UNITYSDK_OFFSET(0x17026840)

inline static constexpr unsigned int Class_2_CE1760D3B26C5D42_TypeDefinitionIndex = 55696;

class Class_2_CE1760D3B26C5D42 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x18
	::RPG::GameCore::PlayRogueOptionTalk* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::System::String* Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayRogueOptionTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayRogueOptionTalk*))((::PBYTE)hIl2Cpp + CLASS_2_CE1760D3B26C5D42__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE1760D3B26C5D42_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE1760D3B26C5D42_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE1760D3B26C5D42_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CE1760D3B26C5D42_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE1760D3B26C5D42_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0B934AF65CEA173B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE1760D3B26C5D42_METHOD_2_0B934AF65CEA173B_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE1760D3B26C5D42_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_0ABEB23FF62F8B8F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE1760D3B26C5D42_METHOD_2_0ABEB23FF62F8B8F_OFFSET))(this, a1);
	}
};
