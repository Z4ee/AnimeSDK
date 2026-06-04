#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Action; }

#define CLASS_1_D707BE2AC47F299A_ADD_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1064BF00)
#define CLASS_1_D707BE2AC47F299A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1064C140)
#define CLASS_1_D707BE2AC47F299A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1064BEA0)
#define CLASS_1_D707BE2AC47F299A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1064C1C0)
#define CLASS_1_D707BE2AC47F299A_METHOD_1_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1064C2C0)
#define CLASS_1_D707BE2AC47F299A_METHOD_1_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x1064C360)
#define CLASS_1_D707BE2AC47F299A_METHOD_1_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x1064C400)
#define CLASS_1_D707BE2AC47F299A_METHOD_1_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0x1064C4A0)
#define CLASS_1_D707BE2AC47F299A_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1064C220)
#define CLASS_1_D707BE2AC47F299A_REMOVE_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1064BF60)
#define CLASS_1_D707BE2AC47F299A__CTOR_OFFSET UNITYSDK_OFFSET(0x1064BFC0)

inline static constexpr unsigned int Class_1_D707BE2AC47F299A_TypeDefinitionIndex = 56186;

class Class_1_D707BE2AC47F299A : public ::System::Object
{
public:
	::System::Action* OnMaybeChanged; // 0x10
	::RPG::AvatarSystem::IAvatar* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_D707BE2AC47F299A__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D707BE2AC47F299A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void add_OnMaybeChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D707BE2AC47F299A_ADD_ONMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnMaybeChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D707BE2AC47F299A_REMOVE_ONMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D707BE2AC47F299A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D707BE2AC47F299A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D707BE2AC47F299A_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D707BE2AC47F299A_METHOD_1_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D707BE2AC47F299A_METHOD_1_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D707BE2AC47F299A_METHOD_1_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D707BE2AC47F299A_METHOD_1_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}
};
