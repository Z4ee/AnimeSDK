#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_1CC18F0BDF4AC85F;
namespace System { class String; }

#define CLASS_1_04DC9DB8A9E6E69D_EQUALS_OFFSET UNITYSDK_OFFSET(0x107F4D70)
#define CLASS_1_04DC9DB8A9E6E69D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x107F4E80)
#define CLASS_1_04DC9DB8A9E6E69D_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x107F5130)
#define CLASS_1_04DC9DB8A9E6E69D_METHOD_1_704E31386CF3AD23_OFFSET UNITYSDK_OFFSET(0x107F4FA0)
#define CLASS_1_04DC9DB8A9E6E69D_METHOD_1_8A862807D8469645_OFFSET UNITYSDK_OFFSET(0x107F5020)
#define CLASS_1_04DC9DB8A9E6E69D_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x107F51A0)
#define CLASS_1_04DC9DB8A9E6E69D_METHOD_1_DC142A2AF2A69784_OFFSET UNITYSDK_OFFSET(0x107F5190)
#define CLASS_1_04DC9DB8A9E6E69D_METHOD_1_E36C139FA3295BC3_OFFSET UNITYSDK_OFFSET(0x107F50C0)
#define CLASS_1_04DC9DB8A9E6E69D__CTOR_OFFSET UNITYSDK_OFFSET(0x107F4D60)

inline static constexpr unsigned int Class_1_04DC9DB8A9E6E69D_TypeDefinitionIndex = 69430;

class Class_1_04DC9DB8A9E6E69D : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Class_1_1CC18F0BDF4AC85F* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Nullable_1<::System::Single> Field_1_3; // 0x24

	::System::Void _ctor(::Class_1_1CC18F0BDF4AC85F* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CC18F0BDF4AC85F*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04DC9DB8A9E6E69D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_04DC9DB8A9E6E69D_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04DC9DB8A9E6E69D_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_1_704E31386CF3AD23(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_04DC9DB8A9E6E69D_METHOD_1_704E31386CF3AD23_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_8A862807D8469645(::Class_1_04DC9DB8A9E6E69D* a1, ::Class_1_04DC9DB8A9E6E69D* a2)
	{
		return ((::System::Boolean(*)(::Class_1_04DC9DB8A9E6E69D*, ::Class_1_04DC9DB8A9E6E69D*))((::PBYTE)hIl2Cpp + CLASS_1_04DC9DB8A9E6E69D_METHOD_1_8A862807D8469645_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04DC9DB8A9E6E69D_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	static ::System::Boolean Method_1_E36C139FA3295BC3(::Class_1_04DC9DB8A9E6E69D* a1, ::Class_1_04DC9DB8A9E6E69D* a2)
	{
		return ((::System::Boolean(*)(::Class_1_04DC9DB8A9E6E69D*, ::Class_1_04DC9DB8A9E6E69D*))((::PBYTE)hIl2Cpp + CLASS_1_04DC9DB8A9E6E69D_METHOD_1_E36C139FA3295BC3_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_DC142A2AF2A69784(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_04DC9DB8A9E6E69D_METHOD_1_DC142A2AF2A69784_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04DC9DB8A9E6E69D_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
