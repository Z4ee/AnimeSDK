#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }

#define CLASS_1_34AD52BC3D39E51A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x116EAA10)
#define CLASS_1_34AD52BC3D39E51A_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x116EAAC0)
#define CLASS_1_34AD52BC3D39E51A_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x116EAA70)
#define CLASS_1_34AD52BC3D39E51A_METHOD_1_99AE46E753A15A87_OFFSET UNITYSDK_OFFSET(0x116EAC40)
#define CLASS_1_34AD52BC3D39E51A_METHOD_1_9C67531322AC6DDA_OFFSET UNITYSDK_OFFSET(0x116EA790)
#define CLASS_1_34AD52BC3D39E51A_METHOD_1_BA6A6CF67F01DAE2_OFFSET UNITYSDK_OFFSET(0x116EAB10)
#define CLASS_1_34AD52BC3D39E51A_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x116EA9C0)
#define CLASS_1_34AD52BC3D39E51A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x116EA970)
#define CLASS_1_34AD52BC3D39E51A_METHOD_1_EACC41E2EE83C172_OFFSET UNITYSDK_OFFSET(0x116EA830)
#define CLASS_1_34AD52BC3D39E51A__CTOR_OFFSET UNITYSDK_OFFSET(0x116EACA0)

inline static constexpr unsigned int Class_1_34AD52BC3D39E51A_TypeDefinitionIndex = 59062;

class Class_1_34AD52BC3D39E51A : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34AD52BC3D39E51A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9C67531322AC6DDA(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_34AD52BC3D39E51A_METHOD_1_9C67531322AC6DDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_EACC41E2EE83C172(::System::Decimal a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + CLASS_1_34AD52BC3D39E51A_METHOD_1_EACC41E2EE83C172_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34AD52BC3D39E51A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34AD52BC3D39E51A_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34AD52BC3D39E51A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34AD52BC3D39E51A_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34AD52BC3D39E51A_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::String* Method_1_BA6A6CF67F01DAE2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34AD52BC3D39E51A_METHOD_1_BA6A6CF67F01DAE2_OFFSET))(this);
	}

	::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> Method_1_99AE46E753A15A87()
	{
		return ((::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34AD52BC3D39E51A_METHOD_1_99AE46E753A15A87_OFFSET))(this);
	}
};
