#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AchievementData; }
namespace System { class String; }

#define CLASS_1_62F77726A7B8A98A_METHOD_1_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0x1050D4B0)
#define CLASS_1_62F77726A7B8A98A_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x1050D9A0)
#define CLASS_1_62F77726A7B8A98A_METHOD_1_9477221A6F70535F_OFFSET UNITYSDK_OFFSET(0x1050D9F0)
#define CLASS_1_62F77726A7B8A98A_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1050D690)
#define CLASS_1_62F77726A7B8A98A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1050D610)
#define CLASS_1_62F77726A7B8A98A_METHOD_1_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x1050D710)
#define CLASS_1_62F77726A7B8A98A_METHOD_1_E681B6D41E5607D0_OFFSET UNITYSDK_OFFSET(0x1050D330)
#define CLASS_1_62F77726A7B8A98A_METHOD_1_FB20106E1C67431A_OFFSET UNITYSDK_OFFSET(0x1050D400)
#define CLASS_1_62F77726A7B8A98A__CTOR_OFFSET UNITYSDK_OFFSET(0x1050D3F0)

inline static constexpr unsigned int Class_1_62F77726A7B8A98A_TypeDefinitionIndex = 49770;

class Class_1_62F77726A7B8A98A : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	::System::Boolean Field_1_4; // 0x10
	::System::Boolean Field_1_3; // 0x11
	::System::Boolean Field_1_5; // 0x12

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A__CTOR_OFFSET))(this);
	}

	static ::Class_1_62F77726A7B8A98A* Method_1_E681B6D41E5607D0()
	{
		return ((::Class_1_62F77726A7B8A98A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_E681B6D41E5607D0_OFFSET))();
	}

	::System::Void Method_1_2ADDC85169A509AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_2ADDC85169A509AB_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_9477221A6F70535F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_9477221A6F70535F_OFFSET))(this);
	}

	::RPG::Client::AchievementData* Method_1_FB20106E1C67431A()
	{
		return ((::RPG::Client::AchievementData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F77726A7B8A98A_METHOD_1_FB20106E1C67431A_OFFSET))(this);
	}
};
