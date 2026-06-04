#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AchievementData; }
namespace System { class String; }

#define CLASS_1_62F77726A7B8A98A_1_METHOD_1_19EDB45DD98CF0AE_OFFSET UNITYSDK_OFFSET(0x138F8020)
#define CLASS_1_62F77726A7B8A98A_1_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x138F85F0)
#define CLASS_1_62F77726A7B8A98A_1_METHOD_1_9477221A6F70535F_OFFSET UNITYSDK_OFFSET(0x138F8640)
#define CLASS_1_62F77726A7B8A98A_1_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x138F82E0)
#define CLASS_1_62F77726A7B8A98A_1_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x138F8260)
#define CLASS_1_62F77726A7B8A98A_1_METHOD_1_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x138F8360)
#define CLASS_1_62F77726A7B8A98A_1_METHOD_1_B10FB9597F17FCB4_OFFSET UNITYSDK_OFFSET(0x138F80D0)
#define CLASS_1_62F77726A7B8A98A_1_METHOD_1_E681B6D41E5607D0_OFFSET UNITYSDK_OFFSET(0x138F7F50)
#define CLASS_1_62F77726A7B8A98A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x138F8010)

inline static constexpr unsigned int Class_1_62F77726A7B8A98A_1_TypeDefinitionIndex = 57373;

class Class_1_62F77726A7B8A98A_1 : public ::System::Object
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
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_1__CTOR_OFFSET))(this);
	}

	static ::Class_1_62F77726A7B8A98A_1* Method_1_E681B6D41E5607D0()
	{
		return ((::Class_1_62F77726A7B8A98A_1*(*)())((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_1_METHOD_1_E681B6D41E5607D0_OFFSET))();
	}

	::System::Void Method_1_B10FB9597F17FCB4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_1_METHOD_1_B10FB9597F17FCB4_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_1_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_1_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_1_METHOD_1_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_1_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_9477221A6F70535F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_1_METHOD_1_9477221A6F70535F_OFFSET))(this);
	}

	::RPG::Client::AchievementData* Method_1_19EDB45DD98CF0AE()
	{
		return ((::RPG::Client::AchievementData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_1_METHOD_1_19EDB45DD98CF0AE_OFFSET))(this);
	}
};
