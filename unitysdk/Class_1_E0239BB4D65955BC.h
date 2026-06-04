#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_799;
class Class_1_AE0CA897D782D638;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_E0239BB4D65955BC_METHOD_1_1EB69C4359B9295D_OFFSET UNITYSDK_OFFSET(0x112AAA10)
#define CLASS_1_E0239BB4D65955BC_METHOD_1_209E4250CA87B30E_OFFSET UNITYSDK_OFFSET(0x112AAA70)
#define CLASS_1_E0239BB4D65955BC_METHOD_1_7CB4BF39BF8A51BE_OFFSET UNITYSDK_OFFSET(0x112AABC0)
#define CLASS_1_E0239BB4D65955BC__CTOR_OFFSET UNITYSDK_OFFSET(0x112AAD10)

inline static constexpr unsigned int Class_1_E0239BB4D65955BC_TypeDefinitionIndex = 61313;

class Class_1_E0239BB4D65955BC : public ::System::Object
{
public:
	::Class_1_AE0CA897D782D638* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0239BB4D65955BC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1EB69C4359B9295D(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_E0239BB4D65955BC_METHOD_1_1EB69C4359B9295D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_209E4250CA87B30E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0239BB4D65955BC_METHOD_1_209E4250CA87B30E_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_799* Method_1_7CB4BF39BF8A51BE()
	{
		return ((::Class_0_16E4307DCC419505_799*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0239BB4D65955BC_METHOD_1_7CB4BF39BF8A51BE_OFFSET))(this);
	}
};
