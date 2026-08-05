#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSkinPreview; }
namespace System { class Action; }

#define CLASS_1_514987318BCBE1AA_CLASS_1_004DDB8B850F5A22_METHOD_1_2775422EEDA00E26_OFFSET UNITYSDK_OFFSET(0x128F51A0)
#define CLASS_1_514987318BCBE1AA_CLASS_1_004DDB8B850F5A22__CTOR_OFFSET UNITYSDK_OFFSET(0x128F5190)

inline static constexpr unsigned int Class_1_514987318BCBE1AA_Class_1_004DDB8B850F5A22_TypeDefinitionIndex = 75507;

class Class_1_514987318BCBE1AA_Class_1_004DDB8B850F5A22 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_514987318BCBE1AA_CLASS_1_004DDB8B850F5A22__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2775422EEDA00E26(::MoleMole::Config::ConfigSkinPreview* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSkinPreview*))((::PBYTE)hIl2Cpp + CLASS_1_514987318BCBE1AA_CLASS_1_004DDB8B850F5A22_METHOD_1_2775422EEDA00E26_OFFSET))(this, a1);
	}
};
