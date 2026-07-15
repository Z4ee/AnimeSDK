#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"

namespace System { class String; }

#define CLASS_2_25BC0526D5698F50_METHOD_2_0BF7906DFB51D071_1_OFFSET UNITYSDK_OFFSET(0x1425DE30)
#define CLASS_2_25BC0526D5698F50_METHOD_2_0BF7906DFB51D071_OFFSET UNITYSDK_OFFSET(0x1425DB80)
#define CLASS_2_25BC0526D5698F50_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1425D7D0)
#define CLASS_2_25BC0526D5698F50_METHOD_2_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x1425D900)
#define CLASS_2_25BC0526D5698F50_METHOD_2_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x1425DEE0)
#define CLASS_2_25BC0526D5698F50_METHOD_2_951B9C1E34A0FB22_OFFSET UNITYSDK_OFFSET(0x1425D9A0)
#define CLASS_2_25BC0526D5698F50_METHOD_2_A9F32815290AD887_OFFSET UNITYSDK_OFFSET(0x1425D830)
#define CLASS_2_25BC0526D5698F50_METHOD_2_EC5C438D855E51DD_OFFSET UNITYSDK_OFFSET(0x1425DC30)
#define CLASS_2_25BC0526D5698F50__CTOR_OFFSET UNITYSDK_OFFSET(0x1425D750)

inline static constexpr unsigned int Class_2_25BC0526D5698F50_TypeDefinitionIndex = 56719;

class Class_2_25BC0526D5698F50 : public ::RPG::Client::PrefGroup
{
public:
	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_25BC0526D5698F50__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25BC0526D5698F50_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_A9F32815290AD887(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_25BC0526D5698F50_METHOD_2_A9F32815290AD887_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_951B9C1E34A0FB22(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_25BC0526D5698F50_METHOD_2_951B9C1E34A0FB22_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BF7906DFB51D071(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_25BC0526D5698F50_METHOD_2_0BF7906DFB51D071_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_EC5C438D855E51DD(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_25BC0526D5698F50_METHOD_2_EC5C438D855E51DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BF7906DFB51D071_1(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_25BC0526D5698F50_METHOD_2_0BF7906DFB51D071_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25BC0526D5698F50_METHOD_2_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_2_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25BC0526D5698F50_METHOD_2_43A478BA01FE29B7_OFFSET))(this);
	}
};
