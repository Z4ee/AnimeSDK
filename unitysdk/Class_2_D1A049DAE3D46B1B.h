#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3979F23DE6A08606.h"
#include "unitysdk/Enum_3_29C0F9DD2D79B68D.h"

class Class_0_16E4307DCC419505_181;
class Class_0_16E4307DCC419505_182;
class Class_0_16E4307DCC419505_295;
class Class_2_21A1D078E640F69A;
namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Config { class ConfigCameraComposer; }
namespace System { class Action; }

#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_3DA085EC8F67F5B7_OFFSET UNITYSDK_OFFSET(0xE4A6550)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_50AF78C78C229325_OFFSET UNITYSDK_OFFSET(0xE4A5910)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0xE4A64E0)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_741DDF759DAB7138_OFFSET UNITYSDK_OFFSET(0xE4A6450)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_A57296D1929045EC_OFFSET UNITYSDK_OFFSET(0xE4A6130)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0xE4A63C0)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_C50B93169B85DAEA_2_OFFSET UNITYSDK_OFFSET(0xE4A6560)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xE4A6330)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_DEF294F8522D4A8A_OFFSET UNITYSDK_OFFSET(0xE4A5B20)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_F011FE82F2197681_OFFSET UNITYSDK_OFFSET(0xE4A6540)
#define CLASS_2_D1A049DAE3D46B1B_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0xE4A53B0)
#define CLASS_2_D1A049DAE3D46B1B__CTOR_OFFSET UNITYSDK_OFFSET(0xE4A6320)

inline static constexpr unsigned int Class_2_D1A049DAE3D46B1B_TypeDefinitionIndex = 46037;

class Class_2_D1A049DAE3D46B1B : public ::Class_1_3979F23DE6A08606
{
public:
	::Class_2_21A1D078E640F69A* Field_2_1; // 0x10
	::Cinemachine::CinemachineVirtualCamera* Field_2_0; // 0x18
	::Cinemachine::CinemachineComposer* Field_2_2; // 0x20
	::MoleMole::Config::ConfigCameraComposer* Field_2_4; // 0x28
	::MoleMole::Cameras::CameraDataAccessor* Field_2_3; // 0x30
	::System::Action* Field_2_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_ONINITIALIZED_OFFSET))(this, a1);
	}

	::System::Void Method_2_50AF78C78C229325(::Class_0_16E4307DCC419505_181* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_181*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_50AF78C78C229325_OFFSET))(this, a1);
	}

	::System::Void Method_2_DEF294F8522D4A8A(::Class_0_16E4307DCC419505_182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_182*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_DEF294F8522D4A8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A57296D1929045EC(::Class_0_16E4307DCC419505_295* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_295*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_A57296D1929045EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_181* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_181*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_182*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_C50B93169B85DAEA_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_741DDF759DAB7138(::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_741DDF759DAB7138_OFFSET))(this, a1);
	}

	::System::Void Method_2_6597F9D2D4A0542F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_6597F9D2D4A0542F_OFFSET))(this);
	}

	::Cinemachine::CinemachineVirtualCamera* Method_2_F011FE82F2197681()
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_F011FE82F2197681_OFFSET))(this);
	}

	::Cinemachine::CinemachineComposer* Method_2_3DA085EC8F67F5B7()
	{
		return ((::Cinemachine::CinemachineComposer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_3DA085EC8F67F5B7_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA_2(::Class_0_16E4307DCC419505_295* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_295*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_C50B93169B85DAEA_2_OFFSET))(this, a1);
	}
};
