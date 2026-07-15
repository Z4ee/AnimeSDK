#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AchievementData; }
namespace System { class String; }

#define CLASS_1_62F77726A7B8A98A_METHOD_1_19EDB45DD98CF0AE_OFFSET UNITYSDK_OFFSET(0x169E5F80)
#define CLASS_1_62F77726A7B8A98A_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x169E64E0)
#define CLASS_1_62F77726A7B8A98A_METHOD_1_9477221A6F70535F_OFFSET UNITYSDK_OFFSET(0x169E6530)
#define CLASS_1_62F77726A7B8A98A_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x169E6240)
#define CLASS_1_62F77726A7B8A98A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x169E61C0)
#define CLASS_1_62F77726A7B8A98A_METHOD_1_B10FB9597F17FCB4_OFFSET UNITYSDK_OFFSET(0x169E6030)
#define CLASS_1_62F77726A7B8A98A_METHOD_1_E681B6D41E5607D0_OFFSET UNITYSDK_OFFSET(0x169E5EB0)
#define CLASS_1_62F77726A7B8A98A_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x169E62C0)
#define CLASS_1_62F77726A7B8A98A__CTOR_OFFSET UNITYSDK_OFFSET(0x169E5F70)

inline static constexpr unsigned int Class_1_62F77726A7B8A98A_TypeDefinitionIndex = 58631;

class Class_1_62F77726A7B8A98A : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	::System::Boolean Field_1_3; // 0x10
	::System::Boolean Field_1_4; // 0x11
	::System::Boolean Field_1_5; // 0x12

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A__CTOR_OFFSET))(this);
	}

	static ::Class_1_62F77726A7B8A98A* Method_1_E681B6D41E5607D0()
	{
		return ((::Class_1_62F77726A7B8A98A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_E681B6D41E5607D0_OFFSET))();
	}

	::System::Void Method_1_B10FB9597F17FCB4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_B10FB9597F17FCB4_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_9477221A6F70535F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_9477221A6F70535F_OFFSET))(this);
	}

	::RPG::Client::AchievementData* Method_1_19EDB45DD98CF0AE()
	{
		return ((::RPG::Client::AchievementData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_19EDB45DD98CF0AE_OFFSET))(this);
	}
};
