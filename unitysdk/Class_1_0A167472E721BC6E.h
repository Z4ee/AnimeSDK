#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactEndTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorEndTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldDef.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_27;
class Class_0_16E4307DCC419505_28;
class Class_0_16E4307DCC419505_29;
class Class_1_0A167472E721BC6E_Class_2_4BD45C3CEB3BD881;
class Class_1_0A167472E721BC6E_Class_2_5727F73557908BE7;
class Class_1_4CFA9D029955CE66;
class Class_1_9448CA6A22062D0F;
class Class_1_FD893FD36F6A3A6D;
class Class_1_FD893FD36F6A3A6D_1;
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0A167472E721BC6E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C244320)
#define CLASS_1_0A167472E721BC6E_METHOD_1_1605FC6B4FFA6EFD_OFFSET UNITYSDK_OFFSET(0x1C244480)
#define CLASS_1_0A167472E721BC6E_METHOD_1_4E99C6ABEAE50CDC_OFFSET UNITYSDK_OFFSET(0x1C2441D0)
#define CLASS_1_0A167472E721BC6E_METHOD_1_55E725BD7B37EF84_OFFSET UNITYSDK_OFFSET(0x1C244DD0)
#define CLASS_1_0A167472E721BC6E_METHOD_1_5FE6533D7B3BEA88_OFFSET UNITYSDK_OFFSET(0x1C2448F0)
#define CLASS_1_0A167472E721BC6E_METHOD_1_779041F24657347D_OFFSET UNITYSDK_OFFSET(0x1C244560)
#define CLASS_1_0A167472E721BC6E_METHOD_1_826EAE410B3F73A1_OFFSET UNITYSDK_OFFSET(0x1C244C70)
#define CLASS_1_0A167472E721BC6E_METHOD_1_838002D43A6961B6_OFFSET UNITYSDK_OFFSET(0x1C244E70)
#define CLASS_1_0A167472E721BC6E_METHOD_1_92ACC9D1F59A56D2_OFFSET UNITYSDK_OFFSET(0x1C244250)
#define CLASS_1_0A167472E721BC6E_METHOD_1_C964735A19AEFFFF_OFFSET UNITYSDK_OFFSET(0x1C243F80)
#define CLASS_1_0A167472E721BC6E_METHOD_1_D56A4018B5745A4D_OFFSET UNITYSDK_OFFSET(0x1C244A50)
#define CLASS_1_0A167472E721BC6E_METHOD_1_FE4C017ED543BC40_OFFSET UNITYSDK_OFFSET(0x1C244D20)
#define CLASS_1_0A167472E721BC6E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2457F0)

inline static constexpr unsigned int Class_1_0A167472E721BC6E_TypeDefinitionIndex = 35859;

class Class_1_0A167472E721BC6E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_4CFA9D029955CE66*>* OCDPAMHBHCO; // 0x10
	::Class_1_0A167472E721BC6E_Class_2_4BD45C3CEB3BD881* LGPJIHPHLIB; // 0x18
	::Class_1_0A167472E721BC6E_Class_2_5727F73557908BE7* ADFPMLFAPPA; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_27*>* NLDANKHFLGA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_28* Method_1_C964735A19AEFFFF(::Class_1_9448CA6A22062D0F* a1)
	{
		return ((::Class_0_16E4307DCC419505_28*(*)(::PVOID, ::Class_1_9448CA6A22062D0F*))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_METHOD_1_C964735A19AEFFFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_92ACC9D1F59A56D2(::Class_0_16E4307DCC419505_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_28*))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_METHOD_1_92ACC9D1F59A56D2_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1605FC6B4FFA6EFD(::Class_0_16E4307DCC419505_28* a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_28*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_METHOD_1_1605FC6B4FFA6EFD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5FE6533D7B3BEA88(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_METHOD_1_5FE6533D7B3BEA88_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_27*>* Method_1_D56A4018B5745A4D(::Class_0_16E4307DCC419505_28* a1)
	{
		return ((::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_27*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_28*))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_METHOD_1_D56A4018B5745A4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E99C6ABEAE50CDC(::Class_1_9448CA6A22062D0F* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldDef& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9448CA6A22062D0F*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldDef&))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_METHOD_1_4E99C6ABEAE50CDC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_779041F24657347D(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::Class_0_16E4307DCC419505_29* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_METHOD_1_779041F24657347D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_826EAE410B3F73A1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactBeginTouchEvent a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2, ::Class_1_FD893FD36F6A3A6D*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactBeginTouchEvent, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::Class_1_FD893FD36F6A3A6D*&))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_METHOD_1_826EAE410B3F73A1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_55E725BD7B37EF84(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorBeginTouchEvent a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2, ::Class_1_FD893FD36F6A3A6D_1*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorBeginTouchEvent, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::Class_1_FD893FD36F6A3A6D_1*&))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_METHOD_1_55E725BD7B37EF84_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_FE4C017ED543BC40(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEndTouchEvent a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2, ::Class_1_FD893FD36F6A3A6D*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEndTouchEvent, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::Class_1_FD893FD36F6A3A6D*&))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_METHOD_1_FE4C017ED543BC40_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_838002D43A6961B6(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorEndTouchEvent a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2, ::Class_1_FD893FD36F6A3A6D_1*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorEndTouchEvent, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::Class_1_FD893FD36F6A3A6D_1*&))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_METHOD_1_838002D43A6961B6_OFFSET))(this, a1, a2, a3);
	}
};
