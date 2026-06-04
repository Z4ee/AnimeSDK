#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetDynamicValueByCopyingBatchItem; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }

#define CLASS_4_D5299EFCCD69BF02_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x192510A0)
#define CLASS_4_D5299EFCCD69BF02_METHOD_4_017371A88D09A16A_OFFSET UNITYSDK_OFFSET(0x19250E50)
#define CLASS_4_D5299EFCCD69BF02_METHOD_4_690EB21B07B220FD_OFFSET UNITYSDK_OFFSET(0x19250D30)
#define CLASS_4_D5299EFCCD69BF02__CTOR_OFFSET UNITYSDK_OFFSET(0x19250DD0)

inline static constexpr unsigned int Class_4_D5299EFCCD69BF02_TypeDefinitionIndex = 22520;

class Class_4_D5299EFCCD69BF02 : public ::RPG::GameCore::SetDynamicValueBase
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x18
	::RPG::GameCore::DynamicString* Field_4_1; // 0x20
	::Il2CppArray<::RPG::GameCore::SetDynamicValueByCopyingBatchItem*>* Field_4_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_4_3; // 0x30
	::RPG::GameCore::DynamicValueContextScope Field_4_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D5299EFCCD69BF02__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_690EB21B07B220FD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_D5299EFCCD69BF02*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_D5299EFCCD69BF02*&))((::PBYTE)hIl2Cpp + CLASS_4_D5299EFCCD69BF02_METHOD_4_690EB21B07B220FD_OFFSET))(a1, a2);
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
