#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class SwitchCaseByDynamicValue; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D5988D84FBC9FB71_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBECAED0)
#define CLASS_3_D5988D84FBC9FB71_METHOD_3_FEF7380CB714A86D_OFFSET UNITYSDK_OFFSET(0xBECAE10)
#define CLASS_3_D5988D84FBC9FB71_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBECAA00)
#define CLASS_3_D5988D84FBC9FB71__CTOR_OFFSET UNITYSDK_OFFSET(0xBECA7B0)
#define CLASS_3_D5988D84FBC9FB71___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBECAFB0)

inline static constexpr unsigned int Class_3_D5988D84FBC9FB71_TypeDefinitionIndex = 45397;

class Class_3_D5988D84FBC9FB71 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchCaseByDynamicValue*>
{
public:
	::Class_3_5775A4FEC79026BC* Field_3_2; // 0x28
	::Il2CppArray<::Class_3_5775A4FEC79026BC*>* Field_3_1; // 0x30
	::System::Collections::Generic::List_1<::Class_3_5775A4FEC79026BC*>* Field_3_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCaseByDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCaseByDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_D5988D84FBC9FB71__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5988D84FBC9FB71_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_FEF7380CB714A86D(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::CompareType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::CompareType))((::PBYTE)hIl2Cpp + CLASS_3_D5988D84FBC9FB71_METHOD_3_FEF7380CB714A86D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5988D84FBC9FB71_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5988D84FBC9FB71___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
