#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA4F59A81E5559FD;
namespace RPG::Client { class ActivityModule; }

#define CLASS_1_615A6094D352273A_METHOD_1_324F8F128C154A45_OFFSET UNITYSDK_OFFSET(0x117D16C0)
#define CLASS_1_615A6094D352273A_METHOD_1_DD66E2D36285EA5A_OFFSET UNITYSDK_OFFSET(0x117D1710)
#define CLASS_1_615A6094D352273A__CTOR_OFFSET UNITYSDK_OFFSET(0x117D1670)

inline static constexpr unsigned int Class_1_615A6094D352273A_TypeDefinitionIndex = 50063;

class Class_1_615A6094D352273A : public ::System::Object
{
public:
	::RPG::Client::ActivityModule* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ActivityModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityModule*))((::PBYTE)hIl2Cpp + CLASS_1_615A6094D352273A__CTOR_OFFSET))(this, a1);
	}

	::Class_1_EA4F59A81E5559FD* Method_1_324F8F128C154A45(::System::UInt32 a1)
	{
		return ((::Class_1_EA4F59A81E5559FD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_615A6094D352273A_METHOD_1_324F8F128C154A45_OFFSET))(this, a1);
	}

	::Class_1_EA4F59A81E5559FD* Method_1_DD66E2D36285EA5A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_EA4F59A81E5559FD*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_615A6094D352273A_METHOD_1_DD66E2D36285EA5A_OFFSET))(this, a1, a2);
	}
};
