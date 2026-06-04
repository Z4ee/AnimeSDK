#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;
class Class_1_F3391C70DC37088D;
class Class_2_6B967A8FF85DEF97;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_1_059915F1CFEF189E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1435DCB0)
#define CLASS_1_059915F1CFEF189E_METHOD_1_05891E8E87C14559_OFFSET UNITYSDK_OFFSET(0x1435E9E0)
#define CLASS_1_059915F1CFEF189E_METHOD_1_2F2F7924D292824D_OFFSET UNITYSDK_OFFSET(0x1435EAC0)
#define CLASS_1_059915F1CFEF189E_METHOD_1_46D79C223C10A615_OFFSET UNITYSDK_OFFSET(0x1435EE70)
#define CLASS_1_059915F1CFEF189E_METHOD_1_8F2FB78D517A1477_OFFSET UNITYSDK_OFFSET(0x1435E700)
#define CLASS_1_059915F1CFEF189E_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1435EBF0)
#define CLASS_1_059915F1CFEF189E_METHOD_1_BCBA2F161B837B0C_OFFSET UNITYSDK_OFFSET(0x1435ECC0)
#define CLASS_1_059915F1CFEF189E_METHOD_1_F89366F97D7CD50A_OFFSET UNITYSDK_OFFSET(0x1435DE60)
#define CLASS_1_059915F1CFEF189E__CTOR_OFFSET UNITYSDK_OFFSET(0x1435EEE0)

inline static constexpr unsigned int Class_1_059915F1CFEF189E_TypeDefinitionIndex = 56727;

class Class_1_059915F1CFEF189E : public ::System::Object
{
public:
	::Class_2_6B967A8FF85DEF97* Field_1_0; // 0x10
	::Class_1_F3391C70DC37088D* Field_1_1; // 0x18
	::RPG::GameCore::TaskContext* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::Class_1_36264895A759B0FF* Field_1_4; // 0x30
	::UnityEngine::Playables::PlayableDirector* Field_1_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* Field_1_6; // 0x40
	::System::Int32 Field_1_7; // 0x48

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

	::System::Void Method_1_8F2FB78D517A1477(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_059915F1CFEF189E_METHOD_1_8F2FB78D517A1477_OFFSET))(this, a1);
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
