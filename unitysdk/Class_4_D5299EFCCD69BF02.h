#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetDynamicValueByCopyingBatchItem; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }

#define CLASS_4_D5299EFCCD69BF02_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1D5C61C0)
#define CLASS_4_D5299EFCCD69BF02_METHOD_4_017371A88D09A16A_OFFSET UNITYSDK_OFFSET(0x1D5C5F70)
#define CLASS_4_D5299EFCCD69BF02_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x1D5C5ED0)
#define CLASS_4_D5299EFCCD69BF02__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C5F30)

inline static constexpr unsigned int Class_4_D5299EFCCD69BF02_TypeDefinitionIndex = 23551;

class Class_4_D5299EFCCD69BF02 : public ::RPG::GameCore::SetDynamicValueBase
{
public:
	::Il2CppArray<::RPG::GameCore::SetDynamicValueByCopyingBatchItem*>* ODDCGJLJMNM; // 0x18
	::RPG::GameCore::TargetEvaluator* KCDLOAHLFAO; // 0x20
	::RPG::GameCore::DynamicString* DMOBBGFFGEB; // 0x28
	::RPG::GameCore::TargetEvaluator* BFICDICDOFO; // 0x30
	::RPG::GameCore::DynamicValueContextScope JDLEDIOAPHJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D5299EFCCD69BF02__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_D5299EFCCD69BF02*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_D5299EFCCD69BF02*&))((::PBYTE)hIl2Cpp + CLASS_4_D5299EFCCD69BF02_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_017371A88D09A16A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_D5299EFCCD69BF02* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_D5299EFCCD69BF02*))((::PBYTE)hIl2Cpp + CLASS_4_D5299EFCCD69BF02_METHOD_4_017371A88D09A16A_OFFSET))(a1, a2);
	}

	::System::Object* GetDynamicKey()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D5299EFCCD69BF02_GETDYNAMICKEY_OFFSET))(this);
	}
};
