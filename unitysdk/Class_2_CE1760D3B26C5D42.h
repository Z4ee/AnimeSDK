#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PlayRogueOptionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CE1760D3B26C5D42_DISPOSE_OFFSET UNITYSDK_OFFSET(0x124FB0C0)
#define CLASS_2_CE1760D3B26C5D42_METHOD_2_0B934AF65CEA173B_OFFSET UNITYSDK_OFFSET(0x124FB4F0)
#define CLASS_2_CE1760D3B26C5D42_METHOD_2_71915706CE77067A_OFFSET UNITYSDK_OFFSET(0x124FB790)
#define CLASS_2_CE1760D3B26C5D42_METHOD_2_99272A34A22F949E_OFFSET UNITYSDK_OFFSET(0x124FB710)
#define CLASS_2_CE1760D3B26C5D42_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x124FB670)
#define CLASS_2_CE1760D3B26C5D42_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124FB1A0)
#define CLASS_2_CE1760D3B26C5D42_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x124FB330)
#define CLASS_2_CE1760D3B26C5D42_TICK_OFFSET UNITYSDK_OFFSET(0x124FB380)
#define CLASS_2_CE1760D3B26C5D42__CTOR_OFFSET UNITYSDK_OFFSET(0x124FB030)

inline static constexpr unsigned int Class_2_CE1760D3B26C5D42_TypeDefinitionIndex = 53747;

class Class_2_CE1760D3B26C5D42 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayRogueOptionTalk* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_2_5; // 0x30
	::System::String* Field_2_4; // 0x38
	::System::Boolean Field_2_3; // 0x40

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

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE1760D3B26C5D42_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0B934AF65CEA173B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE1760D3B26C5D42_METHOD_2_0B934AF65CEA173B_OFFSET))(this, a1);
	}

	::System::Void Method_2_99272A34A22F949E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE1760D3B26C5D42_METHOD_2_99272A34A22F949E_OFFSET))(this, a1);
	}

	::System::Void Method_2_71915706CE77067A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE1760D3B26C5D42_METHOD_2_71915706CE77067A_OFFSET))(this, a1);
	}
};
