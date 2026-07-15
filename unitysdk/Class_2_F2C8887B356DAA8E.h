#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"

class Class_0_16E4307DCC419505_363;
class Class_1_6680B389A28C1730;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_F2C8887B356DAA8E_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x173B7950)
#define CLASS_2_F2C8887B356DAA8E_METHOD_2_2091F34306E68C88_OFFSET UNITYSDK_OFFSET(0x173B8480)
#define CLASS_2_F2C8887B356DAA8E_METHOD_2_227866320E384131_OFFSET UNITYSDK_OFFSET(0x173B7B50)
#define CLASS_2_F2C8887B356DAA8E_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x173B7A00)
#define CLASS_2_F2C8887B356DAA8E_METHOD_2_3AB92A310C458D7A_OFFSET UNITYSDK_OFFSET(0x173B7AF0)
#define CLASS_2_F2C8887B356DAA8E_METHOD_2_4DE65AB3A4860CEB_1_OFFSET UNITYSDK_OFFSET(0x173B9470)
#define CLASS_2_F2C8887B356DAA8E_METHOD_2_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0x173B85B0)
#define CLASS_2_F2C8887B356DAA8E_METHOD_2_7379F6F0451DB9CF_OFFSET UNITYSDK_OFFSET(0x173B89A0)
#define CLASS_2_F2C8887B356DAA8E_METHOD_2_7C552E0A9099AB59_OFFSET UNITYSDK_OFFSET(0x173B9090)
#define CLASS_2_F2C8887B356DAA8E_METHOD_2_81C92D6B23C683B9_OFFSET UNITYSDK_OFFSET(0x173B8E60)
#define CLASS_2_F2C8887B356DAA8E_METHOD_2_8C43E6E7E328B9EB_OFFSET UNITYSDK_OFFSET(0x173B8C20)
#define CLASS_2_F2C8887B356DAA8E_METHOD_2_AE7EECB81C6918C4_OFFSET UNITYSDK_OFFSET(0x173B9590)
#define CLASS_2_F2C8887B356DAA8E_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x173B8730)
#define CLASS_2_F2C8887B356DAA8E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x173B7AB0)
#define CLASS_2_F2C8887B356DAA8E_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x173B9430)
#define CLASS_2_F2C8887B356DAA8E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x173B79B0)
#define CLASS_2_F2C8887B356DAA8E__CTOR_OFFSET UNITYSDK_OFFSET(0x173B9E80)

inline static constexpr unsigned int Class_2_F2C8887B356DAA8E_TypeDefinitionIndex = 47495;

class Class_2_F2C8887B356DAA8E : public ::Class_1_952A7C560FC1CD4B
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_363*>* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0x30
	::System::Collections::Generic::List_1<::Class_1_6680B389A28C1730*>* Field_2_2; // 0x38
	::System::Action* Field_2_3; // 0x40
	::System::Boolean Field_2_4; // 0x48
	::System::Boolean Field_2_5; // 0x49
	::System::Single Field_2_6; // 0x4C
	::System::Single Field_2_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_2_3AB92A310C458D7A(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_3AB92A310C458D7A_OFFSET))(a1);
	}

	::System::Void Method_2_227866320E384131(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_227866320E384131_OFFSET))(this, a1);
	}

	::System::Void Method_2_2091F34306E68C88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_2091F34306E68C88_OFFSET))(this);
	}

	::System::Void Method_2_4DE65AB3A4860CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_4DE65AB3A4860CEB_OFFSET))(this);
	}

	::System::Void Method_2_7379F6F0451DB9CF(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_7379F6F0451DB9CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C43E6E7E328B9EB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_8C43E6E7E328B9EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_2_81C92D6B23C683B9(::Il2CppArray<::Class_0_16E4307DCC419505_363*>* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_363*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_81C92D6B23C683B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7C552E0A9099AB59(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_363*>* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_363*>*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_7C552E0A9099AB59_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_4DE65AB3A4860CEB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_4DE65AB3A4860CEB_1_OFFSET))(this);
	}

	::System::Void Method_2_AE7EECB81C6918C4(::EnviromentSystemV2Space::OutputType a1, ::System::Single a2, ::System::Action* a3, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_363*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::System::Single, ::System::Action*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_363*>*))((::PBYTE)hIl2Cpp + CLASS_2_F2C8887B356DAA8E_METHOD_2_AE7EECB81C6918C4_OFFSET))(this, a1, a2, a3, a4);
	}
};
