#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_1BBFAA1B5EC0AE5D.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/MoleMole/Config/RunStateType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_04AABD269B0AE5A9;
class Class_1_AD244B4B106FB904;
namespace MoleMole::Config { class ConfigEntityRunState; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8561C4A0D3993F63_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15CF9520)
#define CLASS_3_8561C4A0D3993F63_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0x15CF9820)
#define CLASS_3_8561C4A0D3993F63_METHOD_3_1D5C4143EE1D2D7C_OFFSET UNITYSDK_OFFSET(0x15CF96B0)
#define CLASS_3_8561C4A0D3993F63_METHOD_3_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x15CF9860)
#define CLASS_3_8561C4A0D3993F63_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15CF9790)
#define CLASS_3_8561C4A0D3993F63_METHOD_3_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0x15CF9460)
#define CLASS_3_8561C4A0D3993F63_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15CF9670)
#define CLASS_3_8561C4A0D3993F63_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x15CF9700)
#define CLASS_3_8561C4A0D3993F63_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15CF8C40)
#define CLASS_3_8561C4A0D3993F63_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x15CF9080)
#define CLASS_3_8561C4A0D3993F63_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15CF9660)
#define CLASS_3_8561C4A0D3993F63_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15CF9090)
#define CLASS_3_8561C4A0D3993F63_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15CF8C80)
#define CLASS_3_8561C4A0D3993F63__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CF9570)
#define CLASS_3_8561C4A0D3993F63__CTOR_OFFSET UNITYSDK_OFFSET(0x15CF95F0)

inline static constexpr unsigned int Class_3_8561C4A0D3993F63_TypeDefinitionIndex = 79158;

class Class_3_8561C4A0D3993F63 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Single Field_3_2; // 0x0
	// static const ::System::Int32 Field_3_15 = 0xA1; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_3_11; // 0x48
	::Class_1_04AABD269B0AE5A9* Field_3_0; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::Class_1_AD244B4B106FB904*>* Field_3_6; // 0x58
	::System::String* Field_3_10; // 0x60
	::MoleMole::Config::ConfigEntityRunState* Field_3_14; // 0x68
	::MoleMole::Config::RunStateType Field_3_5; // 0x70
	::System::Single Field_3_13; // 0x74
	::System::Boolean Field_3_7; // 0x78
	::System::Boolean Field_3_1; // 0x79
	::System::Boolean Field_3_8; // 0x7A
	::System::Boolean Field_3_9; // 0x7B
	::System::Single Field_3_12; // 0x7C
	::System::Single Field_3_4; // 0x80
	::Enum_3_1BBFAA1B5EC0AE5D Field_3_3; // 0x84

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8561C4A0D3993F63__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8561C4A0D3993F63__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8561C4A0D3993F63_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8561C4A0D3993F63_TOSTRING_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8561C4A0D3993F63_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8561C4A0D3993F63_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8561C4A0D3993F63_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8561C4A0D3993F63_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8561C4A0D3993F63_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::MoleMole::Config::AnimMoveState Method_3_1D5C4143EE1D2D7C()
	{
		return ((::MoleMole::Config::AnimMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8561C4A0D3993F63_METHOD_3_1D5C4143EE1D2D7C_OFFSET))(this);
	}

	::System::Void Method_3_BA904CAFF6C7217F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8561C4A0D3993F63_METHOD_3_BA904CAFF6C7217F_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8561C4A0D3993F63_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8561C4A0D3993F63_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8561C4A0D3993F63_METHOD_3_128774387667156B_OFFSET))(this);
	}

	static ::Class_3_8561C4A0D3993F63* Method_3_323F95926A2F616E()
	{
		return ((::Class_3_8561C4A0D3993F63*(*)())((::PBYTE)hIl2Cpp + CLASS_3_8561C4A0D3993F63_METHOD_3_323F95926A2F616E_OFFSET))();
	}
};
