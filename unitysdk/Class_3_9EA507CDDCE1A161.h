#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_111F36CF5247BACE_4;
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_9EA507CDDCE1A161_DISPOSE_OFFSET UNITYSDK_OFFSET(0x902C7B0)
#define CLASS_3_9EA507CDDCE1A161_METHOD_3_CDDABF0A02598ECD_OFFSET UNITYSDK_OFFSET(0x902CAA0)
#define CLASS_3_9EA507CDDCE1A161_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x902C980)
#define CLASS_3_9EA507CDDCE1A161__CTOR_OFFSET UNITYSDK_OFFSET(0x902C780)
#define CLASS_3_9EA507CDDCE1A161___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x902CBA0)

inline static constexpr unsigned int Class_3_9EA507CDDCE1A161_TypeDefinitionIndex = 49658;

class Class_3_9EA507CDDCE1A161 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_111F36CF5247BACE_4*>
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::LevelGraphComponent*>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_111F36CF5247BACE_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_111F36CF5247BACE_4*))((::PBYTE)hIl2Cpp + CLASS_3_9EA507CDDCE1A161__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EA507CDDCE1A161_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EA507CDDCE1A161_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::LevelGraphComponent* Method_3_CDDABF0A02598ECD(::System::String* a1)
	{
		return ((::RPG::GameCore::LevelGraphComponent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_9EA507CDDCE1A161_METHOD_3_CDDABF0A02598ECD_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EA507CDDCE1A161___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
