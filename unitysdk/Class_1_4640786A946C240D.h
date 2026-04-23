#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MazeAutoUseMPItemHintData; }

#define CLASS_1_4640786A946C240D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11AA2960)
#define CLASS_1_4640786A946C240D_METHOD_1_0C40E517E32C6432_OFFSET UNITYSDK_OFFSET(0x11AA29E0)
#define CLASS_1_4640786A946C240D_METHOD_1_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0x11AA2EF0)
#define CLASS_1_4640786A946C240D_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x11AA3650)
#define CLASS_1_4640786A946C240D_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x11AA3710)
#define CLASS_1_4640786A946C240D_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x11AA36A0)
#define CLASS_1_4640786A946C240D_METHOD_1_CC2FBC3BD9171E9F_1_OFFSET UNITYSDK_OFFSET(0x11AA3560)
#define CLASS_1_4640786A946C240D_METHOD_1_CC2FBC3BD9171E9F_2_OFFSET UNITYSDK_OFFSET(0x11AA35B0)
#define CLASS_1_4640786A946C240D_METHOD_1_CC2FBC3BD9171E9F_3_OFFSET UNITYSDK_OFFSET(0x11AA3600)
#define CLASS_1_4640786A946C240D_METHOD_1_CC2FBC3BD9171E9F_OFFSET UNITYSDK_OFFSET(0x11AA2EA0)
#define CLASS_1_4640786A946C240D_METHOD_1_D8282FB1E21EAD68_OFFSET UNITYSDK_OFFSET(0x11AA2B10)
#define CLASS_1_4640786A946C240D_METHOD_1_EF2643F7CF2DC72A_OFFSET UNITYSDK_OFFSET(0x11AA37A0)
#define CLASS_1_4640786A946C240D_START_OFFSET UNITYSDK_OFFSET(0x11AA26F0)
#define CLASS_1_4640786A946C240D_STOP_OFFSET UNITYSDK_OFFSET(0x11AA28C0)
#define CLASS_1_4640786A946C240D__CTOR_OFFSET UNITYSDK_OFFSET(0x11AA3980)

inline static constexpr unsigned int Class_1_4640786A946C240D_TypeDefinitionIndex = 57339;

class Class_1_4640786A946C240D : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x2716; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::RPG::Client::MazeAutoUseMPItemHintData* Field_1_3; // 0x10
	::System::Single Field_1_5; // 0x18
	::System::Boolean Field_1_6; // 0x1C
	::System::Boolean Field_1_2; // 0x1D
	::System::Boolean Field_1_4; // 0x1E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4640786A946C240D__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4640786A946C240D_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4640786A946C240D_STOP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4640786A946C240D_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_0C40E517E32C6432()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4640786A946C240D_METHOD_1_0C40E517E32C6432_OFFSET))(this);
	}

	::System::Void Method_1_CC2FBC3BD9171E9F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4640786A946C240D_METHOD_1_CC2FBC3BD9171E9F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC2FBC3BD9171E9F_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4640786A946C240D_METHOD_1_CC2FBC3BD9171E9F_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC2FBC3BD9171E9F_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4640786A946C240D_METHOD_1_CC2FBC3BD9171E9F_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC2FBC3BD9171E9F_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4640786A946C240D_METHOD_1_CC2FBC3BD9171E9F_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4640786A946C240D_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4640786A946C240D_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4640786A946C240D_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_1_394F35BBA0EE596A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4640786A946C240D_METHOD_1_394F35BBA0EE596A_OFFSET))(this);
	}

	::System::Boolean Method_1_D8282FB1E21EAD68()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4640786A946C240D_METHOD_1_D8282FB1E21EAD68_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_EF2643F7CF2DC72A()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4640786A946C240D_METHOD_1_EF2643F7CF2DC72A_OFFSET))(this);
	}
};
