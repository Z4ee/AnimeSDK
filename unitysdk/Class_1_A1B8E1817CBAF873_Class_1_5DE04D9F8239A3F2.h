#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ScenePerformConfig; }
namespace System { class Action; }

#define CLASS_1_A1B8E1817CBAF873_CLASS_1_5DE04D9F8239A3F2_METHOD_1_00731728353335DC_OFFSET UNITYSDK_OFFSET(0x161F1090)
#define CLASS_1_A1B8E1817CBAF873_CLASS_1_5DE04D9F8239A3F2__CTOR_OFFSET UNITYSDK_OFFSET(0x161F1080)

inline static constexpr unsigned int Class_1_A1B8E1817CBAF873_Class_1_5DE04D9F8239A3F2_TypeDefinitionIndex = 79767;

class Class_1_A1B8E1817CBAF873_Class_1_5DE04D9F8239A3F2 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1B8E1817CBAF873_CLASS_1_5DE04D9F8239A3F2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_00731728353335DC(::MoleMole::Config::ScenePerformConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScenePerformConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1B8E1817CBAF873_CLASS_1_5DE04D9F8239A3F2_METHOD_1_00731728353335DC_OFFSET))(this, a1);
	}
};
