#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/TarotBookPageType.h"

namespace RPG::Client { class TarotBookProcessContext; }
namespace RPG::GameCore { class ShowTarotBookPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_56490142B6F8D72D_METHOD_3_01109DD29CB4D216_1_OFFSET UNITYSDK_OFFSET(0x96247A0)
#define CLASS_3_56490142B6F8D72D_METHOD_3_01109DD29CB4D216_2_OFFSET UNITYSDK_OFFSET(0x96248B0)
#define CLASS_3_56490142B6F8D72D_METHOD_3_01109DD29CB4D216_3_OFFSET UNITYSDK_OFFSET(0x96249C0)
#define CLASS_3_56490142B6F8D72D_METHOD_3_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x9624690)
#define CLASS_3_56490142B6F8D72D_METHOD_3_0B164D91F80F35F8_OFFSET UNITYSDK_OFFSET(0x96245D0)
#define CLASS_3_56490142B6F8D72D_METHOD_3_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x96242A0)
#define CLASS_3_56490142B6F8D72D_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x9624AD0)
#define CLASS_3_56490142B6F8D72D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9624170)
#define CLASS_3_56490142B6F8D72D__CTOR_OFFSET UNITYSDK_OFFSET(0x9623E00)

inline static constexpr unsigned int Class_3_56490142B6F8D72D_TypeDefinitionIndex = 49182;

class Class_3_56490142B6F8D72D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowTarotBookPage*>
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TarotBookPageType, ::System::Action*>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTarotBookPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTarotBookPage*))((::PBYTE)hIl2Cpp + CLASS_3_56490142B6F8D72D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56490142B6F8D72D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56490142B6F8D72D_METHOD_3_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_3_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56490142B6F8D72D_METHOD_3_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Method_3_01109DD29CB4D216_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56490142B6F8D72D_METHOD_3_01109DD29CB4D216_1_OFFSET))(this);
	}

	::System::Void Method_3_01109DD29CB4D216_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56490142B6F8D72D_METHOD_3_01109DD29CB4D216_2_OFFSET))(this);
	}

	::System::Void Method_3_01109DD29CB4D216_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56490142B6F8D72D_METHOD_3_01109DD29CB4D216_3_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56490142B6F8D72D_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::RPG::Client::TarotBookProcessContext* Method_3_0B164D91F80F35F8()
	{
		return ((::RPG::Client::TarotBookProcessContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56490142B6F8D72D_METHOD_3_0B164D91F80F35F8_OFFSET))(this);
	}
};
