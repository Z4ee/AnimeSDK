#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;
class Class_1_F3391C70DC37088D;
class Class_2_D533150DA9942A27;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_1_059915F1CFEF189E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14C33F20)
#define CLASS_1_059915F1CFEF189E_METHOD_1_05891E8E87C14559_OFFSET UNITYSDK_OFFSET(0x14C34F10)
#define CLASS_1_059915F1CFEF189E_METHOD_1_2F2F7924D292824D_OFFSET UNITYSDK_OFFSET(0x14C34FF0)
#define CLASS_1_059915F1CFEF189E_METHOD_1_46D79C223C10A615_OFFSET UNITYSDK_OFFSET(0x14C353A0)
#define CLASS_1_059915F1CFEF189E_METHOD_1_9BB0845AD13FC9CB_OFFSET UNITYSDK_OFFSET(0x14C34C50)
#define CLASS_1_059915F1CFEF189E_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x14C35120)
#define CLASS_1_059915F1CFEF189E_METHOD_1_BCBA2F161B837B0C_OFFSET UNITYSDK_OFFSET(0x14C351F0)
#define CLASS_1_059915F1CFEF189E_METHOD_1_F89366F97D7CD50A_OFFSET UNITYSDK_OFFSET(0x14C34080)
#define CLASS_1_059915F1CFEF189E__CTOR_OFFSET UNITYSDK_OFFSET(0x14C35410)

inline static constexpr unsigned int Class_1_059915F1CFEF189E_TypeDefinitionIndex = 60794;

class Class_1_059915F1CFEF189E : public ::System::Object
{
public:
	::Class_2_D533150DA9942A27* EKNDGBINNII; // 0x10
	::UnityEngine::Playables::PlayableDirector* JOPCGEFEJAM; // 0x18
	::Class_1_F3391C70DC37088D* IICPBHINLJH; // 0x20
	::System::String* GECCDOFLJDF; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* IOAFCOHLBIN; // 0x38
	::Class_1_36264895A759B0FF* PDOJELJJHCO; // 0x40
	::System::Int32 FMJHGJLOGPG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_059915F1CFEF189E__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_059915F1CFEF189E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F89366F97D7CD50A(::System::String* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_059915F1CFEF189E_METHOD_1_F89366F97D7CD50A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2F2F7924D292824D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_059915F1CFEF189E_METHOD_1_2F2F7924D292824D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9BB0845AD13FC9CB(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_059915F1CFEF189E_METHOD_1_9BB0845AD13FC9CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_059915F1CFEF189E_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_05891E8E87C14559(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_059915F1CFEF189E_METHOD_1_05891E8E87C14559_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCBA2F161B837B0C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_059915F1CFEF189E_METHOD_1_BCBA2F161B837B0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_46D79C223C10A615(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_059915F1CFEF189E_METHOD_1_46D79C223C10A615_OFFSET))(this, a1);
	}
};
