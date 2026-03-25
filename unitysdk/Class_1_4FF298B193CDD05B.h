#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_667811B649B61FAE;
class Class_1_827373C1CEDFE355;
namespace RPG::Client { class ReplayCustomData; }

#define CLASS_1_4FF298B193CDD05B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BBEFB0)
#define CLASS_1_4FF298B193CDD05B_METHOD_1_0F76D2A38DFBC84F_OFFSET UNITYSDK_OFFSET(0x8BBEB10)
#define CLASS_1_4FF298B193CDD05B_METHOD_1_49700BE50E3E6EAA_OFFSET UNITYSDK_OFFSET(0x8BBED60)
#define CLASS_1_4FF298B193CDD05B_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x8BBEB80)
#define CLASS_1_4FF298B193CDD05B_METHOD_1_B10FB9597F17FCB4_OFFSET UNITYSDK_OFFSET(0x8BBEAB0)
#define CLASS_1_4FF298B193CDD05B_METHOD_1_CE36A0F5BF366D85_OFFSET UNITYSDK_OFFSET(0x8BBEC00)
#define CLASS_1_4FF298B193CDD05B_METHOD_1_E05EA7FF0EBACC9A_OFFSET UNITYSDK_OFFSET(0x8BBEE20)
#define CLASS_1_4FF298B193CDD05B__CTOR_OFFSET UNITYSDK_OFFSET(0x8BBEA10)

inline static constexpr unsigned int Class_1_4FF298B193CDD05B_TypeDefinitionIndex = 44892;

class Class_1_4FF298B193CDD05B : public ::System::Object
{
public:
	::Class_1_827373C1CEDFE355* Field_1_2; // 0x10
	::Class_1_667811B649B61FAE* Field_1_0; // 0x18
	::Class_1_667811B649B61FAE* Field_1_1; // 0x20
	::System::Boolean Field_1_5; // 0x28
	::System::Nullable_1<::System::UInt32> Field_1_3; // 0x2C
	::System::Nullable_1<::System::UInt32> Field_1_4; // 0x34

	::System::Void _ctor(::Class_1_827373C1CEDFE355* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_827373C1CEDFE355*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FF298B193CDD05B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B10FB9597F17FCB4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FF298B193CDD05B_METHOD_1_B10FB9597F17FCB4_OFFSET))(this);
	}

	::System::Void Method_1_0F76D2A38DFBC84F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4FF298B193CDD05B_METHOD_1_0F76D2A38DFBC84F_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FF298B193CDD05B_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Void Method_1_CE36A0F5BF366D85(::System::UInt32& a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_4FF298B193CDD05B_METHOD_1_CE36A0F5BF366D85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E05EA7FF0EBACC9A(::RPG::Client::ReplayCustomData*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ReplayCustomData*&))((::PBYTE)hIl2Cpp + CLASS_1_4FF298B193CDD05B_METHOD_1_E05EA7FF0EBACC9A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FF298B193CDD05B_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 Method_1_49700BE50E3E6EAA(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4FF298B193CDD05B_METHOD_1_49700BE50E3E6EAA_OFFSET))(this, a1);
	}
};
