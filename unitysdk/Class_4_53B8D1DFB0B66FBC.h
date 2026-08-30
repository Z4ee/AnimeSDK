#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_4_53B8D1DFB0B66FBC_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C810CD0)
#define CLASS_4_53B8D1DFB0B66FBC_METHOD_4_0C2DE072D09B1F26_OFFSET UNITYSDK_OFFSET(0x1C810A80)
#define CLASS_4_53B8D1DFB0B66FBC_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x1C8109E0)
#define CLASS_4_53B8D1DFB0B66FBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C810A40)

inline static constexpr unsigned int Class_4_53B8D1DFB0B66FBC_TypeDefinitionIndex = 23827;

class Class_4_53B8D1DFB0B66FBC : public ::RPG::GameCore::SetDynamicValueBase
{
public:
	::RPG::GameCore::DynamicFloat* PMJKDMDOEDE; // 0x18
	::RPG::GameCore::TargetEvaluator* MKMCENPANNO; // 0x20
	::RPG::GameCore::TargetEvaluator* AAHOJJJPFLD; // 0x28
	::System::String* FHLJGDGMMHK; // 0x30
	::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_53B8D1DFB0B66FBC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_53B8D1DFB0B66FBC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_53B8D1DFB0B66FBC*&))((::PBYTE)hIl2Cpp + CLASS_4_53B8D1DFB0B66FBC_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_0C2DE072D09B1F26(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_53B8D1DFB0B66FBC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_53B8D1DFB0B66FBC*))((::PBYTE)hIl2Cpp + CLASS_4_53B8D1DFB0B66FBC_METHOD_4_0C2DE072D09B1F26_OFFSET))(a1, a2);
	}

	::System::Object* GetDynamicKey()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_53B8D1DFB0B66FBC_GETDYNAMICKEY_OFFSET))(this);
	}
};
