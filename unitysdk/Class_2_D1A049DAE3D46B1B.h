#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3979F23DE6A08606.h"
#include "unitysdk/Enum_3_29C0F9DD2D79B68D.h"

class Class_0_16E4307DCC419505_329;
class Class_0_16E4307DCC419505_330;
class Class_0_16E4307DCC419505_377;
class Class_2_21A1D078E640F69A;
namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Config { class ConfigCameraComposer; }
namespace System { class Action; }

#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_3DA085EC8F67F5B7_OFFSET UNITYSDK_OFFSET(0x117F5050)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_50AF78C78C229325_OFFSET UNITYSDK_OFFSET(0x117F4360)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0x117F4F40)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_741DDF759DAB7138_OFFSET UNITYSDK_OFFSET(0x117F4D90)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_A57296D1929045EC_OFFSET UNITYSDK_OFFSET(0x117F4B80)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0x117F4EB0)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_C50B93169B85DAEA_2_OFFSET UNITYSDK_OFFSET(0x117F4FB0)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x117F4E20)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_DEF294F8522D4A8A_OFFSET UNITYSDK_OFFSET(0x117F4570)
#define CLASS_2_D1A049DAE3D46B1B_METHOD_2_F011FE82F2197681_OFFSET UNITYSDK_OFFSET(0x117F5040)
#define CLASS_2_D1A049DAE3D46B1B_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x117F3E00)
#define CLASS_2_D1A049DAE3D46B1B__CTOR_OFFSET UNITYSDK_OFFSET(0x117F4D80)

inline static constexpr unsigned int Class_2_D1A049DAE3D46B1B_TypeDefinitionIndex = 84702;

class Class_2_D1A049DAE3D46B1B : public ::Class_1_3979F23DE6A08606
{
public:
	::System::Action* Field_2_5; // 0x10
	::Class_2_21A1D078E640F69A* Field_2_1; // 0x18
	::Cinemachine::CinemachineVirtualCamera* Field_2_0; // 0x20
	::MoleMole::Cameras::CameraDataAccessor* Field_2_3; // 0x28
	::Cinemachine::CinemachineComposer* Field_2_2; // 0x30
	::MoleMole::Config::ConfigCameraComposer* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_ONINITIALIZED_OFFSET))(this, a1);
	}

	::System::Void Method_2_50AF78C78C229325(::Class_0_16E4307DCC419505_330* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_330*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_50AF78C78C229325_OFFSET))(this, a1);
	}

	::System::Void Method_2_DEF294F8522D4A8A(::Class_0_16E4307DCC419505_329* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_329*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_DEF294F8522D4A8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A57296D1929045EC(::Class_0_16E4307DCC419505_377* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_377*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_A57296D1929045EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_741DDF759DAB7138(::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_741DDF759DAB7138_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_330* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_330*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_329* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_329*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_C50B93169B85DAEA_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_6597F9D2D4A0542F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_6597F9D2D4A0542F_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA_2(::Class_0_16E4307DCC419505_377* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_377*))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_C50B93169B85DAEA_2_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCamera* Method_2_F011FE82F2197681()
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_F011FE82F2197681_OFFSET))(this);
	}

	::Cinemachine::CinemachineComposer* Method_2_3DA085EC8F67F5B7()
	{
		return ((::Cinemachine::CinemachineComposer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1A049DAE3D46B1B_METHOD_2_3DA085EC8F67F5B7_OFFSET))(this);
	}
};
