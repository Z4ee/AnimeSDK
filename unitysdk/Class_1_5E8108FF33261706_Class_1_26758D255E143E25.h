#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class MonoSurfConfig; }
namespace System { class Action; }

#define CLASS_1_5E8108FF33261706_CLASS_1_26758D255E143E25_METHOD_1_9FD2D0BF02B59C42_OFFSET UNITYSDK_OFFSET(0x123E50A0)
#define CLASS_1_5E8108FF33261706_CLASS_1_26758D255E143E25__CTOR_OFFSET UNITYSDK_OFFSET(0x123E5090)

inline static constexpr unsigned int Class_1_5E8108FF33261706_Class_1_26758D255E143E25_TypeDefinitionIndex = 81186;

class Class_1_5E8108FF33261706_Class_1_26758D255E143E25 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8108FF33261706_CLASS_1_26758D255E143E25__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9FD2D0BF02B59C42(::MoleMole::Config::MonoSurfConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MonoSurfConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5E8108FF33261706_CLASS_1_26758D255E143E25_METHOD_1_9FD2D0BF02B59C42_OFFSET))(this, a1);
	}
};
