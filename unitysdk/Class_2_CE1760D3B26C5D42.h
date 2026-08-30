#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PlayRogueOptionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CE1760D3B26C5D42_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154777F0)
#define CLASS_2_CE1760D3B26C5D42_METHOD_2_0ABEB23FF62F8B8F_OFFSET UNITYSDK_OFFSET(0x154780E0)
#define CLASS_2_CE1760D3B26C5D42_METHOD_2_7411494DA7276605_OFFSET UNITYSDK_OFFSET(0x15477DA0)
#define CLASS_2_CE1760D3B26C5D42_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x15478010)
#define CLASS_2_CE1760D3B26C5D42_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x15477F50)
#define CLASS_2_CE1760D3B26C5D42_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15477920)
#define CLASS_2_CE1760D3B26C5D42_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15477B50)
#define CLASS_2_CE1760D3B26C5D42_TICK_OFFSET UNITYSDK_OFFSET(0x15477BA0)
#define CLASS_2_CE1760D3B26C5D42__CTOR_OFFSET UNITYSDK_OFFSET(0x15477750)

inline static constexpr unsigned int Class_2_CE1760D3B26C5D42_TypeDefinitionIndex = 58427;

class Class_2_CE1760D3B26C5D42 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* AMDDFDJAHCG; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* PFFPBHGNEFM; // 0x20
	::RPG::GameCore::PlayRogueOptionTalk* OFKGLJOAMLD; // 0x28
	::System::String* NCCEFIDOIHM; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::System::Boolean BKPCHGDNEFH; // 0x40

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

	::System::Boolean Method_2_7411494DA7276605(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE1760D3B26C5D42_METHOD_2_7411494DA7276605_OFFSET))(this, a1);
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
