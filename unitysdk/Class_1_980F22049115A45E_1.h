#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_E2910CE9CBBA0DE5;
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_980F22049115A45E_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185A1070)
#define CLASS_1_980F22049115A45E_1_METHOD_1_0911314EFCAA632F_OFFSET UNITYSDK_OFFSET(0x185A0C70)
#define CLASS_1_980F22049115A45E_1_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x185A1EC0)
#define CLASS_1_980F22049115A45E_1_METHOD_1_6B84F80B92733E46_OFFSET UNITYSDK_OFFSET(0x185A16E0)
#define CLASS_1_980F22049115A45E_1_METHOD_1_86E15ADACCC88AE9_OFFSET UNITYSDK_OFFSET(0x185A1800)
#define CLASS_1_980F22049115A45E_1_METHOD_1_942FA2BD37A953D3_OFFSET UNITYSDK_OFFSET(0x185A18B0)
#define CLASS_1_980F22049115A45E_1_METHOD_1_9F15F64AE6AC77E8_OFFSET UNITYSDK_OFFSET(0x185A15D0)
#define CLASS_1_980F22049115A45E_1_METHOD_1_D95BD2FAB075350A_OFFSET UNITYSDK_OFFSET(0x185A0ED0)
#define CLASS_1_980F22049115A45E_1_METHOD_1_F00C9C530ADB1CA9_OFFSET UNITYSDK_OFFSET(0x185A1100)
#define CLASS_1_980F22049115A45E_1_METHOD_1_FB938C30244D6568_OFFSET UNITYSDK_OFFSET(0x185A1190)
#define CLASS_1_980F22049115A45E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x185A0BE0)

inline static constexpr unsigned int Class_1_980F22049115A45E_1_TypeDefinitionIndex = 51172;

class Class_1_980F22049115A45E_1 : public ::System::Object
{
public:
	::Class_2_E2910CE9CBBA0DE5* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AIVariable*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_E2910CE9CBBA0DE5* a1, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E2910CE9CBBA0DE5*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_980F22049115A45E_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0911314EFCAA632F(::Il2CppArray<::RPG::GameCore::AIVariable*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_980F22049115A45E_1_METHOD_1_0911314EFCAA632F_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_980F22049115A45E_1_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_F00C9C530ADB1CA9(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_980F22049115A45E_1_METHOD_1_F00C9C530ADB1CA9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FB938C30244D6568(::RPG::GameCore::AIVariable* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_980F22049115A45E_1_METHOD_1_FB938C30244D6568_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9F15F64AE6AC77E8(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_980F22049115A45E_1_METHOD_1_9F15F64AE6AC77E8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6B84F80B92733E46(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_980F22049115A45E_1_METHOD_1_6B84F80B92733E46_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AIVariable* Method_1_86E15ADACCC88AE9(::System::String* a1)
	{
		return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_980F22049115A45E_1_METHOD_1_86E15ADACCC88AE9_OFFSET))(this, a1);
	}

	::System::String* Method_1_942FA2BD37A953D3(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_980F22049115A45E_1_METHOD_1_942FA2BD37A953D3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_980F22049115A45E_1_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::GameCore::AIVariable* Method_1_D95BD2FAB075350A(::RPG::GameCore::AIVariable* a1)
	{
		return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + CLASS_1_980F22049115A45E_1_METHOD_1_D95BD2FAB075350A_OFFSET))(this, a1);
	}
};
