#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3979F23DE6A08606.h"
#include "unitysdk/Enum_3_29C0F9DD2D79B68D.h"

class Class_0_16E4307DCC419505_396;
class Class_0_16E4307DCC419505_397;
class Class_0_16E4307DCC419505_413;
class Class_2_21A1D078E640F69A;
namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Config { class ConfigCameraComposer; }
namespace System { class Action; }

#define CLASS_2_360B8AD992AAAA06_METHOD_2_1876E0E602FF62C3_OFFSET UNITYSDK_OFFSET(0x17A64520)
#define CLASS_2_360B8AD992AAAA06_METHOD_2_3DA085EC8F67F5B7_OFFSET UNITYSDK_OFFSET(0x17A64F50)
#define CLASS_2_360B8AD992AAAA06_METHOD_2_595911FAAE7555DC_OFFSET UNITYSDK_OFFSET(0x17A65090)
#define CLASS_2_360B8AD992AAAA06_METHOD_2_741DDF759DAB7138_OFFSET UNITYSDK_OFFSET(0x17A65180)
#define CLASS_2_360B8AD992AAAA06_METHOD_2_A57296D1929045EC_OFFSET UNITYSDK_OFFSET(0x17A64D50)
#define CLASS_2_360B8AD992AAAA06_METHOD_2_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0x17A65000)
#define CLASS_2_360B8AD992AAAA06_METHOD_2_C50B93169B85DAEA_2_OFFSET UNITYSDK_OFFSET(0x17A650F0)
#define CLASS_2_360B8AD992AAAA06_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x17A64F70)
#define CLASS_2_360B8AD992AAAA06_METHOD_2_DEF294F8522D4A8A_OFFSET UNITYSDK_OFFSET(0x17A64740)
#define CLASS_2_360B8AD992AAAA06_METHOD_2_F011FE82F2197681_OFFSET UNITYSDK_OFFSET(0x17A64F60)
#define CLASS_2_360B8AD992AAAA06_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x17A63FC0)
#define CLASS_2_360B8AD992AAAA06__CTOR_OFFSET UNITYSDK_OFFSET(0x17A64F40)

inline static constexpr unsigned int Class_2_360B8AD992AAAA06_TypeDefinitionIndex = 53977;

class Class_2_360B8AD992AAAA06 : public ::Class_1_3979F23DE6A08606
{
public:
	::MoleMole::Config::ConfigCameraComposer* Field_2_7; // 0x10
	::System::Action* Field_2_6; // 0x18
	::Cinemachine::CinemachineComposer* Field_2_1; // 0x20
	::Cinemachine::CinemachineVirtualCamera* Field_2_3; // 0x28
	::MoleMole::Cameras::CameraDataAccessor* Field_2_0; // 0x30
	::Class_2_21A1D078E640F69A* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_360B8AD992AAAA06__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>*))((::PBYTE)hIl2Cpp + CLASS_2_360B8AD992AAAA06_ONINITIALIZED_OFFSET))(this, a1);
	}

	::System::Void Method_2_1876E0E602FF62C3(::Class_0_16E4307DCC419505_396* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_396*))((::PBYTE)hIl2Cpp + CLASS_2_360B8AD992AAAA06_METHOD_2_1876E0E602FF62C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_DEF294F8522D4A8A(::Class_0_16E4307DCC419505_397* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_397*))((::PBYTE)hIl2Cpp + CLASS_2_360B8AD992AAAA06_METHOD_2_DEF294F8522D4A8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A57296D1929045EC(::Class_0_16E4307DCC419505_413* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_413*))((::PBYTE)hIl2Cpp + CLASS_2_360B8AD992AAAA06_METHOD_2_A57296D1929045EC_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineComposer* Method_2_3DA085EC8F67F5B7()
	{
		return ((::Cinemachine::CinemachineComposer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_360B8AD992AAAA06_METHOD_2_3DA085EC8F67F5B7_OFFSET))(this);
	}

	::Cinemachine::CinemachineVirtualCamera* Method_2_F011FE82F2197681()
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_360B8AD992AAAA06_METHOD_2_F011FE82F2197681_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_413* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_413*))((::PBYTE)hIl2Cpp + CLASS_2_360B8AD992AAAA06_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_397* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_397*))((::PBYTE)hIl2Cpp + CLASS_2_360B8AD992AAAA06_METHOD_2_C50B93169B85DAEA_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_595911FAAE7555DC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_360B8AD992AAAA06_METHOD_2_595911FAAE7555DC_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA_2(::Class_0_16E4307DCC419505_396* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_396*))((::PBYTE)hIl2Cpp + CLASS_2_360B8AD992AAAA06_METHOD_2_C50B93169B85DAEA_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_741DDF759DAB7138(::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>*))((::PBYTE)hIl2Cpp + CLASS_2_360B8AD992AAAA06_METHOD_2_741DDF759DAB7138_OFFSET))(this, a1);
	}
};
