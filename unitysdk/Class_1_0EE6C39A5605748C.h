#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }

#define CLASS_1_0EE6C39A5605748C_METHOD_1_25B0D5B904ED55FD_OFFSET UNITYSDK_OFFSET(0xAF93FF0)
#define CLASS_1_0EE6C39A5605748C_METHOD_1_52E9CDCCC280B9D8_OFFSET UNITYSDK_OFFSET(0xAF93B40)
#define CLASS_1_0EE6C39A5605748C_METHOD_1_77577333B4681208_OFFSET UNITYSDK_OFFSET(0xAF93F20)
#define CLASS_1_0EE6C39A5605748C_METHOD_1_99AE46E753A15A87_OFFSET UNITYSDK_OFFSET(0xAF94100)
#define CLASS_1_0EE6C39A5605748C_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xAF93E00)
#define CLASS_1_0EE6C39A5605748C_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAF93DB0)
#define CLASS_1_0EE6C39A5605748C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAF93D60)
#define CLASS_1_0EE6C39A5605748C_METHOD_1_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0xAF93EB0)
#define CLASS_1_0EE6C39A5605748C_METHOD_1_EACC41E2EE83C172_OFFSET UNITYSDK_OFFSET(0xAF93C60)
#define CLASS_1_0EE6C39A5605748C__CTOR_OFFSET UNITYSDK_OFFSET(0xAF94160)

inline static constexpr unsigned int Class_1_0EE6C39A5605748C_TypeDefinitionIndex = 67376;

class Class_1_0EE6C39A5605748C : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE6C39A5605748C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_52E9CDCCC280B9D8(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_0EE6C39A5605748C_METHOD_1_52E9CDCCC280B9D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_EACC41E2EE83C172(::System::Decimal a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + CLASS_1_0EE6C39A5605748C_METHOD_1_EACC41E2EE83C172_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE6C39A5605748C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE6C39A5605748C_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE6C39A5605748C_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_1_CF8BA38996D09531()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE6C39A5605748C_METHOD_1_CF8BA38996D09531_OFFSET))(this);
	}

	::System::Boolean Method_1_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE6C39A5605748C_METHOD_1_77577333B4681208_OFFSET))(this);
	}

	::System::String* Method_1_25B0D5B904ED55FD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE6C39A5605748C_METHOD_1_25B0D5B904ED55FD_OFFSET))(this);
	}

	::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> Method_1_99AE46E753A15A87()
	{
		return ((::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE6C39A5605748C_METHOD_1_99AE46E753A15A87_OFFSET))(this);
	}
};
